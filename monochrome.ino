#include <Arduino.h>
#include <Arduboy2.h>
#include "ATMlib.h"
#include "bitmaps.h"
#include "test1.h"

Arduboy2Base arduboy;
Sprites sprites;
ATMsynth ATM;

void setup() {
    arduboy.begin();
    arduboy.setFrameRate(15);
    arduboy.audio.on();
    atm_synth_setup();

    /* Begin playback of song */
    ATM.play(reinterpret_cast<const uint8_t *>(&test1));
}

void loop() {

  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  sprites.drawSelfMasked(0, 0, mediocre, 0);
  if (arduboy.justPressed(B_BUTTON)) ATM.playPause();
  if (arduboy.justPressed(A_BUTTON)) ATM.playPause();
  arduboy.display();
}

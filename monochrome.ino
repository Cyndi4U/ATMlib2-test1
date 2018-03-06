#include <Arduino.h>
#include <Arduboy2.h>
#include "Sound.h" // <-- This is my simple interface class
#include "bitmaps.h"

Arduboy2Base arduboy;
Sprites sprites;

void setup() {
    arduboy.begin();
    arduboy.setFrameRate(15);
    Sound::init();
    Sound::play_score(INTRO_SONG); // See Sound.h and Sound.cpp (play_score method) 
}

void loop() {

  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  sprites.drawSelfMasked(0, 0, mediocre, 0);
  
  if (arduboy.justPressed(B_BUTTON)) {
    Sound::play_sound(SFX_PLAYER_SHOOT);
  }
  if (arduboy.justPressed(A_BUTTON)) {
    Sound::play_sound(SFX_ENEMY_SHOOT);
  }

  arduboy.display();
}

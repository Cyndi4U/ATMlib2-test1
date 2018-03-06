#include "Sound.h"
#include <Arduboy2Audio.h>
static Arduboy2Audio audio;
#include "src/ATMLib2/ATMlib.h"

// Todo change to <ATMLib.h> once we publish
#include "sound/SFX.h"
#include "sound/evade2_00_intro_alt_smaller.h"

int8_t current_song = -1;

struct atm_sfx_state sfx_state;
void Sound::init() {
  // Initialize audio system
  audio.on();

  // Initialize ATMLib2
  atm_synth_setup();
}

// Todo @Cyndi -- change these to your liking. Look at SFX.h
void Sound::play_sound(int8_t id) {
  static const PROGMEM uint8_t *const sounds[] = {
    (uint8_t *)&SFX_player_shoot,
    (uint8_t *)&SFX_enemy_shoot,
    (uint8_t *)&SFX_player_hit,
    (uint8_t *)&SFX_next_attract_screen,
    (uint8_t *)&SFX_next_attract_char
  };

  atm_synth_stop_sfx_track(&sfx_state);
  atm_synth_play_sfx_track(OSC_CH_ONE, pgm_read_word(&sounds[id]), &sfx_state);
}


// Shut down audio
void Sound::stfu() {
  current_song = -1;
  atm_synth_stop_score();
}

void Sound::play_score(int8_t id) {
  static const PROGMEM uint8_t *const songs[] = {
    (uint8_t *)&evade2_00_intro_alt_smaller,   // 0 INTRO_SONG
  };

  if (current_song == id) {
    return;
  }

  atm_synth_play_score(pgm_read_word(&songs[id]));
  current_song = id;
}

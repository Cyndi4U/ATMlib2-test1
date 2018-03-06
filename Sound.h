#ifndef SOUND_H
#define SOUND_H

#include <stdint.h>
const int8_t SFX_PLAYER_SHOOT = 0;
const int8_t SFX_ENEMY_SHOOT = 1;

// SONGS
const int8_t INTRO_SONG = 0;


class Sound {
public:
  static void init();
  static void stfu();
  static void play_sound(int8_t id);
  static void play_score(int8_t id);
};
#endif

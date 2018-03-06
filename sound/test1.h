#ifndef TEST1_H
#define TEST1_H
  
#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))
#endif
  
#ifndef NUM_PATTERNS
#define NUM_PATTERNS(struct_) (ARRAY_SIZE( ((struct_ *)0)->patterns_offset))
#endif
  
#ifndef DEFINE_PATTERN
#define DEFINE_PATTERN(pattern_id, values) const uint8_t pattern_id[] = values;
#endif
  
/* pattern (channel) / bytes = 29*/
#define test1_pattern0_data { \
    ATM_CMD_M_SET_VOLUME(48), \
    ATM_CMD_M_SET_TEMPO(24), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_CALL(8), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_CALL(8), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_CALL(8), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_CALL(8), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_CALL(8), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_CALL(8), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(test1_pattern0_array, test1_pattern0_data);
    
/* pattern (channel) / bytes = 1*/
#define test1_pattern1_data { \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(test1_pattern1_array, test1_pattern1_data);
    
/* pattern (channel) / bytes = 9*/
#define test1_pattern2_data { \
    ATM_CMD_M_SET_VOLUME(32), \
    ATM_CMD_M_CALL_REPEAT(13, 4), \
    ATM_CMD_M_CALL_REPEAT(12, 2), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(test1_pattern2_array, test1_pattern2_data);
    
/* pattern (channel) / bytes = 22*/
#define test1_pattern3_data { \
    ATM_CMD_M_SET_VOLUME(32), \
    ATM_CMD_M_CALL_REPEAT(11, 2), \
    ATM_CMD_M_CALL(9), \
    ATM_CMD_M_CALL(10), \
    ATM_CMD_M_CALL(9), \
    ATM_CMD_M_CALL(10), \
    ATM_CMD_M_CALL(9), \
    ATM_CMD_M_CALL(10), \
    ATM_CMD_M_CALL(9), \
    ATM_CMD_M_CALL(10), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(test1_pattern3_array, test1_pattern3_data);
    
/* pattern (drum) / bytes = 7*/
#define test1_pattern4_data { \
    ATM_CMD_M_SET_VOLUME(16), \
    ATM_CMD_M_SLIDE_VOL_ON(-8), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_SLIDE_VOL_OFF, \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern4_array, test1_pattern4_data);
    
/* pattern (drum) / bytes = 6*/
#define test1_pattern5_data { \
    ATM_CMD_M_SET_VOLUME(31), \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_M_SET_VOLUME(0), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern5_array, test1_pattern5_data);
    
/* pattern (drum) / bytes = 7*/
#define test1_pattern6_data { \
    ATM_CMD_M_SET_VOLUME(31), \
    ATM_CMD_M_SLIDE_VOL_ON(-4), \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_M_SLIDE_VOL_OFF, \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern6_array, test1_pattern6_data);
    
/* pattern (tune) / "mel1" / bytes = 15*/
#define test1_pattern7_data { \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(7), \
    ATM_CMD_I_NOTE_OFF, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_NOTE_A4_, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_A4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_F4, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern7_array, test1_pattern7_data);
    
/* pattern (tune) / "mel2" / bytes = 15*/
#define test1_pattern8_data { \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(3), \
    ATM_CMD_I_NOTE_OFF, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_NOTE_A4_, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_A4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_F4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern8_array, test1_pattern8_data);
    
/* pattern (tune) / "drm1" / bytes = 22*/
#define test1_pattern9_data { \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(5), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(5), \
    ATM_CMD_M_DELAY_TICKS(3), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(5), \
    ATM_CMD_M_DELAY_TICKS(3), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(6), \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern9_array, test1_pattern9_data);
    
/* pattern (tune) / "drm2" / bytes = 22*/
#define test1_pattern10_data { \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(5), \
    ATM_CMD_M_DELAY_TICKS(3), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(5), \
    ATM_CMD_M_DELAY_TICKS(3), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_DELAY_TICKS(2), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern10_array, test1_pattern10_data);
    
/* pattern (tune) / "drm3" / bytes = 7*/
#define test1_pattern11_data { \
    ATM_CMD_M_CALL(5), \
    ATM_CMD_M_DELAY_TICKS(59), \
    ATM_CMD_M_CALL(5), \
    ATM_CMD_M_DELAY_TICKS(3), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern11_array, test1_pattern11_data);
    
/* pattern (tune) / "har1" / bytes = 5*/
#define test1_pattern12_data { \
    ATM_CMD_I_NOTE_D5, \
    ATM_CMD_M_DELAY_TICKS(56), \
    ATM_CMD_I_NOTE_F5, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern12_array, test1_pattern12_data);
    
/* pattern (tune) / "e" / bytes = 3*/
#define test1_pattern13_data { \
    ATM_CMD_I_NOTE_OFF, \
    ATM_CMD_M_DELAY_TICKS(64), \
    ATM_CMD_I_RETURN, \
}
DEFINE_PATTERN(test1_pattern13_array, test1_pattern13_data);
    
const PROGMEM struct test1_score_data {
  uint8_t fmt;
  uint8_t num_patterns;
  uint16_t patterns_offset[14];
  uint8_t num_channels;
  uint8_t start_patterns[4];
  uint8_t test1_pattern0[sizeof(test1_pattern0_array)];
  uint8_t test1_pattern1[sizeof(test1_pattern1_array)];
  uint8_t test1_pattern2[sizeof(test1_pattern2_array)];
  uint8_t test1_pattern3[sizeof(test1_pattern3_array)];
  uint8_t test1_pattern4[sizeof(test1_pattern4_array)];
  uint8_t test1_pattern5[sizeof(test1_pattern5_array)];
  uint8_t test1_pattern6[sizeof(test1_pattern6_array)];
  uint8_t test1_pattern7[sizeof(test1_pattern7_array)];
  uint8_t test1_pattern8[sizeof(test1_pattern8_array)];
  uint8_t test1_pattern9[sizeof(test1_pattern9_array)];
  uint8_t test1_pattern10[sizeof(test1_pattern10_array)];
  uint8_t test1_pattern11[sizeof(test1_pattern11_array)];
  uint8_t test1_pattern12[sizeof(test1_pattern12_array)];
  uint8_t test1_pattern13[sizeof(test1_pattern13_array)];
} test1 = {
  .fmt = ATM_SCORE_FMT_FULL,
  .num_patterns = NUM_PATTERNS(struct test1_score_data),
  .patterns_offset = {
      offsetof(struct test1_score_data, test1_pattern0),
      offsetof(struct test1_score_data, test1_pattern1),
      offsetof(struct test1_score_data, test1_pattern2),
      offsetof(struct test1_score_data, test1_pattern3),
      offsetof(struct test1_score_data, test1_pattern4),
      offsetof(struct test1_score_data, test1_pattern5),
      offsetof(struct test1_score_data, test1_pattern6),
      offsetof(struct test1_score_data, test1_pattern7),
      offsetof(struct test1_score_data, test1_pattern8),
      offsetof(struct test1_score_data, test1_pattern9),
      offsetof(struct test1_score_data, test1_pattern10),
      offsetof(struct test1_score_data, test1_pattern11),
      offsetof(struct test1_score_data, test1_pattern12),
      offsetof(struct test1_score_data, test1_pattern13),
  },
  .num_channels = 4,
  .start_patterns = {
    0x00,                         // Channel 0 entry pattern (SQUARE)
    0x01,                         // Channel 1 entry pattern (SQUARE)
    0x02,                         // Channel 2 entry pattern (SQUARE)
    0x03,                         // Channel 3 entry pattern (NOISE)
  },
  .test1_pattern0 = test1_pattern0_data,
  .test1_pattern1 = test1_pattern1_data,
  .test1_pattern2 = test1_pattern2_data,
  .test1_pattern3 = test1_pattern3_data,
  .test1_pattern4 = test1_pattern4_data,
  .test1_pattern5 = test1_pattern5_data,
  .test1_pattern6 = test1_pattern6_data,
  .test1_pattern7 = test1_pattern7_data,
  .test1_pattern8 = test1_pattern8_data,
  .test1_pattern9 = test1_pattern9_data,
  .test1_pattern10 = test1_pattern10_data,
  .test1_pattern11 = test1_pattern11_data,
  .test1_pattern12 = test1_pattern12_data,
  .test1_pattern13 = test1_pattern13_data,
};

#endif
#pragma once

// byte 8 bit
typedef unsigned char byte;

// word 16 bit
// unions share same memory!
typedef union {
   unsigned short int WORD;
   struct {
      #ifdef WORDS_LITTLE_ENDIAN
         byte high, low;
      #else
         byte low, high;
      #endif
   } BYTE;
} word;

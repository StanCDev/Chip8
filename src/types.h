#pragma once

#define BYTE_S 8
#define SHORT_S 16
// byte 8 bit
typedef unsigned char byte;



// word 16 bit
// unions share same memory!
// little endian
typedef union {
   unsigned short int WORD;
   struct {
         byte high, low;
   } BYTE;
} word;

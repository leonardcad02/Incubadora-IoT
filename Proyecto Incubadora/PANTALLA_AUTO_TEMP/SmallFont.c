// SmallFont.c
// Font type    : Full (95 characters)
// Font size    : 8x12 pixels
// Memory usage : 1144 bytes

#if defined(__AVR__)
	#include <avr/pgmspace.h>
	#define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#elif defined(__arm__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#endif

fontdatatype SmallFont[1144] PROGMEM={
0x08,0x0C,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,0x00,  // !
0x00,0x28,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x28,0x28,0xFC,0x28,0x50,0xFC,0x50,0x50,0x00,0x00,  // #
0x00,0x20,0x78,0xA8,0xA0,0x60,0x30,0x28,0xA8,0xF0,0x20,0x00,  // $
0x00,0x00,0x48,0xA8,0xB0,0x50,0x28,0x34,0x54,0x48,0x00,0x00,  // %
0x00,0x00,0x20,0x50,0x50,0x78,0xA8,0xA8,0x90,0x6C,0x00,0x00,  // &
0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x04,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x04,0x00,  // (
0x00,0x40,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x00,  // )
0x00,0x00,0x00,0x20,0xA8,0x70,0x70,0xA8,0x20,0x00,0x00,0x00,  // *
0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x80,  // ,
0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,  // .
0x00,0x08,0x10,0x10,0x10,0x20,0x20,0x40,0x40,0x40,0x80,0x00,  // /

0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // 0
0x00,0x00,0x20,0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // 1
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x40,0x80,0xF8,0x00,0x00,  // 2
0x00,0x00,0x70,0x88,0x08,0x30,0x08,0x08,0x88,0x70,0x00,0x00,  // 3
0x00,0x00,0x10,0x30,0x50,0x50,0x90,0x78,0x10,0x18,0x00,0x00,  // 4
0x00,0x00,0xF8,0x80,0x80,0xF0,0x08,0x08,0x88,0x70,0x00,0x00,  // 5
0x00,0x00,0x70,0x90,0x80,0xF0,0x88,0x88,0x88,0x70,0x00,0x00,  // 6
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x20,0x20,0x20,0x00,0x00,  // 7
0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x88,0x70,0x00,0x00,  // 8
0x00,0x00,0x70,0x88,0x88,0x88,0x78,0x08,0x48,0x70,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x20,0x00,  // ;
0x00,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,  // =
0x00,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // >
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x20,0x00,0x20,0x00,0x00,  // ?

0x00,0x00,0x70,0x88,0x98,0xA8,0xA8,0xB8,0x80,0x78,0x00,0x00,  // @
0x00,0x00,0x20,0x20,0x30,0x50,0x50,0x78,0x48,0xCC,0x00,0x00,  // A
0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0x48,0xF0,0x00,0x00,  // B
0x00,0x00,0x78,0x88,0x80,0x80,0x80,0x80,0x88,0x70,0x00,0x00,  // C
0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0x48,0xF0,0x00,0x00,  // D
0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x48,0xF8,0x00,0x00,  // E
0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x40,0xE0,0x00,0x00,  // F
0x00,0x00,0x38,0x48,0x80,0x80,0x9C,0x88,0x48,0x30,0x00,0x00,  // G
0x00,0x00,0xCC,0x48,0x48,0x78,0x48,0x48,0x48,0xCC,0x00,0x00,  // H
0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,  // I
0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xE0,0x00,  // J
0x00,0x00,0xEC,0x48,0x50,0x60,0x50,0x50,0x48,0xEC,0x00,0x00,  // K
0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x44,0xFC,0x00,0x00,  // L
0x00,0x00,0xD8,0xD8,0xD8,0xD8,0xA8,0xA8,0xA8,0xA8,0x00,0x00,  // M
0x00,0x00,0xDC,0x48,0x68,0x68,0x58,0x58,0x48,0xE8,0x00,0x00,  // N
0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // O

0x00,0x00,0xF0,0x48,0x48,0x70,0x40,0x40,0x40,0xE0,0x00,0x00,  // P
0x00,0x00,0x70,0x88,0x88,0x88,0x88,0xE8,0x98,0x70,0x18,0x00,  // Q
0x00,0x00,0xF0,0x48,0x48,0x70,0x50,0x48,0x48,0xEC,0x00,0x00,  // R
0x00,0x00,0x78,0x88,0x80,0x60,0x10,0x08,0x88,0xF0,0x00,0x00,  // S
0x00,0x00,0xF8,0xA8,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // T
0x00,0x00,0xCC,0x48,0x48,0x48,0x48,0x48,0x48,0x30,0x00,0x00,  // U
0x00,0x00,0xCC,0x48,0x48,0x50,0x50,0x30,0x20,0x20,0x00,0x00,  // V
0x00,0x00,0xA8,0xA8,0xA8,0x70,0x50,0x50,0x50,0x50,0x00,0x00,  // W
0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x50,0x50,0xD8,0x00,0x00,  // X
0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // Y
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x40,0x48,0xF8,0x00,0x00,  // Z
0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x38,0x00,  // [
0x00,0x40,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x00,0x00,  // <backslash>
0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00,  // ]
0x00,0x20,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,  // _

0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x38,0x48,0x3C,0x00,0x00,  // a
0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0x70,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x40,0x40,0x38,0x00,0x00,  // c
0x00,0x00,0x18,0x08,0x08,0x38,0x48,0x48,0x48,0x3C,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x78,0x40,0x38,0x00,0x00,  // e
0x00,0x00,0x1C,0x20,0x20,0x78,0x20,0x20,0x20,0x78,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x00,0x3C,0x48,0x30,0x40,0x78,0x44,0x38,  // g
0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0xEC,0x00,0x00,  // h
0x00,0x00,0x20,0x00,0x00,0x60,0x20,0x20,0x20,0x70,0x00,0x00,  // i
0x00,0x00,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0xE0,  // j
0x00,0x00,0xC0,0x40,0x40,0x5C,0x50,0x70,0x48,0xEC,0x00,0x00,  // k
0x00,0x00,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,  // l
0x00,0x00,0x00,0x00,0x00,0xF0,0xA8,0xA8,0xA8,0xA8,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0xEC,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x30,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0x70,0x40,0xE0,  // p
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x48,0x48,0x38,0x08,0x1C,  // q
0x00,0x00,0x00,0x00,0x00,0xD8,0x60,0x40,0x40,0xE0,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x78,0x40,0x30,0x08,0x78,0x00,0x00,  // s
0x00,0x00,0x00,0x20,0x20,0x70,0x20,0x20,0x20,0x18,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0x00,0xD8,0x48,0x48,0x48,0x3C,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x00,0x00,  // v
0x00,0x00,0x00,0x00,0x00,0xA8,0xA8,0x70,0x50,0x50,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0xD8,0x50,0x20,0x50,0xD8,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x20,0xC0,  // y
0x00,0x00,0x00,0x00,0x00,0x78,0x10,0x20,0x20,0x78,0x00,0x00,  // z
0x00,0x18,0x10,0x10,0x10,0x20,0x10,0x10,0x10,0x10,0x18,0x00,  // {
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,  // |
0x00,0x60,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x60,0x00,  // }
0x40,0xA4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ~
};

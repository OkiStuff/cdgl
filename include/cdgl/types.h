#ifndef CDGL_TYPES_H
#define CDGL_TYPES_H

#include <stdint.h>

#ifndef CDGL_MATH_H

typedef struct cdgl_vec2_32
{
	int32_t x;
	int32_t y;
} cdgl_vec2_32;

typedef struct cdgl_vec2_16
{
	int16_t x;
	int16_t y;
} cdgl_vec2_16;

typedef cdgl_vec2_16 cdgl_vec2;
#endif

// TODO: Make rgb565 big endian macro
typedef struct cdgl_color
{
	uint8_t r;
	uint8_t g;
	uint8_t b;
} cdgl_color;

#endif // CDGL_TYPES_H

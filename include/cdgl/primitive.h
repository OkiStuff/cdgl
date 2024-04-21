#ifndef CDGL_PRIMITIVE_H
#define CDGL_PRIMITIVE_H

#include "types.h"

#ifndef CDGL_MAX_PRIMITIVES
	#define CDGL_MAX_PRIMITIVES 20
#endif

typedef enum
{
	CDGL_PRIMITIVE_RECTANGLE = 0,
	CDGL_PRIMITIVE_CIRCLE,
	CDGL_PRIMITIVE_MAPPED_RECTANGLE,
	CDGL_PRIMITIVE_PIXEL
} cdgl_primitive_type;

#define INHERIT_PRIMITIVE_HEAD()\
cdgl_primitive_type type;\
cdgl_vec2 position;

typedef struct cdgl_primitive_head { INHERIT_PRIMITIVE_HEAD() } cdgl_primitive_head;

typedef struct cdgl_primitive_pixel
{
	INHERIT_PRIMITIVE_HEAD()
	cdgl_color color;
} cdgl_primitive_pixel;

#endif // CDGL_PRIMITIVE_H

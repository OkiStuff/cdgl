#ifndef CDGL_PRIMITIVE_RECTANGLE_H
#define CDGL_PRIMITIVE_RECTANGLE_H

#include "instance.h"
#include "types.h"
#include "primitive.h"

typedef struct cdgl_primitive_rectangle
{
	INHERIT_PRIMITIVE_HEAD()
	cdgl_color color;
	int width;
	int height;
} cdgl_primitive_rectangle;

cdgl_vec2 cdgl_primitive_rectangle_draw(cdgl_instance* instance, cdgl_primitive_rectangle* rect);

#endif // CDGL_PRIMITIVE_RECTANGLE_H

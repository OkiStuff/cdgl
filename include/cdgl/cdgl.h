#ifndef CDGL_H
#define CDGL_H

#if !defined(CDGL_SCREEN_WIDTH) || !defined(CDGL_SCREEN_HEIGHT)
	#error "Screen size not defined (CDGL_SCREEN_WIDTH/CDGL_SCREEN_HEIGHT)"
#endif

#include "types.h"
#include "instance.h"
#include "primitive.h"
#include "primitive_rectangle.h"

#undef INHERIT_PRIMITIVE_HEAD
#endif // CDGL_H

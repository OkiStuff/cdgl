#define CDGL_PRECALCULATE_SCREEN_CENTER
#include <cdgl/cdgl.h>

int main(void)
{
    cdgl_instance instance = {0};
    cdgl_instance_create(&instance);

    cdgl_bool running = CDGL_TRUE;

    int rect_size = 30;
    int rect_size_diff = -5;

    while (running)
    {
        rect_size -= rect_size_diff;

        if (rect_size > 150) rect_size_diff = -rect_size_diff;
        
        cdgl_2d_begin(&instance);
            cdgl_screen_clear(&instance, CDGL_COLORS_GRAY);
            cdgl_2d_draw_rectangle(CDGL_SCREEN_CENTER_X, CDGL_SCREEN_CENTER_Y, rect_size, rect_size);
        cdgl_2d_end(&instance);
    }

    cdgl_instance_destroy(&instance);
}

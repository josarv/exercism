#include "resistor-color.h"

static resistor_band_t color_list[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

resistor_band_t color_code(resistor_band_t color)
{
    return color;
}

resistor_band_t *colors(void)
{
    return (resistor_band_t *)&color_list;
}

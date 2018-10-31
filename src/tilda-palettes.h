#ifndef TILDA_PALETTES_H
#define TILDA_PALETTES_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

/**
 * The number of colors contained in a #TildaColorPalette.
 */
#define TILDA_COLOR_PALETTE_SIZE 16

/**
 * A TildaColorPalette type is used to hold the colors of the palette.
 */
typedef const GdkRGBA TildaColorPalette;

/**
 * A color scheme links a color scheme name to its corresponding
 * color palette.
 */
typedef struct _TildaColorPaletteScheme
{
  const char *name;
    TildaColorPalette *palette;
} TildaColorScheme;

/**
 * Gets a list of color schemes. Use
 * tilda_palettes_get_n_palette_schemes to
 * determine the number of color schemes.
 *
 * @return A pointer to an array of color schemes.
 */
TildaColorScheme *tilda_palettes_get_palette_schemes (void);

/**
 * Gets the number of palette schemes.
 *
 * @return The number of color schemes contained in
 *         #tilda_palettes_get_palette_schemes.
 */
gint tilda_palettes_get_n_palette_schemes (void);

/**
 * Get the currently active color palette.
 *
 * @return A pointer to a color palette of size TILDA_COLOR_PALETTE_SIZE.
 */
TildaColorPalette *tilda_palettes_get_current_palette (void);

/**
 * Sets the currently active color palette.
 *
 * @param palette A pointer to a color palette of size TILDA_COLOR_PALETTE_SIZE.
 */
void tilda_palettes_set_current_palette (TildaColorPalette *palette);

/**
 * Gets the color at the specified position from the palette.
 *
 * @param palette A TildaColorPalette of size TILDA_COLOR_PALETTE_SIZE.
 * @param color_num Position of the color in the palette.
 * @return A pointer to a GdkRGBA color struct.
 */
GdkRGBA *tilda_palettes_get_palette_color (TildaColorPalette *palette,
                                           int color_num);

G_END_DECLS

#endif //TILDA_PALETTES_H

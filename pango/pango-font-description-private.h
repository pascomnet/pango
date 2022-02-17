#pragma once

#include "pango-font-description.h"

G_BEGIN_DECLS

gboolean pango_font_description_is_similar       (const PangoFontDescription *a,
                                                  const PangoFontDescription *b);

int      pango_font_description_compute_distance (const PangoFontDescription *a,
                                                  const PangoFontDescription *b);

G_END_DECLS


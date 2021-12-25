#pragma once

#include "pango-language-set-private.h"

G_BEGIN_DECLS

#define PANGO_TYPE_LANGUAGE_SET_SIMPLE (pango_language_set_simple_get_type ())

G_DECLARE_FINAL_TYPE (PangoLanguageSetSimple, pango_language_set_simple, PANGO, LANGUAGE_SET_SIMPLE, PangoLanguageSet)

PangoLanguageSetSimple *pango_language_set_simple_new           (void);

void                    pango_language_set_simple_add_language  (PangoLanguageSetSimple *self,
                                                                 PangoLanguage          *language);

G_END_DECLS

/*
 * textstylestatic_request_compound.h
 *
 * A Textstylestatic Object and children
 */

#ifndef _textstylestatic_request_compound_H_
#define _textstylestatic_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct textstylestatic_request_compound_t textstylestatic_request_compound_t;




typedef struct textstylestatic_request_compound_t {
    int fki_font_id; //numeric
    int b_textstylestatic_bold; //boolean
    int b_textstylestatic_underline; //boolean
    int b_textstylestatic_italic; //boolean
    int b_textstylestatic_strikethrough; //boolean
    int i_textstylestatic_fontcolor; //numeric
    int i_textstylestatic_size; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} textstylestatic_request_compound_t;

__attribute__((deprecated)) textstylestatic_request_compound_t *textstylestatic_request_compound_create(
    int fki_font_id,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
);

void textstylestatic_request_compound_free(textstylestatic_request_compound_t *textstylestatic_request_compound);

textstylestatic_request_compound_t *textstylestatic_request_compound_parseFromJSON(cJSON *textstylestatic_request_compoundJSON);

cJSON *textstylestatic_request_compound_convertToJSON(textstylestatic_request_compound_t *textstylestatic_request_compound);

#endif /* _textstylestatic_request_compound_H_ */


/*
 * textstylestatic_response.h
 *
 * A Textstylestatic Object
 */

#ifndef _textstylestatic_response_H_
#define _textstylestatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct textstylestatic_response_t textstylestatic_response_t;




typedef struct textstylestatic_response_t {
    int pki_textstylestatic_id; //numeric
    int fki_font_id; //numeric
    char *s_font_name; // string
    int b_textstylestatic_bold; //boolean
    int b_textstylestatic_underline; //boolean
    int b_textstylestatic_italic; //boolean
    int b_textstylestatic_strikethrough; //boolean
    int i_textstylestatic_fontcolor; //numeric
    int i_textstylestatic_size; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} textstylestatic_response_t;

__attribute__((deprecated)) textstylestatic_response_t *textstylestatic_response_create(
    int pki_textstylestatic_id,
    int fki_font_id,
    char *s_font_name,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
);

void textstylestatic_response_free(textstylestatic_response_t *textstylestatic_response);

textstylestatic_response_t *textstylestatic_response_parseFromJSON(cJSON *textstylestatic_responseJSON);

cJSON *textstylestatic_response_convertToJSON(textstylestatic_response_t *textstylestatic_response);

#endif /* _textstylestatic_response_H_ */


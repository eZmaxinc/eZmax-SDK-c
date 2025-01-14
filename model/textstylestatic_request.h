/*
 * textstylestatic_request.h
 *
 * A Textstylestatic Object
 */

#ifndef _textstylestatic_request_H_
#define _textstylestatic_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct textstylestatic_request_t textstylestatic_request_t;




typedef struct textstylestatic_request_t {
    int fki_font_id; //numeric
    int b_textstylestatic_bold; //boolean
    int b_textstylestatic_underline; //boolean
    int b_textstylestatic_italic; //boolean
    int b_textstylestatic_strikethrough; //boolean
    int i_textstylestatic_fontcolor; //numeric
    int i_textstylestatic_size; //numeric

} textstylestatic_request_t;

textstylestatic_request_t *textstylestatic_request_create(
    int fki_font_id,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
);

void textstylestatic_request_free(textstylestatic_request_t *textstylestatic_request);

textstylestatic_request_t *textstylestatic_request_parseFromJSON(cJSON *textstylestatic_requestJSON);

cJSON *textstylestatic_request_convertToJSON(textstylestatic_request_t *textstylestatic_request);

#endif /* _textstylestatic_request_H_ */


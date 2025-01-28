/*
 * ezsignformfield_response.h
 *
 * An Ezsignformfield Object
 */

#ifndef _ezsignformfield_response_H_
#define _ezsignformfield_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfield_response_t ezsignformfield_response_t;

#include "enum_horizontalalignment.h"
#include "field_e_ezsignformfield_dependencyrequirement.h"
#include "textstylestatic_response_compound.h"



typedef struct ezsignformfield_response_t {
    int pki_ezsignformfield_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string
    int i_ezsignformfield_x; //numeric
    int i_ezsignformfield_y; //numeric
    int i_ezsignformfield_width; //numeric
    int i_ezsignformfield_height; //numeric
    int b_ezsignformfield_autocomplete; //boolean
    int b_ezsignformfield_selected; //boolean
    char *s_ezsignformfield_enteredvalue; // string
    ezmax_api_definition__full_field_e_ezsignformfield_dependencyrequirement__e e_ezsignformfield_dependencyrequirement; //referenced enum
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignformfield_horizontalalignment; //referenced enum
    struct textstylestatic_response_compound_t *obj_textstylestatic; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfield_response_t;

__attribute__((deprecated)) ezsignformfield_response_t *ezsignformfield_response_create(
    int pki_ezsignformfield_id,
    int i_ezsignpage_pagenumber,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value,
    int i_ezsignformfield_x,
    int i_ezsignformfield_y,
    int i_ezsignformfield_width,
    int i_ezsignformfield_height,
    int b_ezsignformfield_autocomplete,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue,
    ezmax_api_definition__full_field_e_ezsignformfield_dependencyrequirement__e e_ezsignformfield_dependencyrequirement,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignformfield_horizontalalignment,
    textstylestatic_response_compound_t *obj_textstylestatic
);

void ezsignformfield_response_free(ezsignformfield_response_t *ezsignformfield_response);

ezsignformfield_response_t *ezsignformfield_response_parseFromJSON(cJSON *ezsignformfield_responseJSON);

cJSON *ezsignformfield_response_convertToJSON(ezsignformfield_response_t *ezsignformfield_response);

#endif /* _ezsignformfield_response_H_ */


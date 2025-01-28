/*
 * ezsignformfieldgroup_response.h
 *
 * An Ezsignformfieldgroup Object
 */

#ifndef _ezsignformfieldgroup_response_H_
#define _ezsignformfieldgroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_response_t ezsignformfieldgroup_response_t;

#include "enum_textvalidation.h"
#include "field_e_ezsignformfieldgroup_signerrequirement.h"
#include "field_e_ezsignformfieldgroup_tooltipposition.h"
#include "field_e_ezsignformfieldgroup_type.h"



typedef struct ezsignformfieldgroup_response_t {
    int pki_ezsignformfieldgroup_id; //numeric
    int fki_ezsigndocument_id; //numeric
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_type__e e_ezsignformfieldgroup_type; //referenced enum
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e e_ezsignformfieldgroup_signerrequirement; //referenced enum
    char *s_ezsignformfieldgroup_label; // string
    int i_ezsignformfieldgroup_step; //numeric
    char *s_ezsignformfieldgroup_defaultvalue; // string
    int i_ezsignformfieldgroup_filledmin; //numeric
    int i_ezsignformfieldgroup_filledmax; //numeric
    int b_ezsignformfieldgroup_readonly; //boolean
    int i_ezsignformfieldgroup_maxlength; //numeric
    int b_ezsignformfieldgroup_encrypted; //boolean
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation; //referenced enum
    char *s_ezsignformfieldgroup_regexp; // string
    char *s_ezsignformfieldgroup_textvalidationcustommessage; // string
    char *t_ezsignformfieldgroup_tooltip; // string
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfieldgroup_response_t;

__attribute__((deprecated)) ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_create(
    int pki_ezsignformfieldgroup_id,
    int fki_ezsigndocument_id,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_type__e e_ezsignformfieldgroup_type,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e e_ezsignformfieldgroup_signerrequirement,
    char *s_ezsignformfieldgroup_label,
    int i_ezsignformfieldgroup_step,
    char *s_ezsignformfieldgroup_defaultvalue,
    int i_ezsignformfieldgroup_filledmin,
    int i_ezsignformfieldgroup_filledmax,
    int b_ezsignformfieldgroup_readonly,
    int i_ezsignformfieldgroup_maxlength,
    int b_ezsignformfieldgroup_encrypted,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation,
    char *s_ezsignformfieldgroup_regexp,
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition
);

void ezsignformfieldgroup_response_free(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response);

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_parseFromJSON(cJSON *ezsignformfieldgroup_responseJSON);

cJSON *ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response);

#endif /* _ezsignformfieldgroup_response_H_ */


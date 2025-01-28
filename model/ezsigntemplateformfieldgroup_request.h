/*
 * ezsigntemplateformfieldgroup_request.h
 *
 * A Ezsigntemplateformfieldgroup Object
 */

#ifndef _ezsigntemplateformfieldgroup_request_H_
#define _ezsigntemplateformfieldgroup_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_request_t ezsigntemplateformfieldgroup_request_t;

#include "enum_textvalidation.h"
#include "field_e_ezsigntemplateformfieldgroup_signerrequirement.h"
#include "field_e_ezsigntemplateformfieldgroup_tooltipposition.h"
#include "field_e_ezsigntemplateformfieldgroup_type.h"



typedef struct ezsigntemplateformfieldgroup_request_t {
    int pki_ezsigntemplateformfieldgroup_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_type__e e_ezsigntemplateformfieldgroup_type; //referenced enum
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e e_ezsigntemplateformfieldgroup_signerrequirement; //referenced enum
    char *s_ezsigntemplateformfieldgroup_label; // string
    int i_ezsigntemplateformfieldgroup_step; //numeric
    char *s_ezsigntemplateformfieldgroup_defaultvalue; // string
    int i_ezsigntemplateformfieldgroup_filledmin; //numeric
    int i_ezsigntemplateformfieldgroup_filledmax; //numeric
    int b_ezsigntemplateformfieldgroup_readonly; //boolean
    int i_ezsigntemplateformfieldgroup_maxlength; //numeric
    int b_ezsigntemplateformfieldgroup_encrypted; //boolean
    char *s_ezsigntemplateformfieldgroup_regexp; // string
    char *s_ezsigntemplateformfieldgroup_textvalidationcustommessage; // string
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplateformfieldgroup_textvalidation; //referenced enum
    char *t_ezsigntemplateformfieldgroup_tooltip; // string
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__e e_ezsigntemplateformfieldgroup_tooltipposition; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroup_request_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_create(
    int pki_ezsigntemplateformfieldgroup_id,
    int fki_ezsigntemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_type__e e_ezsigntemplateformfieldgroup_type,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e e_ezsigntemplateformfieldgroup_signerrequirement,
    char *s_ezsigntemplateformfieldgroup_label,
    int i_ezsigntemplateformfieldgroup_step,
    char *s_ezsigntemplateformfieldgroup_defaultvalue,
    int i_ezsigntemplateformfieldgroup_filledmin,
    int i_ezsigntemplateformfieldgroup_filledmax,
    int b_ezsigntemplateformfieldgroup_readonly,
    int i_ezsigntemplateformfieldgroup_maxlength,
    int b_ezsigntemplateformfieldgroup_encrypted,
    char *s_ezsigntemplateformfieldgroup_regexp,
    char *s_ezsigntemplateformfieldgroup_textvalidationcustommessage,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplateformfieldgroup_textvalidation,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__e e_ezsigntemplateformfieldgroup_tooltipposition
);

void ezsigntemplateformfieldgroup_request_free(ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request);

ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_requestJSON);

cJSON *ezsigntemplateformfieldgroup_request_convertToJSON(ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request);

#endif /* _ezsigntemplateformfieldgroup_request_H_ */


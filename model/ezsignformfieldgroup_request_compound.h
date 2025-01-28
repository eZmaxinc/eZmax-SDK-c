/*
 * ezsignformfieldgroup_request_compound.h
 *
 * An Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef _ezsignformfieldgroup_request_compound_H_
#define _ezsignformfieldgroup_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_request_compound_t ezsignformfieldgroup_request_compound_t;

#include "custom_dropdown_element_request_compound.h"
#include "enum_textvalidation.h"
#include "ezsignformfield_request_compound.h"
#include "ezsignformfieldgroupsigner_request_compound.h"
#include "field_e_ezsignformfieldgroup_signerrequirement.h"
#include "field_e_ezsignformfieldgroup_tooltipposition.h"
#include "field_e_ezsignformfieldgroup_type.h"



typedef struct ezsignformfieldgroup_request_compound_t {
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
    char *s_ezsignformfieldgroup_regexp; // string
    char *s_ezsignformfieldgroup_textvalidationcustommessage; // string
    char *t_ezsignformfieldgroup_tooltip; // string
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition; //referenced enum
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation; //referenced enum
    list_t *a_obj_ezsignformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsignformfield; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfieldgroup_request_compound_t;

__attribute__((deprecated)) ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound_create(
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
    char *s_ezsignformfieldgroup_regexp,
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation,
    list_t *a_obj_ezsignformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfield
);

void ezsignformfieldgroup_request_compound_free(ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound);

ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound_parseFromJSON(cJSON *ezsignformfieldgroup_request_compoundJSON);

cJSON *ezsignformfieldgroup_request_compound_convertToJSON(ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound);

#endif /* _ezsignformfieldgroup_request_compound_H_ */


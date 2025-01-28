/*
 * ezsigntemplateformfieldgroup_response_compound.h
 *
 * A Ezsigntemplateformfieldgroup Object and children
 */

#ifndef _ezsigntemplateformfieldgroup_response_compound_H_
#define _ezsigntemplateformfieldgroup_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_response_compound_t ezsigntemplateformfieldgroup_response_compound_t;

#include "custom_dropdown_element_response_compound.h"
#include "enum_textvalidation.h"
#include "ezsigntemplateformfield_response_compound.h"
#include "ezsigntemplateformfieldgroupsigner_response_compound.h"
#include "field_e_ezsigntemplateformfieldgroup_signerrequirement.h"
#include "field_e_ezsigntemplateformfieldgroup_tooltipposition.h"
#include "field_e_ezsigntemplateformfieldgroup_type.h"



typedef struct ezsigntemplateformfieldgroup_response_compound_t {
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
    list_t *a_obj_ezsigntemplateformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsigntemplateformfield; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroup_response_compound_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_create(
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
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__e e_ezsigntemplateformfieldgroup_tooltipposition,
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
);

void ezsigntemplateformfieldgroup_response_compound_free(ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound);

ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_response_compoundJSON);

cJSON *ezsigntemplateformfieldgroup_response_compound_convertToJSON(ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound);

#endif /* _ezsigntemplateformfieldgroup_response_compound_H_ */


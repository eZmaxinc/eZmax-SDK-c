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
#include "ezsigntemplateformfield_response_compound.h"
#include "ezsigntemplateformfieldgroupsigner_response_compound.h"
#include "field_e_ezsigntemplateformfieldgroup_signerrequirement.h"
#include "field_e_ezsigntemplateformfieldgroup_tooltipposition.h"
#include "field_e_ezsigntemplateformfieldgroup_type.h"

// Enum  for ezsigntemplateformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__Text, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__Textarea, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__Dropdown, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__Radio, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__Checkbox } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e;

char* ezsigntemplateformfieldgroup_response_compound_e_ezsigntemplateformfieldgroup_type_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e e_ezsigntemplateformfieldgroup_type);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e ezsigntemplateformfieldgroup_response_compound_e_ezsigntemplateformfieldgroup_type_FromString(char* e_ezsigntemplateformfieldgroup_type);

// Enum  for ezsigntemplateformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__All, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__One } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e;

char* ezsigntemplateformfieldgroup_response_compound_e_ezsigntemplateformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e e_ezsigntemplateformfieldgroup_signerrequirement);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e ezsigntemplateformfieldgroup_response_compound_e_ezsigntemplateformfieldgroup_signerrequirement_FromString(char* e_ezsigntemplateformfieldgroup_signerrequirement);

// Enum  for ezsigntemplateformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__TopLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__TopCenter, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__TopRight, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__MiddleLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__MiddleRight, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__BottomLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__BottomCenter, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__BottomRight } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e;

char* ezsigntemplateformfieldgroup_response_compound_e_ezsigntemplateformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e e_ezsigntemplateformfieldgroup_tooltipposition);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__e ezsigntemplateformfieldgroup_response_compound_e_ezsigntemplateformfieldgroup_tooltipposition_FromString(char* e_ezsigntemplateformfieldgroup_tooltipposition);



typedef struct ezsigntemplateformfieldgroup_response_compound_t {
    int pki_ezsigntemplateformfieldgroup_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    field_e_ezsigntemplateformfieldgroup_type_t *e_ezsigntemplateformfieldgroup_type; // custom
    field_e_ezsigntemplateformfieldgroup_signerrequirement_t *e_ezsigntemplateformfieldgroup_signerrequirement; // custom
    char *s_ezsigntemplateformfieldgroup_label; // string
    int i_ezsigntemplateformfieldgroup_step; //numeric
    char *s_ezsigntemplateformfieldgroup_defaultvalue; // string
    int i_ezsigntemplateformfieldgroup_filledmin; //numeric
    int i_ezsigntemplateformfieldgroup_filledmax; //numeric
    int b_ezsigntemplateformfieldgroup_readonly; //boolean
    int i_ezsigntemplateformfieldgroup_maxlength; //numeric
    int b_ezsigntemplateformfieldgroup_encrypted; //boolean
    char *s_ezsigntemplateformfieldgroup_regexp; // string
    char *t_ezsigntemplateformfieldgroup_tooltip; // string
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition; // custom
    list_t *a_obj_ezsigntemplateformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsigntemplateformfield; //nonprimitive container

} ezsigntemplateformfieldgroup_response_compound_t;

ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_create(
    int pki_ezsigntemplateformfieldgroup_id,
    int fki_ezsigntemplatedocument_id,
    field_e_ezsigntemplateformfieldgroup_type_t *e_ezsigntemplateformfieldgroup_type,
    field_e_ezsigntemplateformfieldgroup_signerrequirement_t *e_ezsigntemplateformfieldgroup_signerrequirement,
    char *s_ezsigntemplateformfieldgroup_label,
    int i_ezsigntemplateformfieldgroup_step,
    char *s_ezsigntemplateformfieldgroup_defaultvalue,
    int i_ezsigntemplateformfieldgroup_filledmin,
    int i_ezsigntemplateformfieldgroup_filledmax,
    int b_ezsigntemplateformfieldgroup_readonly,
    int i_ezsigntemplateformfieldgroup_maxlength,
    int b_ezsigntemplateformfieldgroup_encrypted,
    char *s_ezsigntemplateformfieldgroup_regexp,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition,
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
);

void ezsigntemplateformfieldgroup_response_compound_free(ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound);

ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_response_compoundJSON);

cJSON *ezsigntemplateformfieldgroup_response_compound_convertToJSON(ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound);

#endif /* _ezsigntemplateformfieldgroup_response_compound_H_ */


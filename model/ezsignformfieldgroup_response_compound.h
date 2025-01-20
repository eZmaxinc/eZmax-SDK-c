/*
 * ezsignformfieldgroup_response_compound.h
 *
 * An Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef _ezsignformfieldgroup_response_compound_H_
#define _ezsignformfieldgroup_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_response_compound_t ezsignformfieldgroup_response_compound_t;

#include "custom_dropdown_element_response.h"
#include "enum_textvalidation.h"
#include "ezsignformfield_response_compound.h"
#include "ezsignformfieldgroupsigner_response.h"
#include "field_e_ezsignformfieldgroup_signerrequirement.h"
#include "field_e_ezsignformfieldgroup_tooltipposition.h"
#include "field_e_ezsignformfieldgroup_type.h"

// Enum  for ezsignformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Text, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Textarea, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Dropdown, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Radio, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Checkbox, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Number, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Date } ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e;

char* ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_type_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_type);

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_type_FromString(char* e_ezsignformfieldgroup_type);

// Enum  for ezsignformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__All, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__One } ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e;

char* ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_signerrequirement);

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_signerrequirement_FromString(char* e_ezsignformfieldgroup_signerrequirement);

// Enum  for ezsignformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__None, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Date (MM/DD/YY), ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Date (DD/MM/YY), ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Email, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Letters, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Numbers, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Zip, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Zip+4, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__PostalCode, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__Custom } ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e;

char* ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_textvalidation);

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_textvalidation_FromString(char* e_ezsignformfieldgroup_textvalidation);

// Enum  for ezsignformfieldgroup_response_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_response_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__TopLeft, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__TopCenter, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__TopRight, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__MiddleLeft, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__MiddleRight, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__BottomLeft, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__BottomCenter, ezmax_api_definition__full_ezsignformfieldgroup_response_compound__BottomRight } ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e;

char* ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e e_ezsignformfieldgroup_tooltipposition);

ezmax_api_definition__full_ezsignformfieldgroup_response_compound__e ezsignformfieldgroup_response_compound_e_ezsignformfieldgroup_tooltipposition_FromString(char* e_ezsignformfieldgroup_tooltipposition);



typedef struct ezsignformfieldgroup_response_compound_t {
    int pki_ezsignformfieldgroup_id; //numeric
    int fki_ezsigndocument_id; //numeric
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type; // custom
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement; // custom
    char *s_ezsignformfieldgroup_label; // string
    int i_ezsignformfieldgroup_step; //numeric
    char *s_ezsignformfieldgroup_defaultvalue; // string
    int i_ezsignformfieldgroup_filledmin; //numeric
    int i_ezsignformfieldgroup_filledmax; //numeric
    int b_ezsignformfieldgroup_readonly; //boolean
    int i_ezsignformfieldgroup_maxlength; //numeric
    int b_ezsignformfieldgroup_encrypted; //boolean
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation; // custom
    char *s_ezsignformfieldgroup_regexp; // string
    char *s_ezsignformfieldgroup_textvalidationcustommessage; // string
    char *t_ezsignformfieldgroup_tooltip; // string
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition; // custom
    list_t *a_obj_ezsignformfield; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsignformfieldgroupsigner; //nonprimitive container

} ezsignformfieldgroup_response_compound_t;

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_create(
    int pki_ezsignformfieldgroup_id,
    int fki_ezsigndocument_id,
    field_e_ezsignformfieldgroup_type_t *e_ezsignformfieldgroup_type,
    field_e_ezsignformfieldgroup_signerrequirement_t *e_ezsignformfieldgroup_signerrequirement,
    char *s_ezsignformfieldgroup_label,
    int i_ezsignformfieldgroup_step,
    char *s_ezsignformfieldgroup_defaultvalue,
    int i_ezsignformfieldgroup_filledmin,
    int i_ezsignformfieldgroup_filledmax,
    int b_ezsignformfieldgroup_readonly,
    int i_ezsignformfieldgroup_maxlength,
    int b_ezsignformfieldgroup_encrypted,
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation,
    char *s_ezsignformfieldgroup_regexp,
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition,
    list_t *a_obj_ezsignformfield,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfieldgroupsigner
);

void ezsignformfieldgroup_response_compound_free(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound);

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_parseFromJSON(cJSON *ezsignformfieldgroup_response_compoundJSON);

cJSON *ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound);

#endif /* _ezsignformfieldgroup_response_compound_H_ */


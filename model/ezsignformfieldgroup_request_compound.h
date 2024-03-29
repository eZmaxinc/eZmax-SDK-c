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

// Enum  for ezsignformfieldgroup_request_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_request_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Text, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Textarea, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Dropdown, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Radio, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Checkbox } ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e;

char* ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_type_ToString(ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e e_ezsignformfieldgroup_type);

ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_type_FromString(char* e_ezsignformfieldgroup_type);

// Enum  for ezsignformfieldgroup_request_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_request_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__All, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__One } ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e;

char* ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e e_ezsignformfieldgroup_signerrequirement);

ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_signerrequirement_FromString(char* e_ezsignformfieldgroup_signerrequirement);

// Enum  for ezsignformfieldgroup_request_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_request_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__TopLeft, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__TopCenter, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__TopRight, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__MiddleLeft, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__MiddleRight, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__BottomLeft, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__BottomCenter, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__BottomRight } ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e;

char* ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e e_ezsignformfieldgroup_tooltipposition);

ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_tooltipposition_FromString(char* e_ezsignformfieldgroup_tooltipposition);

// Enum  for ezsignformfieldgroup_request_compound

typedef enum  { ezmax_api_definition__full_ezsignformfieldgroup_request_compound__NULL = 0, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__None, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Date (MM/DD/YY), ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Date (DD/MM/YY), ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Email, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Letters, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Numbers, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Zip, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Zip+4, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__PostalCode, ezmax_api_definition__full_ezsignformfieldgroup_request_compound__Custom } ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e;

char* ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e e_ezsignformfieldgroup_textvalidation);

ezmax_api_definition__full_ezsignformfieldgroup_request_compound__e ezsignformfieldgroup_request_compound_e_ezsignformfieldgroup_textvalidation_FromString(char* e_ezsignformfieldgroup_textvalidation);



typedef struct ezsignformfieldgroup_request_compound_t {
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
    char *s_ezsignformfieldgroup_regexp; // string
    char *t_ezsignformfieldgroup_tooltip; // string
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition; // custom
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation; // custom
    list_t *a_obj_ezsignformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsignformfield; //nonprimitive container

} ezsignformfieldgroup_request_compound_t;

ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound_create(
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
    char *s_ezsignformfieldgroup_regexp,
    char *t_ezsignformfieldgroup_tooltip,
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition,
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation,
    list_t *a_obj_ezsignformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfield
);

void ezsignformfieldgroup_request_compound_free(ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound);

ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound_parseFromJSON(cJSON *ezsignformfieldgroup_request_compoundJSON);

cJSON *ezsignformfieldgroup_request_compound_convertToJSON(ezsignformfieldgroup_request_compound_t *ezsignformfieldgroup_request_compound);

#endif /* _ezsignformfieldgroup_request_compound_H_ */


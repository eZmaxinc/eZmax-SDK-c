/*
 * custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request.h
 *
 * An Ezsignformfieldgroup Object in the context of a createEzsignelementsPositionedByWord path
 */

#ifndef _custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_H_
#define _custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t;

#include "custom_create_ezsignelements_positioned_by_word_request.h"
#include "custom_dropdown_element_request.h"
#include "enum_textvalidation.h"
#include "ezsignformfield_request_compound.h"
#include "ezsignformfieldgroupsigner_request.h"
#include "field_e_ezsignformfieldgroup_signerrequirement.h"
#include "field_e_ezsignformfieldgroup_tooltipposition.h"
#include "field_e_ezsignformfieldgroup_type.h"

// Enum  for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request

typedef enum  { ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL = 0, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Text, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Textarea, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Dropdown, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Radio, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Checkbox, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Number, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Date } ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e;

char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_type_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_type);

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_type_FromString(char* e_ezsignformfieldgroup_type);

// Enum  for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request

typedef enum  { ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL = 0, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__All, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__One } ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e;

char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_signerrequirement);

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_signerrequirement_FromString(char* e_ezsignformfieldgroup_signerrequirement);

// Enum  for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request

typedef enum  { ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL = 0, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__TopLeft, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__TopCenter, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__TopRight, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__MiddleLeft, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__MiddleRight, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__BottomLeft, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__BottomCenter, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__BottomRight } ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e;

char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_tooltipposition);

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_tooltipposition_FromString(char* e_ezsignformfieldgroup_tooltipposition);

// Enum  for custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request

typedef enum  { ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__NULL = 0, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__None, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Date (YYYY_MM_DD), ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Date (MM/DD/YYYY), ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Date (MM/DD/YY), ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Date (DD/MM/YYYY), ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Date (DD/MM/YY), ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Email, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Letters, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Numbers, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Zip, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Zip+4, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__PostalCode, ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__Custom } ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e;

char* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e e_ezsignformfieldgroup_textvalidation);

ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__e custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_e_ezsignformfieldgroup_textvalidation_FromString(char* e_ezsignformfieldgroup_textvalidation);



typedef struct custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t {
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
    char *s_ezsignformfieldgroup_textvalidationcustommessage; // string
    char *t_ezsignformfieldgroup_tooltip; // string
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition; // custom
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation; // custom
    list_t *a_obj_ezsignformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsignformfield; //nonprimitive container
    struct custom_create_ezsignelements_positioned_by_word_request_t *obj_createezsignelementspositionedbyword; //model

} custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t;

custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_create(
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
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition,
    enum_textvalidation_t *e_ezsignformfieldgroup_textvalidation,
    list_t *a_obj_ezsignformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfield,
    custom_create_ezsignelements_positioned_by_word_request_t *obj_createezsignelementspositionedbyword
);

void custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_free(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request);

custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_parseFromJSON(cJSON *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_requestJSON);

cJSON *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t *custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request);

#endif /* _custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_H_ */


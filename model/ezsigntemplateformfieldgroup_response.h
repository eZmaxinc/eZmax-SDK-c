/*
 * ezsigntemplateformfieldgroup_response.h
 *
 * A Ezsigntemplateformfieldgroup Object
 */

#ifndef _ezsigntemplateformfieldgroup_response_H_
#define _ezsigntemplateformfieldgroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_response_t ezsigntemplateformfieldgroup_response_t;

#include "enum_textvalidation.h"
#include "field_e_ezsigntemplateformfieldgroup_signerrequirement.h"
#include "field_e_ezsigntemplateformfieldgroup_tooltipposition.h"
#include "field_e_ezsigntemplateformfieldgroup_type.h"

// Enum  for ezsigntemplateformfieldgroup_response

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Text, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Textarea, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Dropdown, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Radio, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Checkbox } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e;

char* ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_type_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e e_ezsigntemplateformfieldgroup_type);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_type_FromString(char* e_ezsigntemplateformfieldgroup_type);

// Enum  for ezsigntemplateformfieldgroup_response

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__All, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__One } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e;

char* ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e e_ezsigntemplateformfieldgroup_signerrequirement);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_signerrequirement_FromString(char* e_ezsigntemplateformfieldgroup_signerrequirement);

// Enum  for ezsigntemplateformfieldgroup_response

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__None, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Date (MM/DD/YY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Date (DD/MM/YY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Email, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Letters, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Numbers, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Zip, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Zip+4, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__PostalCode, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__Custom } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e;

char* ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e e_ezsigntemplateformfieldgroup_textvalidation);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_textvalidation_FromString(char* e_ezsigntemplateformfieldgroup_textvalidation);

// Enum  for ezsigntemplateformfieldgroup_response

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__TopLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__TopCenter, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__TopRight, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__MiddleLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__MiddleRight, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__BottomLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__BottomCenter, ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__BottomRight } ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e;

char* ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e e_ezsigntemplateformfieldgroup_tooltipposition);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__e ezsigntemplateformfieldgroup_response_e_ezsigntemplateformfieldgroup_tooltipposition_FromString(char* e_ezsigntemplateformfieldgroup_tooltipposition);



typedef struct ezsigntemplateformfieldgroup_response_t {
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
    enum_textvalidation_t *e_ezsigntemplateformfieldgroup_textvalidation; // custom
    char *t_ezsigntemplateformfieldgroup_tooltip; // string
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition; // custom

} ezsigntemplateformfieldgroup_response_t;

ezsigntemplateformfieldgroup_response_t *ezsigntemplateformfieldgroup_response_create(
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
    enum_textvalidation_t *e_ezsigntemplateformfieldgroup_textvalidation,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    field_e_ezsigntemplateformfieldgroup_tooltipposition_t *e_ezsigntemplateformfieldgroup_tooltipposition
);

void ezsigntemplateformfieldgroup_response_free(ezsigntemplateformfieldgroup_response_t *ezsigntemplateformfieldgroup_response);

ezsigntemplateformfieldgroup_response_t *ezsigntemplateformfieldgroup_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_responseJSON);

cJSON *ezsigntemplateformfieldgroup_response_convertToJSON(ezsigntemplateformfieldgroup_response_t *ezsigntemplateformfieldgroup_response);

#endif /* _ezsigntemplateformfieldgroup_response_H_ */


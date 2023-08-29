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

// Enum  for ezsigntemplateformfieldgroup_request

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Text, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Textarea, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Dropdown, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Radio, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Checkbox } ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e;

char* ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_type_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_type);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_type_FromString(char* e_ezsigntemplateformfieldgroup_type);

// Enum  for ezsigntemplateformfieldgroup_request

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__All, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__One } ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e;

char* ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_signerrequirement);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_signerrequirement_FromString(char* e_ezsigntemplateformfieldgroup_signerrequirement);

// Enum  for ezsigntemplateformfieldgroup_request

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__None, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Date (YYYY_MM_DD), ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Date (MM/DD/YYYY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Date (MM/DD/YY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Date (DD/MM/YYYY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Date (DD/MM/YY), ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Email, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Letters, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Numbers, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Zip, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Zip+4, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__PostalCode, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__Custom } ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e;

char* ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_textvalidation_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_textvalidation);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_textvalidation_FromString(char* e_ezsigntemplateformfieldgroup_textvalidation);

// Enum  for ezsigntemplateformfieldgroup_request

typedef enum  { ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__NULL = 0, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__TopLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__TopCenter, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__TopRight, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__MiddleLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__MiddleRight, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__BottomLeft, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__BottomCenter, ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__BottomRight } ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e;

char* ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_tooltipposition_ToString(ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e e_ezsigntemplateformfieldgroup_tooltipposition);

ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__e ezsigntemplateformfieldgroup_request_e_ezsigntemplateformfieldgroup_tooltipposition_FromString(char* e_ezsigntemplateformfieldgroup_tooltipposition);



typedef struct ezsigntemplateformfieldgroup_request_t {
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

} ezsigntemplateformfieldgroup_request_t;

ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_create(
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

void ezsigntemplateformfieldgroup_request_free(ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request);

ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_requestJSON);

cJSON *ezsigntemplateformfieldgroup_request_convertToJSON(ezsigntemplateformfieldgroup_request_t *ezsigntemplateformfieldgroup_request);

#endif /* _ezsigntemplateformfieldgroup_request_H_ */


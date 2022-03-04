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

#include "field_e_ezsignformfieldgroup_signerrequirement.h"
#include "field_e_ezsignformfieldgroup_tooltipposition.h"
#include "field_e_ezsignformfieldgroup_type.h"

// Enum  for ezsignformfieldgroup_response

typedef enum  { ezmax_api_definition_ezsignformfieldgroup_response__NULL = 0, ezmax_api_definition_ezsignformfieldgroup_response__Text, ezmax_api_definition_ezsignformfieldgroup_response__Textarea, ezmax_api_definition_ezsignformfieldgroup_response__Dropdown, ezmax_api_definition_ezsignformfieldgroup_response__Radio, ezmax_api_definition_ezsignformfieldgroup_response__Checkbox } ezmax_api_definition_ezsignformfieldgroup_response__e;

char* ezsignformfieldgroup_response_e_ezsignformfieldgroup_type_ToString(ezmax_api_definition_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_type);

ezmax_api_definition_ezsignformfieldgroup_response__e ezsignformfieldgroup_response_e_ezsignformfieldgroup_type_FromString(char* e_ezsignformfieldgroup_type);

// Enum  for ezsignformfieldgroup_response

typedef enum  { ezmax_api_definition_ezsignformfieldgroup_response__NULL = 0, ezmax_api_definition_ezsignformfieldgroup_response__All, ezmax_api_definition_ezsignformfieldgroup_response__One } ezmax_api_definition_ezsignformfieldgroup_response__e;

char* ezsignformfieldgroup_response_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_signerrequirement);

ezmax_api_definition_ezsignformfieldgroup_response__e ezsignformfieldgroup_response_e_ezsignformfieldgroup_signerrequirement_FromString(char* e_ezsignformfieldgroup_signerrequirement);

// Enum  for ezsignformfieldgroup_response

typedef enum  { ezmax_api_definition_ezsignformfieldgroup_response__NULL = 0, ezmax_api_definition_ezsignformfieldgroup_response__TopLeft, ezmax_api_definition_ezsignformfieldgroup_response__TopCenter, ezmax_api_definition_ezsignformfieldgroup_response__TopRight, ezmax_api_definition_ezsignformfieldgroup_response__MiddleLeft, ezmax_api_definition_ezsignformfieldgroup_response__MiddleCenter, ezmax_api_definition_ezsignformfieldgroup_response__MiddleRight, ezmax_api_definition_ezsignformfieldgroup_response__BottomLeft, ezmax_api_definition_ezsignformfieldgroup_response__BottomCenter, ezmax_api_definition_ezsignformfieldgroup_response__BottomRight } ezmax_api_definition_ezsignformfieldgroup_response__e;

char* ezsignformfieldgroup_response_e_ezsignformfieldgroup_tooltipposition_ToString(ezmax_api_definition_ezsignformfieldgroup_response__e e_ezsignformfieldgroup_tooltipposition);

ezmax_api_definition_ezsignformfieldgroup_response__e ezsignformfieldgroup_response_e_ezsignformfieldgroup_tooltipposition_FromString(char* e_ezsignformfieldgroup_tooltipposition);



typedef struct ezsignformfieldgroup_response_t {
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

} ezsignformfieldgroup_response_t;

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_create(
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
    field_e_ezsignformfieldgroup_tooltipposition_t *e_ezsignformfieldgroup_tooltipposition
);

void ezsignformfieldgroup_response_free(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response);

ezsignformfieldgroup_response_t *ezsignformfieldgroup_response_parseFromJSON(cJSON *ezsignformfieldgroup_responseJSON);

cJSON *ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_t *ezsignformfieldgroup_response);

#endif /* _ezsignformfieldgroup_response_H_ */


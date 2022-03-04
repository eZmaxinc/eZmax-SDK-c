/*
 * ezsignformfieldgroup_request.h
 *
 * An Ezsignformfieldgroup Object
 */

#ifndef _ezsignformfieldgroup_request_H_
#define _ezsignformfieldgroup_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_request_t ezsignformfieldgroup_request_t;

#include "field_e_ezsignformfieldgroup_signerrequirement.h"
#include "field_e_ezsignformfieldgroup_tooltipposition.h"
#include "field_e_ezsignformfieldgroup_type.h"

// Enum  for ezsignformfieldgroup_request

typedef enum  { ezmax_api_definition_ezsignformfieldgroup_request__NULL = 0, ezmax_api_definition_ezsignformfieldgroup_request__Text, ezmax_api_definition_ezsignformfieldgroup_request__Textarea, ezmax_api_definition_ezsignformfieldgroup_request__Dropdown, ezmax_api_definition_ezsignformfieldgroup_request__Radio, ezmax_api_definition_ezsignformfieldgroup_request__Checkbox } ezmax_api_definition_ezsignformfieldgroup_request__e;

char* ezsignformfieldgroup_request_e_ezsignformfieldgroup_type_ToString(ezmax_api_definition_ezsignformfieldgroup_request__e e_ezsignformfieldgroup_type);

ezmax_api_definition_ezsignformfieldgroup_request__e ezsignformfieldgroup_request_e_ezsignformfieldgroup_type_FromString(char* e_ezsignformfieldgroup_type);

// Enum  for ezsignformfieldgroup_request

typedef enum  { ezmax_api_definition_ezsignformfieldgroup_request__NULL = 0, ezmax_api_definition_ezsignformfieldgroup_request__All, ezmax_api_definition_ezsignformfieldgroup_request__One } ezmax_api_definition_ezsignformfieldgroup_request__e;

char* ezsignformfieldgroup_request_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition_ezsignformfieldgroup_request__e e_ezsignformfieldgroup_signerrequirement);

ezmax_api_definition_ezsignformfieldgroup_request__e ezsignformfieldgroup_request_e_ezsignformfieldgroup_signerrequirement_FromString(char* e_ezsignformfieldgroup_signerrequirement);

// Enum  for ezsignformfieldgroup_request

typedef enum  { ezmax_api_definition_ezsignformfieldgroup_request__NULL = 0, ezmax_api_definition_ezsignformfieldgroup_request__TopLeft, ezmax_api_definition_ezsignformfieldgroup_request__TopCenter, ezmax_api_definition_ezsignformfieldgroup_request__TopRight, ezmax_api_definition_ezsignformfieldgroup_request__MiddleLeft, ezmax_api_definition_ezsignformfieldgroup_request__MiddleCenter, ezmax_api_definition_ezsignformfieldgroup_request__MiddleRight, ezmax_api_definition_ezsignformfieldgroup_request__BottomLeft, ezmax_api_definition_ezsignformfieldgroup_request__BottomCenter, ezmax_api_definition_ezsignformfieldgroup_request__BottomRight } ezmax_api_definition_ezsignformfieldgroup_request__e;

char* ezsignformfieldgroup_request_e_ezsignformfieldgroup_tooltipposition_ToString(ezmax_api_definition_ezsignformfieldgroup_request__e e_ezsignformfieldgroup_tooltipposition);

ezmax_api_definition_ezsignformfieldgroup_request__e ezsignformfieldgroup_request_e_ezsignformfieldgroup_tooltipposition_FromString(char* e_ezsignformfieldgroup_tooltipposition);



typedef struct ezsignformfieldgroup_request_t {
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

} ezsignformfieldgroup_request_t;

ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_create(
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

void ezsignformfieldgroup_request_free(ezsignformfieldgroup_request_t *ezsignformfieldgroup_request);

ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_parseFromJSON(cJSON *ezsignformfieldgroup_requestJSON);

cJSON *ezsignformfieldgroup_request_convertToJSON(ezsignformfieldgroup_request_t *ezsignformfieldgroup_request);

#endif /* _ezsignformfieldgroup_request_H_ */

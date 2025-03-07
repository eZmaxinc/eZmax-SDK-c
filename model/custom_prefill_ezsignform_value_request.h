/*
 * custom_prefill_ezsignform_value_request.h
 *
 * A Custom PrefillEzsignformValue Object
 */

#ifndef _custom_prefill_ezsignform_value_request_H_
#define _custom_prefill_ezsignform_value_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_prefill_ezsignform_value_request_t custom_prefill_ezsignform_value_request_t;




typedef struct custom_prefill_ezsignform_value_request_t {
    char *s_ezsignformfieldgroup_label; // string
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_enteredvalue; // string
    int b_ezsignformfield_selected; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_prefill_ezsignform_value_request_t;

__attribute__((deprecated)) custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_create(
    char *s_ezsignformfieldgroup_label,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_enteredvalue,
    int b_ezsignformfield_selected
);

void custom_prefill_ezsignform_value_request_free(custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request);

custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_parseFromJSON(cJSON *custom_prefill_ezsignform_value_requestJSON);

cJSON *custom_prefill_ezsignform_value_request_convertToJSON(custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request);

#endif /* _custom_prefill_ezsignform_value_request_H_ */


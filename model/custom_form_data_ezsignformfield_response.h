/*
 * custom_form_data_ezsignformfield_response.h
 *
 * An Ezsignformfield Object
 */

#ifndef _custom_form_data_ezsignformfield_response_H_
#define _custom_form_data_ezsignformfield_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_form_data_ezsignformfield_response_t custom_form_data_ezsignformfield_response_t;




typedef struct custom_form_data_ezsignformfield_response_t {
    char *s_ezsignformfield_label; // string
    char *s_ezsignformfield_value; // string

} custom_form_data_ezsignformfield_response_t;

custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
);

void custom_form_data_ezsignformfield_response_free(custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response);

custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_parseFromJSON(cJSON *custom_form_data_ezsignformfield_responseJSON);

cJSON *custom_form_data_ezsignformfield_response_convertToJSON(custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response);

#endif /* _custom_form_data_ezsignformfield_response_H_ */


/*
 * custom_ezsignformfield_request.h
 *
 * A Custom Ezsignformfield Object to fill an Ezsignform using submitForm
 */

#ifndef _custom_ezsignformfield_request_H_
#define _custom_ezsignformfield_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfield_request_t custom_ezsignformfield_request_t;




typedef struct custom_ezsignformfield_request_t {
    int pki_ezsignformfield_id; //numeric
    char *s_ezsignformfield_label; // string
    int b_ezsignformfield_selected; //boolean
    char *s_ezsignformfield_enteredvalue; // string

} custom_ezsignformfield_request_t;

custom_ezsignformfield_request_t *custom_ezsignformfield_request_create(
    int pki_ezsignformfield_id,
    char *s_ezsignformfield_label,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue
);

void custom_ezsignformfield_request_free(custom_ezsignformfield_request_t *custom_ezsignformfield_request);

custom_ezsignformfield_request_t *custom_ezsignformfield_request_parseFromJSON(cJSON *custom_ezsignformfield_requestJSON);

cJSON *custom_ezsignformfield_request_convertToJSON(custom_ezsignformfield_request_t *custom_ezsignformfield_request);

#endif /* _custom_ezsignformfield_request_H_ */


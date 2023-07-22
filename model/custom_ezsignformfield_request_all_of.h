/*
 * custom_ezsignformfield_request_all_of.h
 *
 * 
 */

#ifndef _custom_ezsignformfield_request_all_of_H_
#define _custom_ezsignformfield_request_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfield_request_all_of_t custom_ezsignformfield_request_all_of_t;




typedef struct custom_ezsignformfield_request_all_of_t {
    int pki_ezsignformfield_id; //numeric
    char *s_ezsignformfield_label; // string
    int b_ezsignformfield_selected; //boolean
    char *s_ezsignformfield_enteredvalue; // string

} custom_ezsignformfield_request_all_of_t;

custom_ezsignformfield_request_all_of_t *custom_ezsignformfield_request_all_of_create(
    int pki_ezsignformfield_id,
    char *s_ezsignformfield_label,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue
);

void custom_ezsignformfield_request_all_of_free(custom_ezsignformfield_request_all_of_t *custom_ezsignformfield_request_all_of);

custom_ezsignformfield_request_all_of_t *custom_ezsignformfield_request_all_of_parseFromJSON(cJSON *custom_ezsignformfield_request_all_ofJSON);

cJSON *custom_ezsignformfield_request_all_of_convertToJSON(custom_ezsignformfield_request_all_of_t *custom_ezsignformfield_request_all_of);

#endif /* _custom_ezsignformfield_request_all_of_H_ */


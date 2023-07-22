/*
 * custom_ezsignformfielderror_response_all_of.h
 *
 * 
 */

#ifndef _custom_ezsignformfielderror_response_all_of_H_
#define _custom_ezsignformfielderror_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfielderror_response_all_of_t custom_ezsignformfielderror_response_all_of_t;

#include "custom_ezsignformfielderrortest_response.h"



typedef struct custom_ezsignformfielderror_response_all_of_t {
    char *s_ezsignformfield_label; // string
    list_t *a_obj_ezsignformfielderrortest; //nonprimitive container

} custom_ezsignformfielderror_response_all_of_t;

custom_ezsignformfielderror_response_all_of_t *custom_ezsignformfielderror_response_all_of_create(
    char *s_ezsignformfield_label,
    list_t *a_obj_ezsignformfielderrortest
);

void custom_ezsignformfielderror_response_all_of_free(custom_ezsignformfielderror_response_all_of_t *custom_ezsignformfielderror_response_all_of);

custom_ezsignformfielderror_response_all_of_t *custom_ezsignformfielderror_response_all_of_parseFromJSON(cJSON *custom_ezsignformfielderror_response_all_ofJSON);

cJSON *custom_ezsignformfielderror_response_all_of_convertToJSON(custom_ezsignformfielderror_response_all_of_t *custom_ezsignformfielderror_response_all_of);

#endif /* _custom_ezsignformfielderror_response_all_of_H_ */


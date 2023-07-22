/*
 * custom_ezsignformfielderrortest_response_all_of.h
 *
 * 
 */

#ifndef _custom_ezsignformfielderrortest_response_all_of_H_
#define _custom_ezsignformfielderrortest_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfielderrortest_response_all_of_t custom_ezsignformfielderrortest_response_all_of_t;




typedef struct custom_ezsignformfielderrortest_response_all_of_t {
    char *s_ezsignformfielderrortest_name; // string
    char *s_ezsignformfielderrortest_detail; // string

} custom_ezsignformfielderrortest_response_all_of_t;

custom_ezsignformfielderrortest_response_all_of_t *custom_ezsignformfielderrortest_response_all_of_create(
    char *s_ezsignformfielderrortest_name,
    char *s_ezsignformfielderrortest_detail
);

void custom_ezsignformfielderrortest_response_all_of_free(custom_ezsignformfielderrortest_response_all_of_t *custom_ezsignformfielderrortest_response_all_of);

custom_ezsignformfielderrortest_response_all_of_t *custom_ezsignformfielderrortest_response_all_of_parseFromJSON(cJSON *custom_ezsignformfielderrortest_response_all_ofJSON);

cJSON *custom_ezsignformfielderrortest_response_all_of_convertToJSON(custom_ezsignformfielderrortest_response_all_of_t *custom_ezsignformfielderrortest_response_all_of);

#endif /* _custom_ezsignformfielderrortest_response_all_of_H_ */


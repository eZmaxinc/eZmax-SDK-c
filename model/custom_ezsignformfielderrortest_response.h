/*
 * custom_ezsignformfielderrortest_response.h
 *
 * A Custom Ezsignformfielderrortest Object to contain the detail of the test error
 */

#ifndef _custom_ezsignformfielderrortest_response_H_
#define _custom_ezsignformfielderrortest_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignformfielderrortest_response_t custom_ezsignformfielderrortest_response_t;




typedef struct custom_ezsignformfielderrortest_response_t {
    char *s_ezsignformfielderrortest_name; // string
    char *s_ezsignformfielderrortest_detail; // string

} custom_ezsignformfielderrortest_response_t;

custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_create(
    char *s_ezsignformfielderrortest_name,
    char *s_ezsignformfielderrortest_detail
);

void custom_ezsignformfielderrortest_response_free(custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response);

custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_parseFromJSON(cJSON *custom_ezsignformfielderrortest_responseJSON);

cJSON *custom_ezsignformfielderrortest_response_convertToJSON(custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response);

#endif /* _custom_ezsignformfielderrortest_response_H_ */


/*
 * attempt_response.h
 *
 * An Attempt object
 */

#ifndef _attempt_response_H_
#define _attempt_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attempt_response_t attempt_response_t;




typedef struct attempt_response_t {
    char *dt_attempt_start; // string
    char *s_attempt_result; // string
    int i_attempt_duration; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} attempt_response_t;

__attribute__((deprecated)) attempt_response_t *attempt_response_create(
    char *dt_attempt_start,
    char *s_attempt_result,
    int i_attempt_duration
);

void attempt_response_free(attempt_response_t *attempt_response);

attempt_response_t *attempt_response_parseFromJSON(cJSON *attempt_responseJSON);

cJSON *attempt_response_convertToJSON(attempt_response_t *attempt_response);

#endif /* _attempt_response_H_ */


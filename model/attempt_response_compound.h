/*
 * attempt_response_compound.h
 *
 * An Attempt object and children to create a complete structure
 */

#ifndef _attempt_response_compound_H_
#define _attempt_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attempt_response_compound_t attempt_response_compound_t;




typedef struct attempt_response_compound_t {
    char *dt_attempt_start; // string
    char *s_attempt_result; // string
    int i_attempt_duration; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} attempt_response_compound_t;

__attribute__((deprecated)) attempt_response_compound_t *attempt_response_compound_create(
    char *dt_attempt_start,
    char *s_attempt_result,
    int i_attempt_duration
);

void attempt_response_compound_free(attempt_response_compound_t *attempt_response_compound);

attempt_response_compound_t *attempt_response_compound_parseFromJSON(cJSON *attempt_response_compoundJSON);

cJSON *attempt_response_compound_convertToJSON(attempt_response_compound_t *attempt_response_compound);

#endif /* _attempt_response_compound_H_ */


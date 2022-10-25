/*
 * common_response_error_too_many_requests.h
 *
 * Generic Error Message
 */

#ifndef _common_response_error_too_many_requests_H_
#define _common_response_error_too_many_requests_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_too_many_requests_t common_response_error_too_many_requests_t;

#include "common_response_error.h"



typedef struct common_response_error_too_many_requests_t {
    char *s_error_message; // string
    char *e_error_code; // string

} common_response_error_too_many_requests_t;

common_response_error_too_many_requests_t *common_response_error_too_many_requests_create(
    char *s_error_message,
    char *e_error_code
);

void common_response_error_too_many_requests_free(common_response_error_too_many_requests_t *common_response_error_too_many_requests);

common_response_error_too_many_requests_t *common_response_error_too_many_requests_parseFromJSON(cJSON *common_response_error_too_many_requestsJSON);

cJSON *common_response_error_too_many_requests_convertToJSON(common_response_error_too_many_requests_t *common_response_error_too_many_requests);

#endif /* _common_response_error_too_many_requests_H_ */


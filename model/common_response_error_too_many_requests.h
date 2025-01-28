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

#include "field_e_error_code.h"



typedef struct common_response_error_too_many_requests_t {
    char *s_error_message; // string
    ezmax_api_definition__full_field_e_error_code__e e_error_code; //referenced enum
    list_t *a_s_error_messagedetail; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_error_too_many_requests_t;

__attribute__((deprecated)) common_response_error_too_many_requests_t *common_response_error_too_many_requests_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail
);

void common_response_error_too_many_requests_free(common_response_error_too_many_requests_t *common_response_error_too_many_requests);

common_response_error_too_many_requests_t *common_response_error_too_many_requests_parseFromJSON(cJSON *common_response_error_too_many_requestsJSON);

cJSON *common_response_error_too_many_requests_convertToJSON(common_response_error_too_many_requests_t *common_response_error_too_many_requests);

#endif /* _common_response_error_too_many_requests_H_ */


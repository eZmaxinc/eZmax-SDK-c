/*
 * global_customer_get_endpoint_v1_response.h
 *
 * Response for GET /1/customer/{pksCustomerCode}/endpoint
 */

#ifndef _global_customer_get_endpoint_v1_response_H_
#define _global_customer_get_endpoint_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct global_customer_get_endpoint_v1_response_t global_customer_get_endpoint_v1_response_t;




typedef struct global_customer_get_endpoint_v1_response_t {
    char *s_endpoint_url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} global_customer_get_endpoint_v1_response_t;

__attribute__((deprecated)) global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_create(
    char *s_endpoint_url
);

void global_customer_get_endpoint_v1_response_free(global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response);

global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response_parseFromJSON(cJSON *global_customer_get_endpoint_v1_responseJSON);

cJSON *global_customer_get_endpoint_v1_response_convertToJSON(global_customer_get_endpoint_v1_response_t *global_customer_get_endpoint_v1_response);

#endif /* _global_customer_get_endpoint_v1_response_H_ */


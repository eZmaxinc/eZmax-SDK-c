/*
 * paymentgateway_create_object_v1_request.h
 *
 * Request for POST /1/object/paymentgateway
 */

#ifndef _paymentgateway_create_object_v1_request_H_
#define _paymentgateway_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_create_object_v1_request_t paymentgateway_create_object_v1_request_t;

#include "paymentgateway_request_compound.h"



typedef struct paymentgateway_create_object_v1_request_t {
    list_t *a_obj_paymentgateway; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_create_object_v1_request_t;

__attribute__((deprecated)) paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_create(
    list_t *a_obj_paymentgateway
);

void paymentgateway_create_object_v1_request_free(paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request);

paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_parseFromJSON(cJSON *paymentgateway_create_object_v1_requestJSON);

cJSON *paymentgateway_create_object_v1_request_convertToJSON(paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request);

#endif /* _paymentgateway_create_object_v1_request_H_ */


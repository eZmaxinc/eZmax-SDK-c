/*
 * paymentterm_create_object_v1_request.h
 *
 * Request for POST /1/object/paymentterm
 */

#ifndef _paymentterm_create_object_v1_request_H_
#define _paymentterm_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_create_object_v1_request_t paymentterm_create_object_v1_request_t;

#include "paymentterm_request_compound.h"



typedef struct paymentterm_create_object_v1_request_t {
    list_t *a_obj_paymentterm; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_create_object_v1_request_t;

__attribute__((deprecated)) paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_create(
    list_t *a_obj_paymentterm
);

void paymentterm_create_object_v1_request_free(paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request);

paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_parseFromJSON(cJSON *paymentterm_create_object_v1_requestJSON);

cJSON *paymentterm_create_object_v1_request_convertToJSON(paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request);

#endif /* _paymentterm_create_object_v1_request_H_ */


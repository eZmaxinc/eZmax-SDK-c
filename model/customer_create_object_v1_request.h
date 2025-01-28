/*
 * customer_create_object_v1_request.h
 *
 * Request for POST /1/object/customer
 */

#ifndef _customer_create_object_v1_request_H_
#define _customer_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_create_object_v1_request_t customer_create_object_v1_request_t;

#include "customer_request_compound.h"



typedef struct customer_create_object_v1_request_t {
    list_t *a_obj_customer; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_create_object_v1_request_t;

__attribute__((deprecated)) customer_create_object_v1_request_t *customer_create_object_v1_request_create(
    list_t *a_obj_customer
);

void customer_create_object_v1_request_free(customer_create_object_v1_request_t *customer_create_object_v1_request);

customer_create_object_v1_request_t *customer_create_object_v1_request_parseFromJSON(cJSON *customer_create_object_v1_requestJSON);

cJSON *customer_create_object_v1_request_convertToJSON(customer_create_object_v1_request_t *customer_create_object_v1_request);

#endif /* _customer_create_object_v1_request_H_ */


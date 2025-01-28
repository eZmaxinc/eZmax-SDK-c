/*
 * creditcardmerchant_create_object_v1_request.h
 *
 * Request for POST /1/object/creditcardmerchant
 */

#ifndef _creditcardmerchant_create_object_v1_request_H_
#define _creditcardmerchant_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_create_object_v1_request_t creditcardmerchant_create_object_v1_request_t;

#include "creditcardmerchant_request_compound.h"



typedef struct creditcardmerchant_create_object_v1_request_t {
    list_t *a_obj_creditcardmerchant; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_create_object_v1_request_t;

__attribute__((deprecated)) creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_create(
    list_t *a_obj_creditcardmerchant
);

void creditcardmerchant_create_object_v1_request_free(creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request);

creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_parseFromJSON(cJSON *creditcardmerchant_create_object_v1_requestJSON);

cJSON *creditcardmerchant_create_object_v1_request_convertToJSON(creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request);

#endif /* _creditcardmerchant_create_object_v1_request_H_ */


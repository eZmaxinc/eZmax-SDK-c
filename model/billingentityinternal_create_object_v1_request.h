/*
 * billingentityinternal_create_object_v1_request.h
 *
 * Request for POST /1/object/billingentityinternal
 */

#ifndef _billingentityinternal_create_object_v1_request_H_
#define _billingentityinternal_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_create_object_v1_request_t billingentityinternal_create_object_v1_request_t;

#include "billingentityinternal_request_compound.h"



typedef struct billingentityinternal_create_object_v1_request_t {
    list_t *a_obj_billingentityinternal; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternal_create_object_v1_request_t;

__attribute__((deprecated)) billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request_create(
    list_t *a_obj_billingentityinternal
);

void billingentityinternal_create_object_v1_request_free(billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request);

billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request_parseFromJSON(cJSON *billingentityinternal_create_object_v1_requestJSON);

cJSON *billingentityinternal_create_object_v1_request_convertToJSON(billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request);

#endif /* _billingentityinternal_create_object_v1_request_H_ */


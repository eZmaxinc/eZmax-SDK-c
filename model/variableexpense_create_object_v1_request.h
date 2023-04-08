/*
 * variableexpense_create_object_v1_request.h
 *
 * Request for POST /1/object/variableexpense
 */

#ifndef _variableexpense_create_object_v1_request_H_
#define _variableexpense_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_create_object_v1_request_t variableexpense_create_object_v1_request_t;

#include "variableexpense_request_compound.h"



typedef struct variableexpense_create_object_v1_request_t {
    list_t *a_obj_variableexpense; //nonprimitive container

} variableexpense_create_object_v1_request_t;

variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request_create(
    list_t *a_obj_variableexpense
);

void variableexpense_create_object_v1_request_free(variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request);

variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request_parseFromJSON(cJSON *variableexpense_create_object_v1_requestJSON);

cJSON *variableexpense_create_object_v1_request_convertToJSON(variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request);

#endif /* _variableexpense_create_object_v1_request_H_ */


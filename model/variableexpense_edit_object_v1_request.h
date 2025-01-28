/*
 * variableexpense_edit_object_v1_request.h
 *
 * Request for PUT /1/object/variableexpense/{pkiVariableexpenseID}
 */

#ifndef _variableexpense_edit_object_v1_request_H_
#define _variableexpense_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_edit_object_v1_request_t variableexpense_edit_object_v1_request_t;

#include "variableexpense_request_compound.h"



typedef struct variableexpense_edit_object_v1_request_t {
    struct variableexpense_request_compound_t *obj_variableexpense; //model

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_edit_object_v1_request_t;

__attribute__((deprecated)) variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_create(
    variableexpense_request_compound_t *obj_variableexpense
);

void variableexpense_edit_object_v1_request_free(variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request);

variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_parseFromJSON(cJSON *variableexpense_edit_object_v1_requestJSON);

cJSON *variableexpense_edit_object_v1_request_convertToJSON(variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request);

#endif /* _variableexpense_edit_object_v1_request_H_ */


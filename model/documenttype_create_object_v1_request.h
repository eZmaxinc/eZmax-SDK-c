/*
 * documenttype_create_object_v1_request.h
 *
 * Request for POST /1/object/documenttype
 */

#ifndef _documenttype_create_object_v1_request_H_
#define _documenttype_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_create_object_v1_request_t documenttype_create_object_v1_request_t;

#include "documenttype_request_compound.h"



typedef struct documenttype_create_object_v1_request_t {
    list_t *a_obj_documenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_create_object_v1_request_t;

__attribute__((deprecated)) documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_create(
    list_t *a_obj_documenttype
);

void documenttype_create_object_v1_request_free(documenttype_create_object_v1_request_t *documenttype_create_object_v1_request);

documenttype_create_object_v1_request_t *documenttype_create_object_v1_request_parseFromJSON(cJSON *documenttype_create_object_v1_requestJSON);

cJSON *documenttype_create_object_v1_request_convertToJSON(documenttype_create_object_v1_request_t *documenttype_create_object_v1_request);

#endif /* _documenttype_create_object_v1_request_H_ */


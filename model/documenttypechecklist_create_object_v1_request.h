/*
 * documenttypechecklist_create_object_v1_request.h
 *
 * Request for POST /1/object/documenttypechecklist
 */

#ifndef _documenttypechecklist_create_object_v1_request_H_
#define _documenttypechecklist_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_create_object_v1_request_t documenttypechecklist_create_object_v1_request_t;

#include "documenttypechecklist_request_compound.h"



typedef struct documenttypechecklist_create_object_v1_request_t {
    list_t *a_obj_documenttypechecklist; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_create_object_v1_request_t;

__attribute__((deprecated)) documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_create(
    list_t *a_obj_documenttypechecklist
);

void documenttypechecklist_create_object_v1_request_free(documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request);

documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request_parseFromJSON(cJSON *documenttypechecklist_create_object_v1_requestJSON);

cJSON *documenttypechecklist_create_object_v1_request_convertToJSON(documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request);

#endif /* _documenttypechecklist_create_object_v1_request_H_ */


/*
 * documenttypechecklist_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/documenttypechecklist/{pkiDocumenttypechecklistID}
 */

#ifndef _documenttypechecklist_patch_object_v1_request_H_
#define _documenttypechecklist_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_patch_object_v1_request_t documenttypechecklist_patch_object_v1_request_t;

#include "documenttypechecklist_request_patch.h"



typedef struct documenttypechecklist_patch_object_v1_request_t {
    struct documenttypechecklist_request_patch_t *obj_documenttypechecklist; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_patch_object_v1_request_t;

__attribute__((deprecated)) documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request_create(
    documenttypechecklist_request_patch_t *obj_documenttypechecklist
);

void documenttypechecklist_patch_object_v1_request_free(documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request);

documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request_parseFromJSON(cJSON *documenttypechecklist_patch_object_v1_requestJSON);

cJSON *documenttypechecklist_patch_object_v1_request_convertToJSON(documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request);

#endif /* _documenttypechecklist_patch_object_v1_request_H_ */


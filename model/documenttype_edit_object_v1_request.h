/*
 * documenttype_edit_object_v1_request.h
 *
 * Request for PUT /1/object/documenttype/{pkiDocumenttypeID}
 */

#ifndef _documenttype_edit_object_v1_request_H_
#define _documenttype_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_edit_object_v1_request_t documenttype_edit_object_v1_request_t;

#include "documenttype_request_compound.h"



typedef struct documenttype_edit_object_v1_request_t {
    struct documenttype_request_compound_t *obj_documenttype; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_edit_object_v1_request_t;

__attribute__((deprecated)) documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_create(
    documenttype_request_compound_t *obj_documenttype
);

void documenttype_edit_object_v1_request_free(documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request);

documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_parseFromJSON(cJSON *documenttype_edit_object_v1_requestJSON);

cJSON *documenttype_edit_object_v1_request_convertToJSON(documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request);

#endif /* _documenttype_edit_object_v1_request_H_ */


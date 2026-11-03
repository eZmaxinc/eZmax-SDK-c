/*
 * attachment_set_document_type_v1_request.h
 *
 * Request for POST /1/object/attachment/{pkiAttachmentID}/setDocumentType
 */

#ifndef _attachment_set_document_type_v1_request_H_
#define _attachment_set_document_type_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_set_document_type_v1_request_t attachment_set_document_type_v1_request_t;




typedef struct attachment_set_document_type_v1_request_t {
    int *fki_documenttypechecklist_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_set_document_type_v1_request_t;

__attribute__((deprecated)) attachment_set_document_type_v1_request_t *attachment_set_document_type_v1_request_create(
    int *fki_documenttypechecklist_id
);

void attachment_set_document_type_v1_request_free(attachment_set_document_type_v1_request_t *attachment_set_document_type_v1_request);

attachment_set_document_type_v1_request_t *attachment_set_document_type_v1_request_parseFromJSON(cJSON *attachment_set_document_type_v1_requestJSON);

cJSON *attachment_set_document_type_v1_request_convertToJSON(attachment_set_document_type_v1_request_t *attachment_set_document_type_v1_request);

#endif /* _attachment_set_document_type_v1_request_H_ */


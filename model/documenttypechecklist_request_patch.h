/*
 * documenttypechecklist_request_patch.h
 *
 * A Documenttypechecklist Object
 */

#ifndef _documenttypechecklist_request_patch_H_
#define _documenttypechecklist_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_request_patch_t documenttypechecklist_request_patch_t;

#include "field_e_documenttypechecklist_status.h"



typedef struct documenttypechecklist_request_patch_t {
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status; //referenced enum
    char *t_documenttypechecklist_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_request_patch_t;

__attribute__((deprecated)) documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_create(
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment
);

void documenttypechecklist_request_patch_free(documenttypechecklist_request_patch_t *documenttypechecklist_request_patch);

documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_parseFromJSON(cJSON *documenttypechecklist_request_patchJSON);

cJSON *documenttypechecklist_request_patch_convertToJSON(documenttypechecklist_request_patch_t *documenttypechecklist_request_patch);

#endif /* _documenttypechecklist_request_patch_H_ */


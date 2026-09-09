/*
 * folder_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/folder/{pkiFolderID}/importIntoEDM
 */

#ifndef _folder_import_into_edm_v1_request_H_
#define _folder_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct folder_import_into_edm_v1_request_t folder_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct folder_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} folder_import_into_edm_v1_request_t;

__attribute__((deprecated)) folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void folder_import_into_edm_v1_request_free(folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request);

folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request_parseFromJSON(cJSON *folder_import_into_edm_v1_requestJSON);

cJSON *folder_import_into_edm_v1_request_convertToJSON(folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request);

#endif /* _folder_import_into_edm_v1_request_H_ */


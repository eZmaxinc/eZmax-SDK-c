/*
 * folder_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/folder/{pkiFolderID}/importIntoEDM
 */

#ifndef _folder_import_into_edm_v1_response_H_
#define _folder_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct folder_import_into_edm_v1_response_t folder_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "folder_import_into_edm_v1_response_m_payload.h"



typedef struct folder_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct folder_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} folder_import_into_edm_v1_response_t;

__attribute__((deprecated)) folder_import_into_edm_v1_response_t *folder_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    folder_import_into_edm_v1_response_m_payload_t *m_payload
);

void folder_import_into_edm_v1_response_free(folder_import_into_edm_v1_response_t *folder_import_into_edm_v1_response);

folder_import_into_edm_v1_response_t *folder_import_into_edm_v1_response_parseFromJSON(cJSON *folder_import_into_edm_v1_responseJSON);

cJSON *folder_import_into_edm_v1_response_convertToJSON(folder_import_into_edm_v1_response_t *folder_import_into_edm_v1_response);

#endif /* _folder_import_into_edm_v1_response_H_ */


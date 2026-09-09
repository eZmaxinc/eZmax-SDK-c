/*
 * folder_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/folder/{pkiFolderID}/importIntoEDM
 */

#ifndef _folder_import_into_edm_v1_response_m_payload_H_
#define _folder_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct folder_import_into_edm_v1_response_m_payload_t folder_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct folder_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} folder_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) folder_import_into_edm_v1_response_m_payload_t *folder_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void folder_import_into_edm_v1_response_m_payload_free(folder_import_into_edm_v1_response_m_payload_t *folder_import_into_edm_v1_response_m_payload);

folder_import_into_edm_v1_response_m_payload_t *folder_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *folder_import_into_edm_v1_response_m_payloadJSON);

cJSON *folder_import_into_edm_v1_response_m_payload_convertToJSON(folder_import_into_edm_v1_response_m_payload_t *folder_import_into_edm_v1_response_m_payload);

#endif /* _folder_import_into_edm_v1_response_m_payload_H_ */


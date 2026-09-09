/*
 * deposit_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/deposit/{pkiDepositID}/importIntoEDM
 */

#ifndef _deposit_import_into_edm_v1_response_m_payload_H_
#define _deposit_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_import_into_edm_v1_response_m_payload_t deposit_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct deposit_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) deposit_import_into_edm_v1_response_m_payload_t *deposit_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void deposit_import_into_edm_v1_response_m_payload_free(deposit_import_into_edm_v1_response_m_payload_t *deposit_import_into_edm_v1_response_m_payload);

deposit_import_into_edm_v1_response_m_payload_t *deposit_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *deposit_import_into_edm_v1_response_m_payloadJSON);

cJSON *deposit_import_into_edm_v1_response_m_payload_convertToJSON(deposit_import_into_edm_v1_response_m_payload_t *deposit_import_into_edm_v1_response_m_payload);

#endif /* _deposit_import_into_edm_v1_response_m_payload_H_ */


/*
 * rejectedoffertopurchase_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/importIntoEDM
 */

#ifndef _rejectedoffertopurchase_import_into_edm_v1_response_m_payload_H_
#define _rejectedoffertopurchase_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t *rejectedoffertopurchase_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void rejectedoffertopurchase_import_into_edm_v1_response_m_payload_free(rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t *rejectedoffertopurchase_import_into_edm_v1_response_m_payload);

rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t *rejectedoffertopurchase_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *rejectedoffertopurchase_import_into_edm_v1_response_m_payloadJSON);

cJSON *rejectedoffertopurchase_import_into_edm_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t *rejectedoffertopurchase_import_into_edm_v1_response_m_payload);

#endif /* _rejectedoffertopurchase_import_into_edm_v1_response_m_payload_H_ */


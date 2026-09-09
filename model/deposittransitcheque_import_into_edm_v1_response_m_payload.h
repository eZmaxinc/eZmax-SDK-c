/*
 * deposittransitcheque_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/importIntoEDM
 */

#ifndef _deposittransitcheque_import_into_edm_v1_response_m_payload_H_
#define _deposittransitcheque_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_import_into_edm_v1_response_m_payload_t deposittransitcheque_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct deposittransitcheque_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) deposittransitcheque_import_into_edm_v1_response_m_payload_t *deposittransitcheque_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void deposittransitcheque_import_into_edm_v1_response_m_payload_free(deposittransitcheque_import_into_edm_v1_response_m_payload_t *deposittransitcheque_import_into_edm_v1_response_m_payload);

deposittransitcheque_import_into_edm_v1_response_m_payload_t *deposittransitcheque_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *deposittransitcheque_import_into_edm_v1_response_m_payloadJSON);

cJSON *deposittransitcheque_import_into_edm_v1_response_m_payload_convertToJSON(deposittransitcheque_import_into_edm_v1_response_m_payload_t *deposittransitcheque_import_into_edm_v1_response_m_payload);

#endif /* _deposittransitcheque_import_into_edm_v1_response_m_payload_H_ */


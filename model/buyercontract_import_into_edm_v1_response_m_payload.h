/*
 * buyercontract_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/buyercontract/{pkiBuyercontractID}/importIntoEDM
 */

#ifndef _buyercontract_import_into_edm_v1_response_m_payload_H_
#define _buyercontract_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_import_into_edm_v1_response_m_payload_t buyercontract_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct buyercontract_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) buyercontract_import_into_edm_v1_response_m_payload_t *buyercontract_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void buyercontract_import_into_edm_v1_response_m_payload_free(buyercontract_import_into_edm_v1_response_m_payload_t *buyercontract_import_into_edm_v1_response_m_payload);

buyercontract_import_into_edm_v1_response_m_payload_t *buyercontract_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_import_into_edm_v1_response_m_payloadJSON);

cJSON *buyercontract_import_into_edm_v1_response_m_payload_convertToJSON(buyercontract_import_into_edm_v1_response_m_payload_t *buyercontract_import_into_edm_v1_response_m_payload);

#endif /* _buyercontract_import_into_edm_v1_response_m_payload_H_ */


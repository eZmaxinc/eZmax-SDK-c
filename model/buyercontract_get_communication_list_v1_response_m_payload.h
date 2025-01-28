/*
 * buyercontract_get_communication_list_v1_response_m_payload.h
 *
 * Response for GET /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList
 */

#ifndef _buyercontract_get_communication_list_v1_response_m_payload_H_
#define _buyercontract_get_communication_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_get_communication_list_v1_response_m_payload_t buyercontract_get_communication_list_v1_response_m_payload_t;

#include "custom_communication_list_element_response.h"



typedef struct buyercontract_get_communication_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_get_communication_list_v1_response_m_payload_t;

__attribute__((deprecated)) buyercontract_get_communication_list_v1_response_m_payload_t *buyercontract_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
);

void buyercontract_get_communication_list_v1_response_m_payload_free(buyercontract_get_communication_list_v1_response_m_payload_t *buyercontract_get_communication_list_v1_response_m_payload);

buyercontract_get_communication_list_v1_response_m_payload_t *buyercontract_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_get_communication_list_v1_response_m_payloadJSON);

cJSON *buyercontract_get_communication_list_v1_response_m_payload_convertToJSON(buyercontract_get_communication_list_v1_response_m_payload_t *buyercontract_get_communication_list_v1_response_m_payload);

#endif /* _buyercontract_get_communication_list_v1_response_m_payload_H_ */


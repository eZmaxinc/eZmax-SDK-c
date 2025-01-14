/*
 * tranqcontract_get_communication_list_v1_response_m_payload.h
 *
 * Response for GET /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationList
 */

#ifndef _tranqcontract_get_communication_list_v1_response_m_payload_H_
#define _tranqcontract_get_communication_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tranqcontract_get_communication_list_v1_response_m_payload_t tranqcontract_get_communication_list_v1_response_m_payload_t;

#include "custom_communication_list_element_response.h"



typedef struct tranqcontract_get_communication_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container

} tranqcontract_get_communication_list_v1_response_m_payload_t;

tranqcontract_get_communication_list_v1_response_m_payload_t *tranqcontract_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
);

void tranqcontract_get_communication_list_v1_response_m_payload_free(tranqcontract_get_communication_list_v1_response_m_payload_t *tranqcontract_get_communication_list_v1_response_m_payload);

tranqcontract_get_communication_list_v1_response_m_payload_t *tranqcontract_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *tranqcontract_get_communication_list_v1_response_m_payloadJSON);

cJSON *tranqcontract_get_communication_list_v1_response_m_payload_convertToJSON(tranqcontract_get_communication_list_v1_response_m_payload_t *tranqcontract_get_communication_list_v1_response_m_payload);

#endif /* _tranqcontract_get_communication_list_v1_response_m_payload_H_ */


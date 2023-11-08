/*
 * inscriptionnotauthenticated_get_communication_list_v1_response_m_payload.h
 *
 * Response for GET /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList
 */

#ifndef _inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_H_
#define _inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t;

#include "custom_communication_list_element_response.h"



typedef struct inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container

} inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t;

inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
);

void inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_free(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload);

inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_communication_list_v1_response_m_payloadJSON);

cJSON *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload);

#endif /* _inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_H_ */


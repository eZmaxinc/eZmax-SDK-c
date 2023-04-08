/*
 * ezsignfolder_get_communication_list_v1_response_m_payload.h
 *
 * Response for GET /1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationList
 */

#ifndef _ezsignfolder_get_communication_list_v1_response_m_payload_H_
#define _ezsignfolder_get_communication_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_communication_list_v1_response_m_payload_t ezsignfolder_get_communication_list_v1_response_m_payload_t;

#include "custom_communication_list_element_response.h"



typedef struct ezsignfolder_get_communication_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container

} ezsignfolder_get_communication_list_v1_response_m_payload_t;

ezsignfolder_get_communication_list_v1_response_m_payload_t *ezsignfolder_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
);

void ezsignfolder_get_communication_list_v1_response_m_payload_free(ezsignfolder_get_communication_list_v1_response_m_payload_t *ezsignfolder_get_communication_list_v1_response_m_payload);

ezsignfolder_get_communication_list_v1_response_m_payload_t *ezsignfolder_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_communication_list_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_communication_list_v1_response_m_payload_convertToJSON(ezsignfolder_get_communication_list_v1_response_m_payload_t *ezsignfolder_get_communication_list_v1_response_m_payload);

#endif /* _ezsignfolder_get_communication_list_v1_response_m_payload_H_ */


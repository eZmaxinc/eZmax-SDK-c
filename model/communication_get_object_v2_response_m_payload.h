/*
 * communication_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/communication/{pkiCommunicationID}
 */

#ifndef _communication_get_object_v2_response_m_payload_H_
#define _communication_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_get_object_v2_response_m_payload_t communication_get_object_v2_response_m_payload_t;

#include "communication_response_compound.h"



typedef struct communication_get_object_v2_response_m_payload_t {
    struct communication_response_compound_t *obj_communication; //model

} communication_get_object_v2_response_m_payload_t;

communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload_create(
    communication_response_compound_t *obj_communication
);

void communication_get_object_v2_response_m_payload_free(communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload);

communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload_parseFromJSON(cJSON *communication_get_object_v2_response_m_payloadJSON);

cJSON *communication_get_object_v2_response_m_payload_convertToJSON(communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload);

#endif /* _communication_get_object_v2_response_m_payload_H_ */


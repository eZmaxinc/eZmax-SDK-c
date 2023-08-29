/*
 * usergroupdelegation_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/usergroupdelegation/{pkiUsergroupdelegationID}
 */

#ifndef _usergroupdelegation_get_object_v2_response_m_payload_H_
#define _usergroupdelegation_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_get_object_v2_response_m_payload_t usergroupdelegation_get_object_v2_response_m_payload_t;

#include "usergroupdelegation_response_compound.h"



typedef struct usergroupdelegation_get_object_v2_response_m_payload_t {
    struct usergroupdelegation_response_compound_t *obj_usergroupdelegation; //model

} usergroupdelegation_get_object_v2_response_m_payload_t;

usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_create(
    usergroupdelegation_response_compound_t *obj_usergroupdelegation
);

void usergroupdelegation_get_object_v2_response_m_payload_free(usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload);

usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroupdelegation_get_object_v2_response_m_payloadJSON);

cJSON *usergroupdelegation_get_object_v2_response_m_payload_convertToJSON(usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload);

#endif /* _usergroupdelegation_get_object_v2_response_m_payload_H_ */


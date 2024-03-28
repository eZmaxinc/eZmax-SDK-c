/*
 * usergroupexternal_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/usergroupexternal
 */

#ifndef _usergroupexternal_create_object_v1_response_m_payload_H_
#define _usergroupexternal_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_create_object_v1_response_m_payload_t usergroupexternal_create_object_v1_response_m_payload_t;




typedef struct usergroupexternal_create_object_v1_response_m_payload_t {
    list_t *a_pki_usergroupexternal_id; //primitive container

} usergroupexternal_create_object_v1_response_m_payload_t;

usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroupexternal_id
);

void usergroupexternal_create_object_v1_response_m_payload_free(usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload);

usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroupexternal_create_object_v1_response_m_payloadJSON);

cJSON *usergroupexternal_create_object_v1_response_m_payload_convertToJSON(usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload);

#endif /* _usergroupexternal_create_object_v1_response_m_payload_H_ */


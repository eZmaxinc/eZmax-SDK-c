/*
 * usergroupmembership_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/usergroupmembership
 */

#ifndef _usergroupmembership_create_object_v1_response_m_payload_H_
#define _usergroupmembership_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_create_object_v1_response_m_payload_t usergroupmembership_create_object_v1_response_m_payload_t;




typedef struct usergroupmembership_create_object_v1_response_m_payload_t {
    list_t *a_pki_usergroupmembership_id; //primitive container

} usergroupmembership_create_object_v1_response_m_payload_t;

usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroupmembership_id
);

void usergroupmembership_create_object_v1_response_m_payload_free(usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload);

usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroupmembership_create_object_v1_response_m_payloadJSON);

cJSON *usergroupmembership_create_object_v1_response_m_payload_convertToJSON(usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload);

#endif /* _usergroupmembership_create_object_v1_response_m_payload_H_ */


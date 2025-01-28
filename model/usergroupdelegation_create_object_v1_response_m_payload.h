/*
 * usergroupdelegation_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/usergroupdelegation
 */

#ifndef _usergroupdelegation_create_object_v1_response_m_payload_H_
#define _usergroupdelegation_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_create_object_v1_response_m_payload_t usergroupdelegation_create_object_v1_response_m_payload_t;




typedef struct usergroupdelegation_create_object_v1_response_m_payload_t {
    list_t *a_pki_usergroupdelegation_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupdelegation_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroupdelegation_id
);

void usergroupdelegation_create_object_v1_response_m_payload_free(usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload);

usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroupdelegation_create_object_v1_response_m_payloadJSON);

cJSON *usergroupdelegation_create_object_v1_response_m_payload_convertToJSON(usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload);

#endif /* _usergroupdelegation_create_object_v1_response_m_payload_H_ */


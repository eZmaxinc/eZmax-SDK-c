/*
 * ezsignsignergroupmembership_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignsignergroupmembership
 */

#ifndef _ezsignsignergroupmembership_create_object_v1_response_m_payload_H_
#define _ezsignsignergroupmembership_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_create_object_v1_response_m_payload_t ezsignsignergroupmembership_create_object_v1_response_m_payload_t;




typedef struct ezsignsignergroupmembership_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignsignergroupmembership_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroupmembership_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsignergroupmembership_id
);

void ezsignsignergroupmembership_create_object_v1_response_m_payload_free(ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload);

ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignergroupmembership_create_object_v1_response_m_payloadJSON);

cJSON *ezsignsignergroupmembership_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload);

#endif /* _ezsignsignergroupmembership_create_object_v1_response_m_payload_H_ */


/*
 * ezsignsigningreason_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignsigningreason
 */

#ifndef _ezsignsigningreason_create_object_v1_response_m_payload_H_
#define _ezsignsigningreason_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_create_object_v1_response_m_payload_t ezsignsigningreason_create_object_v1_response_m_payload_t;




typedef struct ezsignsigningreason_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignsigningreason_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsigningreason_id
);

void ezsignsigningreason_create_object_v1_response_m_payload_free(ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload);

ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_create_object_v1_response_m_payloadJSON);

cJSON *ezsignsigningreason_create_object_v1_response_m_payload_convertToJSON(ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload);

#endif /* _ezsignsigningreason_create_object_v1_response_m_payload_H_ */


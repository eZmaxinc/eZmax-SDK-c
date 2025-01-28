/*
 * ezsignsignergroup_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignsignergroup
 */

#ifndef _ezsignsignergroup_create_object_v1_response_m_payload_H_
#define _ezsignsignergroup_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_create_object_v1_response_m_payload_t ezsignsignergroup_create_object_v1_response_m_payload_t;




typedef struct ezsignsignergroup_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignsignergroup_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroup_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsignergroup_id
);

void ezsignsignergroup_create_object_v1_response_m_payload_free(ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload);

ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignergroup_create_object_v1_response_m_payloadJSON);

cJSON *ezsignsignergroup_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload);

#endif /* _ezsignsignergroup_create_object_v1_response_m_payload_H_ */


/*
 * branding_create_object_v2_response_m_payload.h
 *
 * Payload for POST /2/object/branding
 */

#ifndef _branding_create_object_v2_response_m_payload_H_
#define _branding_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_create_object_v2_response_m_payload_t branding_create_object_v2_response_m_payload_t;




typedef struct branding_create_object_v2_response_m_payload_t {
    list_t *a_pki_branding_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} branding_create_object_v2_response_m_payload_t;

__attribute__((deprecated)) branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_create(
    list_t *a_pki_branding_id
);

void branding_create_object_v2_response_m_payload_free(branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload);

branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload_parseFromJSON(cJSON *branding_create_object_v2_response_m_payloadJSON);

cJSON *branding_create_object_v2_response_m_payload_convertToJSON(branding_create_object_v2_response_m_payload_t *branding_create_object_v2_response_m_payload);

#endif /* _branding_create_object_v2_response_m_payload_H_ */


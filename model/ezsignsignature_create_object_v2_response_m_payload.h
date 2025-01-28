/*
 * ezsignsignature_create_object_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsignsignature
 */

#ifndef _ezsignsignature_create_object_v2_response_m_payload_H_
#define _ezsignsignature_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_create_object_v2_response_m_payload_t ezsignsignature_create_object_v2_response_m_payload_t;




typedef struct ezsignsignature_create_object_v2_response_m_payload_t {
    list_t *a_pki_ezsignsignature_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignature_create_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignsignature_create_object_v2_response_m_payload_t *ezsignsignature_create_object_v2_response_m_payload_create(
    list_t *a_pki_ezsignsignature_id
);

void ezsignsignature_create_object_v2_response_m_payload_free(ezsignsignature_create_object_v2_response_m_payload_t *ezsignsignature_create_object_v2_response_m_payload);

ezsignsignature_create_object_v2_response_m_payload_t *ezsignsignature_create_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsignature_create_object_v2_response_m_payloadJSON);

cJSON *ezsignsignature_create_object_v2_response_m_payload_convertToJSON(ezsignsignature_create_object_v2_response_m_payload_t *ezsignsignature_create_object_v2_response_m_payload);

#endif /* _ezsignsignature_create_object_v2_response_m_payload_H_ */


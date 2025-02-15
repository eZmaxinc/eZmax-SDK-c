/*
 * ezsigndiscussion_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigndiscussion
 */

#ifndef _ezsigndiscussion_create_object_v1_response_m_payload_H_
#define _ezsigndiscussion_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_create_object_v1_response_m_payload_t ezsigndiscussion_create_object_v1_response_m_payload_t;




typedef struct ezsigndiscussion_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigndiscussion_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndiscussion_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigndiscussion_id
);

void ezsigndiscussion_create_object_v1_response_m_payload_free(ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload);

ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigndiscussion_create_object_v1_response_m_payloadJSON);

cJSON *ezsigndiscussion_create_object_v1_response_m_payload_convertToJSON(ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload);

#endif /* _ezsigndiscussion_create_object_v1_response_m_payload_H_ */


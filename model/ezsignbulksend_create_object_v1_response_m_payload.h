/*
 * ezsignbulksend_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignbulksend
 */

#ifndef _ezsignbulksend_create_object_v1_response_m_payload_H_
#define _ezsignbulksend_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_create_object_v1_response_m_payload_t ezsignbulksend_create_object_v1_response_m_payload_t;




typedef struct ezsignbulksend_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignbulksend_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignbulksend_id
);

void ezsignbulksend_create_object_v1_response_m_payload_free(ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload);

ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_create_object_v1_response_m_payloadJSON);

cJSON *ezsignbulksend_create_object_v1_response_m_payload_convertToJSON(ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload);

#endif /* _ezsignbulksend_create_object_v1_response_m_payload_H_ */


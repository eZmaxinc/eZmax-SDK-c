/*
 * ezsignannotation_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignannotation
 */

#ifndef _ezsignannotation_create_object_v1_response_m_payload_H_
#define _ezsignannotation_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_create_object_v1_response_m_payload_t ezsignannotation_create_object_v1_response_m_payload_t;




typedef struct ezsignannotation_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignannotation_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignannotation_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignannotation_id
);

void ezsignannotation_create_object_v1_response_m_payload_free(ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload);

ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignannotation_create_object_v1_response_m_payloadJSON);

cJSON *ezsignannotation_create_object_v1_response_m_payload_convertToJSON(ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload);

#endif /* _ezsignannotation_create_object_v1_response_m_payload_H_ */


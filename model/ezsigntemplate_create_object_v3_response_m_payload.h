/*
 * ezsigntemplate_create_object_v3_response_m_payload.h
 *
 * Payload for POST /3/object/ezsigntemplate
 */

#ifndef _ezsigntemplate_create_object_v3_response_m_payload_H_
#define _ezsigntemplate_create_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_create_object_v3_response_m_payload_t ezsigntemplate_create_object_v3_response_m_payload_t;




typedef struct ezsigntemplate_create_object_v3_response_m_payload_t {
    list_t *a_pki_ezsigntemplate_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_create_object_v3_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplate_create_object_v3_response_m_payload_t *ezsigntemplate_create_object_v3_response_m_payload_create(
    list_t *a_pki_ezsigntemplate_id
);

void ezsigntemplate_create_object_v3_response_m_payload_free(ezsigntemplate_create_object_v3_response_m_payload_t *ezsigntemplate_create_object_v3_response_m_payload);

ezsigntemplate_create_object_v3_response_m_payload_t *ezsigntemplate_create_object_v3_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_create_object_v3_response_m_payloadJSON);

cJSON *ezsigntemplate_create_object_v3_response_m_payload_convertToJSON(ezsigntemplate_create_object_v3_response_m_payload_t *ezsigntemplate_create_object_v3_response_m_payload);

#endif /* _ezsigntemplate_create_object_v3_response_m_payload_H_ */


/*
 * ezsignfoldertype_create_object_v3_response_m_payload.h
 *
 * Payload for POST /3/object/ezsignfoldertype
 */

#ifndef _ezsignfoldertype_create_object_v3_response_m_payload_H_
#define _ezsignfoldertype_create_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_create_object_v3_response_m_payload_t ezsignfoldertype_create_object_v3_response_m_payload_t;




typedef struct ezsignfoldertype_create_object_v3_response_m_payload_t {
    list_t *a_pki_ezsignfoldertype_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_create_object_v3_response_m_payload_t;

__attribute__((deprecated)) ezsignfoldertype_create_object_v3_response_m_payload_t *ezsignfoldertype_create_object_v3_response_m_payload_create(
    list_t *a_pki_ezsignfoldertype_id
);

void ezsignfoldertype_create_object_v3_response_m_payload_free(ezsignfoldertype_create_object_v3_response_m_payload_t *ezsignfoldertype_create_object_v3_response_m_payload);

ezsignfoldertype_create_object_v3_response_m_payload_t *ezsignfoldertype_create_object_v3_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_create_object_v3_response_m_payloadJSON);

cJSON *ezsignfoldertype_create_object_v3_response_m_payload_convertToJSON(ezsignfoldertype_create_object_v3_response_m_payload_t *ezsignfoldertype_create_object_v3_response_m_payload);

#endif /* _ezsignfoldertype_create_object_v3_response_m_payload_H_ */


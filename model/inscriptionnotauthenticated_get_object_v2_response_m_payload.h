/*
 * inscriptionnotauthenticated_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}
 */

#ifndef _inscriptionnotauthenticated_get_object_v2_response_m_payload_H_
#define _inscriptionnotauthenticated_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_get_object_v2_response_m_payload_t inscriptionnotauthenticated_get_object_v2_response_m_payload_t;

#include "inscriptionnotauthenticated_response_compound.h"



typedef struct inscriptionnotauthenticated_get_object_v2_response_m_payload_t {
    struct inscriptionnotauthenticated_response_compound_t *obj_inscriptionnotauthenticated; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_create(
    inscriptionnotauthenticated_response_compound_t *obj_inscriptionnotauthenticated
);

void inscriptionnotauthenticated_get_object_v2_response_m_payload_free(inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload);

inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_object_v2_response_m_payloadJSON);

cJSON *inscriptionnotauthenticated_get_object_v2_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_object_v2_response_m_payload_t *inscriptionnotauthenticated_get_object_v2_response_m_payload);

#endif /* _inscriptionnotauthenticated_get_object_v2_response_m_payload_H_ */


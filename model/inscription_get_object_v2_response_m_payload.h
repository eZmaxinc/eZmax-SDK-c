/*
 * inscription_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/inscription/{pkiInscriptionID}
 */

#ifndef _inscription_get_object_v2_response_m_payload_H_
#define _inscription_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_get_object_v2_response_m_payload_t inscription_get_object_v2_response_m_payload_t;

#include "inscription_response_compound.h"



typedef struct inscription_get_object_v2_response_m_payload_t {
    struct inscription_response_compound_t *obj_inscription; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_create(
    inscription_response_compound_t *obj_inscription
);

void inscription_get_object_v2_response_m_payload_free(inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload);

inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload_parseFromJSON(cJSON *inscription_get_object_v2_response_m_payloadJSON);

cJSON *inscription_get_object_v2_response_m_payload_convertToJSON(inscription_get_object_v2_response_m_payload_t *inscription_get_object_v2_response_m_payload);

#endif /* _inscription_get_object_v2_response_m_payload_H_ */


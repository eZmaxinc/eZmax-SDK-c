/*
 * cors_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/cors/{pkiCorsID}
 */

#ifndef _cors_get_object_v2_response_m_payload_H_
#define _cors_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_get_object_v2_response_m_payload_t cors_get_object_v2_response_m_payload_t;

#include "cors_response_compound.h"



typedef struct cors_get_object_v2_response_m_payload_t {
    struct cors_response_compound_t *obj_cors; //model

    int _library_owned; // Is the library responsible for freeing this object?
} cors_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_create(
    cors_response_compound_t *obj_cors
);

void cors_get_object_v2_response_m_payload_free(cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload);

cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_parseFromJSON(cJSON *cors_get_object_v2_response_m_payloadJSON);

cJSON *cors_get_object_v2_response_m_payload_convertToJSON(cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload);

#endif /* _cors_get_object_v2_response_m_payload_H_ */


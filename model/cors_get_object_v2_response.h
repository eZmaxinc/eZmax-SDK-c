/*
 * cors_get_object_v2_response.h
 *
 * Response for GET /2/object/cors/{pkiCorsID}
 */

#ifndef _cors_get_object_v2_response_H_
#define _cors_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_get_object_v2_response_t cors_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "cors_get_object_v2_response_m_payload.h"



typedef struct cors_get_object_v2_response_t {
    struct cors_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} cors_get_object_v2_response_t;

cors_get_object_v2_response_t *cors_get_object_v2_response_create(
    cors_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void cors_get_object_v2_response_free(cors_get_object_v2_response_t *cors_get_object_v2_response);

cors_get_object_v2_response_t *cors_get_object_v2_response_parseFromJSON(cJSON *cors_get_object_v2_responseJSON);

cJSON *cors_get_object_v2_response_convertToJSON(cors_get_object_v2_response_t *cors_get_object_v2_response);

#endif /* _cors_get_object_v2_response_H_ */


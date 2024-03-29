/*
 * apikey_get_object_v2_response.h
 *
 * Response for GET /2/object/apikey/{pkiApikeyID}
 */

#ifndef _apikey_get_object_v2_response_H_
#define _apikey_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_get_object_v2_response_t apikey_get_object_v2_response_t;

#include "apikey_get_object_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct apikey_get_object_v2_response_t {
    struct apikey_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} apikey_get_object_v2_response_t;

apikey_get_object_v2_response_t *apikey_get_object_v2_response_create(
    apikey_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void apikey_get_object_v2_response_free(apikey_get_object_v2_response_t *apikey_get_object_v2_response);

apikey_get_object_v2_response_t *apikey_get_object_v2_response_parseFromJSON(cJSON *apikey_get_object_v2_responseJSON);

cJSON *apikey_get_object_v2_response_convertToJSON(apikey_get_object_v2_response_t *apikey_get_object_v2_response);

#endif /* _apikey_get_object_v2_response_H_ */


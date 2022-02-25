/*
 * apikey_create_object_v2_response.h
 *
 * Response for the /2/object/apikey/createObject API Request
 */

#ifndef _apikey_create_object_v2_response_H_
#define _apikey_create_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_create_object_v2_response_t apikey_create_object_v2_response_t;

#include "apikey_create_object_v2_response_all_of.h"
#include "apikey_create_object_v2_response_m_payload.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct apikey_create_object_v2_response_t {
    struct apikey_create_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} apikey_create_object_v2_response_t;

apikey_create_object_v2_response_t *apikey_create_object_v2_response_create(
    apikey_create_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void apikey_create_object_v2_response_free(apikey_create_object_v2_response_t *apikey_create_object_v2_response);

apikey_create_object_v2_response_t *apikey_create_object_v2_response_parseFromJSON(cJSON *apikey_create_object_v2_responseJSON);

cJSON *apikey_create_object_v2_response_convertToJSON(apikey_create_object_v2_response_t *apikey_create_object_v2_response);

#endif /* _apikey_create_object_v2_response_H_ */


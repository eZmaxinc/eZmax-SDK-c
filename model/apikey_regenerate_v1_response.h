/*
 * apikey_regenerate_v1_response.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/regenerate
 */

#ifndef _apikey_regenerate_v1_response_H_
#define _apikey_regenerate_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_regenerate_v1_response_t apikey_regenerate_v1_response_t;

#include "apikey_regenerate_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct apikey_regenerate_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct apikey_regenerate_v1_response_m_payload_t *m_payload; //model

} apikey_regenerate_v1_response_t;

apikey_regenerate_v1_response_t *apikey_regenerate_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    apikey_regenerate_v1_response_m_payload_t *m_payload
);

void apikey_regenerate_v1_response_free(apikey_regenerate_v1_response_t *apikey_regenerate_v1_response);

apikey_regenerate_v1_response_t *apikey_regenerate_v1_response_parseFromJSON(cJSON *apikey_regenerate_v1_responseJSON);

cJSON *apikey_regenerate_v1_response_convertToJSON(apikey_regenerate_v1_response_t *apikey_regenerate_v1_response);

#endif /* _apikey_regenerate_v1_response_H_ */


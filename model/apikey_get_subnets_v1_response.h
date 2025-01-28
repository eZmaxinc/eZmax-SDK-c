/*
 * apikey_get_subnets_v1_response.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/getSubnets
 */

#ifndef _apikey_get_subnets_v1_response_H_
#define _apikey_get_subnets_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_get_subnets_v1_response_t apikey_get_subnets_v1_response_t;

#include "apikey_get_subnets_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct apikey_get_subnets_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct apikey_get_subnets_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_get_subnets_v1_response_t;

__attribute__((deprecated)) apikey_get_subnets_v1_response_t *apikey_get_subnets_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    apikey_get_subnets_v1_response_m_payload_t *m_payload
);

void apikey_get_subnets_v1_response_free(apikey_get_subnets_v1_response_t *apikey_get_subnets_v1_response);

apikey_get_subnets_v1_response_t *apikey_get_subnets_v1_response_parseFromJSON(cJSON *apikey_get_subnets_v1_responseJSON);

cJSON *apikey_get_subnets_v1_response_convertToJSON(apikey_get_subnets_v1_response_t *apikey_get_subnets_v1_response);

#endif /* _apikey_get_subnets_v1_response_H_ */


/*
 * authenticationexternal_get_list_v1_response.h
 *
 * Response for GET /1/object/authenticationexternal/getList
 */

#ifndef _authenticationexternal_get_list_v1_response_H_
#define _authenticationexternal_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_get_list_v1_response_t authenticationexternal_get_list_v1_response_t;

#include "authenticationexternal_get_list_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"



typedef struct authenticationexternal_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct authenticationexternal_get_list_v1_response_m_payload_t *m_payload; //model

} authenticationexternal_get_list_v1_response_t;

authenticationexternal_get_list_v1_response_t *authenticationexternal_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    authenticationexternal_get_list_v1_response_m_payload_t *m_payload
);

void authenticationexternal_get_list_v1_response_free(authenticationexternal_get_list_v1_response_t *authenticationexternal_get_list_v1_response);

authenticationexternal_get_list_v1_response_t *authenticationexternal_get_list_v1_response_parseFromJSON(cJSON *authenticationexternal_get_list_v1_responseJSON);

cJSON *authenticationexternal_get_list_v1_response_convertToJSON(authenticationexternal_get_list_v1_response_t *authenticationexternal_get_list_v1_response);

#endif /* _authenticationexternal_get_list_v1_response_H_ */


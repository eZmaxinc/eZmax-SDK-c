/*
 * authenticationexternal_reset_authorization_v1_response.h
 *
 * Response for POST /1/object/authenticationexternal/{pkiAuthenticationexternalID}/resetAuthorization
 */

#ifndef _authenticationexternal_reset_authorization_v1_response_H_
#define _authenticationexternal_reset_authorization_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_reset_authorization_v1_response_t authenticationexternal_reset_authorization_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct authenticationexternal_reset_authorization_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_reset_authorization_v1_response_t;

__attribute__((deprecated)) authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void authenticationexternal_reset_authorization_v1_response_free(authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response);

authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_parseFromJSON(cJSON *authenticationexternal_reset_authorization_v1_responseJSON);

cJSON *authenticationexternal_reset_authorization_v1_response_convertToJSON(authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response);

#endif /* _authenticationexternal_reset_authorization_v1_response_H_ */


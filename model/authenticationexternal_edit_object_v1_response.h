/*
 * authenticationexternal_edit_object_v1_response.h
 *
 * Response for PUT /1/object/authenticationexternal/{pkiAuthenticationexternalID}
 */

#ifndef _authenticationexternal_edit_object_v1_response_H_
#define _authenticationexternal_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_edit_object_v1_response_t authenticationexternal_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct authenticationexternal_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} authenticationexternal_edit_object_v1_response_t;

authenticationexternal_edit_object_v1_response_t *authenticationexternal_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void authenticationexternal_edit_object_v1_response_free(authenticationexternal_edit_object_v1_response_t *authenticationexternal_edit_object_v1_response);

authenticationexternal_edit_object_v1_response_t *authenticationexternal_edit_object_v1_response_parseFromJSON(cJSON *authenticationexternal_edit_object_v1_responseJSON);

cJSON *authenticationexternal_edit_object_v1_response_convertToJSON(authenticationexternal_edit_object_v1_response_t *authenticationexternal_edit_object_v1_response);

#endif /* _authenticationexternal_edit_object_v1_response_H_ */


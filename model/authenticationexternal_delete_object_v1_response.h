/*
 * authenticationexternal_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/authenticationexternal/{pkiAuthenticationexternalID}
 */

#ifndef _authenticationexternal_delete_object_v1_response_H_
#define _authenticationexternal_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_delete_object_v1_response_t authenticationexternal_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct authenticationexternal_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} authenticationexternal_delete_object_v1_response_t;

authenticationexternal_delete_object_v1_response_t *authenticationexternal_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void authenticationexternal_delete_object_v1_response_free(authenticationexternal_delete_object_v1_response_t *authenticationexternal_delete_object_v1_response);

authenticationexternal_delete_object_v1_response_t *authenticationexternal_delete_object_v1_response_parseFromJSON(cJSON *authenticationexternal_delete_object_v1_responseJSON);

cJSON *authenticationexternal_delete_object_v1_response_convertToJSON(authenticationexternal_delete_object_v1_response_t *authenticationexternal_delete_object_v1_response);

#endif /* _authenticationexternal_delete_object_v1_response_H_ */


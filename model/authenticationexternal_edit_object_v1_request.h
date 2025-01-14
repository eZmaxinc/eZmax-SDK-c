/*
 * authenticationexternal_edit_object_v1_request.h
 *
 * Request for PUT /1/object/authenticationexternal/{pkiAuthenticationexternalID}
 */

#ifndef _authenticationexternal_edit_object_v1_request_H_
#define _authenticationexternal_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_edit_object_v1_request_t authenticationexternal_edit_object_v1_request_t;

#include "authenticationexternal_request_compound.h"



typedef struct authenticationexternal_edit_object_v1_request_t {
    struct authenticationexternal_request_compound_t *obj_authenticationexternal; //model

} authenticationexternal_edit_object_v1_request_t;

authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_create(
    authenticationexternal_request_compound_t *obj_authenticationexternal
);

void authenticationexternal_edit_object_v1_request_free(authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request);

authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request_parseFromJSON(cJSON *authenticationexternal_edit_object_v1_requestJSON);

cJSON *authenticationexternal_edit_object_v1_request_convertToJSON(authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request);

#endif /* _authenticationexternal_edit_object_v1_request_H_ */


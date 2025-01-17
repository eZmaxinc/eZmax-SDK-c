/*
 * permission_get_object_v2_response.h
 *
 * Response for GET /2/object/permission/{pkiPermissionID}
 */

#ifndef _permission_get_object_v2_response_H_
#define _permission_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_get_object_v2_response_t permission_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "permission_get_object_v2_response_m_payload.h"



typedef struct permission_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct permission_get_object_v2_response_m_payload_t *m_payload; //model

} permission_get_object_v2_response_t;

permission_get_object_v2_response_t *permission_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    permission_get_object_v2_response_m_payload_t *m_payload
);

void permission_get_object_v2_response_free(permission_get_object_v2_response_t *permission_get_object_v2_response);

permission_get_object_v2_response_t *permission_get_object_v2_response_parseFromJSON(cJSON *permission_get_object_v2_responseJSON);

cJSON *permission_get_object_v2_response_convertToJSON(permission_get_object_v2_response_t *permission_get_object_v2_response);

#endif /* _permission_get_object_v2_response_H_ */


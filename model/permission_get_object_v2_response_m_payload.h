/*
 * permission_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/permission/{pkiPermissionID}
 */

#ifndef _permission_get_object_v2_response_m_payload_H_
#define _permission_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_get_object_v2_response_m_payload_t permission_get_object_v2_response_m_payload_t;

#include "permission_response_compound.h"



typedef struct permission_get_object_v2_response_m_payload_t {
    struct permission_response_compound_t *obj_permission; //model

} permission_get_object_v2_response_m_payload_t;

permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_create(
    permission_response_compound_t *obj_permission
);

void permission_get_object_v2_response_m_payload_free(permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload);

permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_parseFromJSON(cJSON *permission_get_object_v2_response_m_payloadJSON);

cJSON *permission_get_object_v2_response_m_payload_convertToJSON(permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload);

#endif /* _permission_get_object_v2_response_m_payload_H_ */


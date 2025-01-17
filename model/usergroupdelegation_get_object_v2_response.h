/*
 * usergroupdelegation_get_object_v2_response.h
 *
 * Response for GET /2/object/usergroupdelegation/{pkiUsergroupdelegationID}
 */

#ifndef _usergroupdelegation_get_object_v2_response_H_
#define _usergroupdelegation_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_get_object_v2_response_t usergroupdelegation_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroupdelegation_get_object_v2_response_m_payload.h"



typedef struct usergroupdelegation_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct usergroupdelegation_get_object_v2_response_m_payload_t *m_payload; //model

} usergroupdelegation_get_object_v2_response_t;

usergroupdelegation_get_object_v2_response_t *usergroupdelegation_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    usergroupdelegation_get_object_v2_response_m_payload_t *m_payload
);

void usergroupdelegation_get_object_v2_response_free(usergroupdelegation_get_object_v2_response_t *usergroupdelegation_get_object_v2_response);

usergroupdelegation_get_object_v2_response_t *usergroupdelegation_get_object_v2_response_parseFromJSON(cJSON *usergroupdelegation_get_object_v2_responseJSON);

cJSON *usergroupdelegation_get_object_v2_response_convertToJSON(usergroupdelegation_get_object_v2_response_t *usergroupdelegation_get_object_v2_response);

#endif /* _usergroupdelegation_get_object_v2_response_H_ */


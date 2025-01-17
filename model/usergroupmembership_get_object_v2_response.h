/*
 * usergroupmembership_get_object_v2_response.h
 *
 * Response for GET /2/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef _usergroupmembership_get_object_v2_response_H_
#define _usergroupmembership_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_get_object_v2_response_t usergroupmembership_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroupmembership_get_object_v2_response_m_payload.h"



typedef struct usergroupmembership_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct usergroupmembership_get_object_v2_response_m_payload_t *m_payload; //model

} usergroupmembership_get_object_v2_response_t;

usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    usergroupmembership_get_object_v2_response_m_payload_t *m_payload
);

void usergroupmembership_get_object_v2_response_free(usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response);

usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response_parseFromJSON(cJSON *usergroupmembership_get_object_v2_responseJSON);

cJSON *usergroupmembership_get_object_v2_response_convertToJSON(usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response);

#endif /* _usergroupmembership_get_object_v2_response_H_ */


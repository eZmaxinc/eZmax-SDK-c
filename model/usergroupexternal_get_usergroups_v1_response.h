/*
 * usergroupexternal_get_usergroups_v1_response.h
 *
 * Response for GET /1/object/usergroupexternal/{pkiUsergroupexternalID}/getUsergroups
 */

#ifndef _usergroupexternal_get_usergroups_v1_response_H_
#define _usergroupexternal_get_usergroups_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_get_usergroups_v1_response_t usergroupexternal_get_usergroups_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroupexternal_get_usergroups_v1_response_m_payload.h"



typedef struct usergroupexternal_get_usergroups_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct usergroupexternal_get_usergroups_v1_response_m_payload_t *m_payload; //model

} usergroupexternal_get_usergroups_v1_response_t;

usergroupexternal_get_usergroups_v1_response_t *usergroupexternal_get_usergroups_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    usergroupexternal_get_usergroups_v1_response_m_payload_t *m_payload
);

void usergroupexternal_get_usergroups_v1_response_free(usergroupexternal_get_usergroups_v1_response_t *usergroupexternal_get_usergroups_v1_response);

usergroupexternal_get_usergroups_v1_response_t *usergroupexternal_get_usergroups_v1_response_parseFromJSON(cJSON *usergroupexternal_get_usergroups_v1_responseJSON);

cJSON *usergroupexternal_get_usergroups_v1_response_convertToJSON(usergroupexternal_get_usergroups_v1_response_t *usergroupexternal_get_usergroups_v1_response);

#endif /* _usergroupexternal_get_usergroups_v1_response_H_ */


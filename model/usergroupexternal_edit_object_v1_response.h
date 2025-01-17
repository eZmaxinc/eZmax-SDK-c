/*
 * usergroupexternal_edit_object_v1_response.h
 *
 * Response for PUT /1/object/usergroupexternal/{pkiUsergroupexternalID}
 */

#ifndef _usergroupexternal_edit_object_v1_response_H_
#define _usergroupexternal_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_edit_object_v1_response_t usergroupexternal_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct usergroupexternal_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} usergroupexternal_edit_object_v1_response_t;

usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void usergroupexternal_edit_object_v1_response_free(usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response);

usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response_parseFromJSON(cJSON *usergroupexternal_edit_object_v1_responseJSON);

cJSON *usergroupexternal_edit_object_v1_response_convertToJSON(usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response);

#endif /* _usergroupexternal_edit_object_v1_response_H_ */


/*
 * usergroupexternal_create_object_v1_response.h
 *
 * Response for POST /1/object/usergroupexternal
 */

#ifndef _usergroupexternal_create_object_v1_response_H_
#define _usergroupexternal_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_create_object_v1_response_t usergroupexternal_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroupexternal_create_object_v1_response_m_payload.h"



typedef struct usergroupexternal_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct usergroupexternal_create_object_v1_response_m_payload_t *m_payload; //model

} usergroupexternal_create_object_v1_response_t;

usergroupexternal_create_object_v1_response_t *usergroupexternal_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    usergroupexternal_create_object_v1_response_m_payload_t *m_payload
);

void usergroupexternal_create_object_v1_response_free(usergroupexternal_create_object_v1_response_t *usergroupexternal_create_object_v1_response);

usergroupexternal_create_object_v1_response_t *usergroupexternal_create_object_v1_response_parseFromJSON(cJSON *usergroupexternal_create_object_v1_responseJSON);

cJSON *usergroupexternal_create_object_v1_response_convertToJSON(usergroupexternal_create_object_v1_response_t *usergroupexternal_create_object_v1_response);

#endif /* _usergroupexternal_create_object_v1_response_H_ */


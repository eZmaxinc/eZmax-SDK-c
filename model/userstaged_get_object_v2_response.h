/*
 * userstaged_get_object_v2_response.h
 *
 * Response for GET /2/object/userstaged/{pkiUserstagedID}
 */

#ifndef _userstaged_get_object_v2_response_H_
#define _userstaged_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_get_object_v2_response_t userstaged_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "userstaged_get_object_v2_response_m_payload.h"



typedef struct userstaged_get_object_v2_response_t {
    struct userstaged_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} userstaged_get_object_v2_response_t;

userstaged_get_object_v2_response_t *userstaged_get_object_v2_response_create(
    userstaged_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void userstaged_get_object_v2_response_free(userstaged_get_object_v2_response_t *userstaged_get_object_v2_response);

userstaged_get_object_v2_response_t *userstaged_get_object_v2_response_parseFromJSON(cJSON *userstaged_get_object_v2_responseJSON);

cJSON *userstaged_get_object_v2_response_convertToJSON(userstaged_get_object_v2_response_t *userstaged_get_object_v2_response);

#endif /* _userstaged_get_object_v2_response_H_ */


/*
 * userstaged_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/userstaged/{pkiUserstagedID}
 */

#ifndef _userstaged_delete_object_v1_response_H_
#define _userstaged_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_delete_object_v1_response_t userstaged_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct userstaged_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} userstaged_delete_object_v1_response_t;

userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void userstaged_delete_object_v1_response_free(userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response);

userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response_parseFromJSON(cJSON *userstaged_delete_object_v1_responseJSON);

cJSON *userstaged_delete_object_v1_response_convertToJSON(userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response);

#endif /* _userstaged_delete_object_v1_response_H_ */


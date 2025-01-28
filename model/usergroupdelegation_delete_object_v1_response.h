/*
 * usergroupdelegation_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/usergroupdelegation/{pkiUsergroupdelegationID}
 */

#ifndef _usergroupdelegation_delete_object_v1_response_H_
#define _usergroupdelegation_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_delete_object_v1_response_t usergroupdelegation_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct usergroupdelegation_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupdelegation_delete_object_v1_response_t;

__attribute__((deprecated)) usergroupdelegation_delete_object_v1_response_t *usergroupdelegation_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void usergroupdelegation_delete_object_v1_response_free(usergroupdelegation_delete_object_v1_response_t *usergroupdelegation_delete_object_v1_response);

usergroupdelegation_delete_object_v1_response_t *usergroupdelegation_delete_object_v1_response_parseFromJSON(cJSON *usergroupdelegation_delete_object_v1_responseJSON);

cJSON *usergroupdelegation_delete_object_v1_response_convertToJSON(usergroupdelegation_delete_object_v1_response_t *usergroupdelegation_delete_object_v1_response);

#endif /* _usergroupdelegation_delete_object_v1_response_H_ */


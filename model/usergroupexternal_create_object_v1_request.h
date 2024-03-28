/*
 * usergroupexternal_create_object_v1_request.h
 *
 * Request for POST /1/object/usergroupexternal
 */

#ifndef _usergroupexternal_create_object_v1_request_H_
#define _usergroupexternal_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_create_object_v1_request_t usergroupexternal_create_object_v1_request_t;

#include "usergroupexternal_request_compound.h"



typedef struct usergroupexternal_create_object_v1_request_t {
    list_t *a_obj_usergroupexternal; //nonprimitive container

} usergroupexternal_create_object_v1_request_t;

usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request_create(
    list_t *a_obj_usergroupexternal
);

void usergroupexternal_create_object_v1_request_free(usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request);

usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request_parseFromJSON(cJSON *usergroupexternal_create_object_v1_requestJSON);

cJSON *usergroupexternal_create_object_v1_request_convertToJSON(usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request);

#endif /* _usergroupexternal_create_object_v1_request_H_ */


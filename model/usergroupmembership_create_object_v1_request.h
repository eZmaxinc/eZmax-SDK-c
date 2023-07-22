/*
 * usergroupmembership_create_object_v1_request.h
 *
 * Request for POST /1/object/usergroupmembership
 */

#ifndef _usergroupmembership_create_object_v1_request_H_
#define _usergroupmembership_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_create_object_v1_request_t usergroupmembership_create_object_v1_request_t;

#include "usergroupmembership_request_compound.h"



typedef struct usergroupmembership_create_object_v1_request_t {
    list_t *a_obj_usergroupmembership; //nonprimitive container

} usergroupmembership_create_object_v1_request_t;

usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request_create(
    list_t *a_obj_usergroupmembership
);

void usergroupmembership_create_object_v1_request_free(usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request);

usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request_parseFromJSON(cJSON *usergroupmembership_create_object_v1_requestJSON);

cJSON *usergroupmembership_create_object_v1_request_convertToJSON(usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request);

#endif /* _usergroupmembership_create_object_v1_request_H_ */


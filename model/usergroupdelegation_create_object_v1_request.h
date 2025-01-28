/*
 * usergroupdelegation_create_object_v1_request.h
 *
 * Request for POST /1/object/usergroupdelegation
 */

#ifndef _usergroupdelegation_create_object_v1_request_H_
#define _usergroupdelegation_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_create_object_v1_request_t usergroupdelegation_create_object_v1_request_t;

#include "usergroupdelegation_request_compound.h"



typedef struct usergroupdelegation_create_object_v1_request_t {
    list_t *a_obj_usergroupdelegation; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupdelegation_create_object_v1_request_t;

__attribute__((deprecated)) usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request_create(
    list_t *a_obj_usergroupdelegation
);

void usergroupdelegation_create_object_v1_request_free(usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request);

usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request_parseFromJSON(cJSON *usergroupdelegation_create_object_v1_requestJSON);

cJSON *usergroupdelegation_create_object_v1_request_convertToJSON(usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request);

#endif /* _usergroupdelegation_create_object_v1_request_H_ */


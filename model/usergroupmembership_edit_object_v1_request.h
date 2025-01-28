/*
 * usergroupmembership_edit_object_v1_request.h
 *
 * Request for PUT /1/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef _usergroupmembership_edit_object_v1_request_H_
#define _usergroupmembership_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_edit_object_v1_request_t usergroupmembership_edit_object_v1_request_t;

#include "usergroupmembership_request_compound.h"



typedef struct usergroupmembership_edit_object_v1_request_t {
    struct usergroupmembership_request_compound_t *obj_usergroupmembership; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupmembership_edit_object_v1_request_t;

__attribute__((deprecated)) usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request_create(
    usergroupmembership_request_compound_t *obj_usergroupmembership
);

void usergroupmembership_edit_object_v1_request_free(usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request);

usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request_parseFromJSON(cJSON *usergroupmembership_edit_object_v1_requestJSON);

cJSON *usergroupmembership_edit_object_v1_request_convertToJSON(usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request);

#endif /* _usergroupmembership_edit_object_v1_request_H_ */


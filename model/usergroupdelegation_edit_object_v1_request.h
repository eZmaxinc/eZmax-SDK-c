/*
 * usergroupdelegation_edit_object_v1_request.h
 *
 * Request for PUT /1/object/usergroupdelegation/{pkiUsergroupdelegationID}
 */

#ifndef _usergroupdelegation_edit_object_v1_request_H_
#define _usergroupdelegation_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_edit_object_v1_request_t usergroupdelegation_edit_object_v1_request_t;

#include "usergroupdelegation_request_compound.h"



typedef struct usergroupdelegation_edit_object_v1_request_t {
    struct usergroupdelegation_request_compound_t *obj_usergroupdelegation; //model

} usergroupdelegation_edit_object_v1_request_t;

usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_create(
    usergroupdelegation_request_compound_t *obj_usergroupdelegation
);

void usergroupdelegation_edit_object_v1_request_free(usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request);

usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_parseFromJSON(cJSON *usergroupdelegation_edit_object_v1_requestJSON);

cJSON *usergroupdelegation_edit_object_v1_request_convertToJSON(usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request);

#endif /* _usergroupdelegation_edit_object_v1_request_H_ */


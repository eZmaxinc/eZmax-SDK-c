/*
 * usergroupexternal_edit_object_v1_request.h
 *
 * Request for PUT /1/object/usergroupexternal/{pkiUsergroupexternalID}
 */

#ifndef _usergroupexternal_edit_object_v1_request_H_
#define _usergroupexternal_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_edit_object_v1_request_t usergroupexternal_edit_object_v1_request_t;

#include "usergroupexternal_request_compound.h"



typedef struct usergroupexternal_edit_object_v1_request_t {
    struct usergroupexternal_request_compound_t *obj_usergroupexternal; //model

} usergroupexternal_edit_object_v1_request_t;

usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_create(
    usergroupexternal_request_compound_t *obj_usergroupexternal
);

void usergroupexternal_edit_object_v1_request_free(usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request);

usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_parseFromJSON(cJSON *usergroupexternal_edit_object_v1_requestJSON);

cJSON *usergroupexternal_edit_object_v1_request_convertToJSON(usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request);

#endif /* _usergroupexternal_edit_object_v1_request_H_ */


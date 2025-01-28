/*
 * permission_edit_object_v1_request.h
 *
 * Request for PUT /1/object/permission/{pkiPermissionID}
 */

#ifndef _permission_edit_object_v1_request_H_
#define _permission_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_edit_object_v1_request_t permission_edit_object_v1_request_t;

#include "permission_request_compound.h"



typedef struct permission_edit_object_v1_request_t {
    struct permission_request_compound_t *obj_permission; //model

    int _library_owned; // Is the library responsible for freeing this object?
} permission_edit_object_v1_request_t;

__attribute__((deprecated)) permission_edit_object_v1_request_t *permission_edit_object_v1_request_create(
    permission_request_compound_t *obj_permission
);

void permission_edit_object_v1_request_free(permission_edit_object_v1_request_t *permission_edit_object_v1_request);

permission_edit_object_v1_request_t *permission_edit_object_v1_request_parseFromJSON(cJSON *permission_edit_object_v1_requestJSON);

cJSON *permission_edit_object_v1_request_convertToJSON(permission_edit_object_v1_request_t *permission_edit_object_v1_request);

#endif /* _permission_edit_object_v1_request_H_ */


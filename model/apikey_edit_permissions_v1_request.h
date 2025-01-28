/*
 * apikey_edit_permissions_v1_request.h
 *
 * Request for PUT /1/object/apikey/{pkiApikeyID}/editPermissions
 */

#ifndef _apikey_edit_permissions_v1_request_H_
#define _apikey_edit_permissions_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_edit_permissions_v1_request_t apikey_edit_permissions_v1_request_t;

#include "permission_request_compound.h"



typedef struct apikey_edit_permissions_v1_request_t {
    list_t *a_obj_permission; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_edit_permissions_v1_request_t;

__attribute__((deprecated)) apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request_create(
    list_t *a_obj_permission
);

void apikey_edit_permissions_v1_request_free(apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request);

apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request_parseFromJSON(cJSON *apikey_edit_permissions_v1_requestJSON);

cJSON *apikey_edit_permissions_v1_request_convertToJSON(apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request);

#endif /* _apikey_edit_permissions_v1_request_H_ */


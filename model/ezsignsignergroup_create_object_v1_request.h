/*
 * ezsignsignergroup_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignsignergroup
 */

#ifndef _ezsignsignergroup_create_object_v1_request_H_
#define _ezsignsignergroup_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_create_object_v1_request_t ezsignsignergroup_create_object_v1_request_t;

#include "ezsignsignergroup_request_compound.h"



typedef struct ezsignsignergroup_create_object_v1_request_t {
    list_t *a_obj_ezsignsignergroup; //nonprimitive container

} ezsignsignergroup_create_object_v1_request_t;

ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_create(
    list_t *a_obj_ezsignsignergroup
);

void ezsignsignergroup_create_object_v1_request_free(ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request);

ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_parseFromJSON(cJSON *ezsignsignergroup_create_object_v1_requestJSON);

cJSON *ezsignsignergroup_create_object_v1_request_convertToJSON(ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request);

#endif /* _ezsignsignergroup_create_object_v1_request_H_ */


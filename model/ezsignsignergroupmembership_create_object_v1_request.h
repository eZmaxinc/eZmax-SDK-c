/*
 * ezsignsignergroupmembership_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignsignergroupmembership
 */

#ifndef _ezsignsignergroupmembership_create_object_v1_request_H_
#define _ezsignsignergroupmembership_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_create_object_v1_request_t ezsignsignergroupmembership_create_object_v1_request_t;

#include "ezsignsignergroupmembership_request_compound.h"



typedef struct ezsignsignergroupmembership_create_object_v1_request_t {
    list_t *a_obj_ezsignsignergroupmembership; //nonprimitive container

} ezsignsignergroupmembership_create_object_v1_request_t;

ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_create(
    list_t *a_obj_ezsignsignergroupmembership
);

void ezsignsignergroupmembership_create_object_v1_request_free(ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request);

ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_parseFromJSON(cJSON *ezsignsignergroupmembership_create_object_v1_requestJSON);

cJSON *ezsignsignergroupmembership_create_object_v1_request_convertToJSON(ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request);

#endif /* _ezsignsignergroupmembership_create_object_v1_request_H_ */


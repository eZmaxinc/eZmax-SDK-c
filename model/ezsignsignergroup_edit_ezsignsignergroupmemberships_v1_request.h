/*
 * ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request.h
 *
 * Request for PUT /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/editEzsignsignergroupmemberships
 */

#ifndef _ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_H_
#define _ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t;

#include "ezsignsignergroupmembership_request_compound.h"



typedef struct ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t {
    list_t *a_obj_ezsignsignergroupmembership; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t;

__attribute__((deprecated)) ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_create(
    list_t *a_obj_ezsignsignergroupmembership
);

void ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);

ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_parseFromJSON(cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_requestJSON);

cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);

#endif /* _ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_H_ */


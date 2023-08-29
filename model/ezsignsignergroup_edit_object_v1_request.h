/*
 * ezsignsignergroup_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}
 */

#ifndef _ezsignsignergroup_edit_object_v1_request_H_
#define _ezsignsignergroup_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_edit_object_v1_request_t ezsignsignergroup_edit_object_v1_request_t;

#include "ezsignsignergroup_request_compound.h"



typedef struct ezsignsignergroup_edit_object_v1_request_t {
    struct ezsignsignergroup_request_compound_t *obj_ezsignsignergroup; //model

} ezsignsignergroup_edit_object_v1_request_t;

ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_create(
    ezsignsignergroup_request_compound_t *obj_ezsignsignergroup
);

void ezsignsignergroup_edit_object_v1_request_free(ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request);

ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_parseFromJSON(cJSON *ezsignsignergroup_edit_object_v1_requestJSON);

cJSON *ezsignsignergroup_edit_object_v1_request_convertToJSON(ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request);

#endif /* _ezsignsignergroup_edit_object_v1_request_H_ */


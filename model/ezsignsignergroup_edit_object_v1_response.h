/*
 * ezsignsignergroup_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}
 */

#ifndef _ezsignsignergroup_edit_object_v1_response_H_
#define _ezsignsignergroup_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_edit_object_v1_response_t ezsignsignergroup_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignsignergroup_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroup_edit_object_v1_response_t;

__attribute__((deprecated)) ezsignsignergroup_edit_object_v1_response_t *ezsignsignergroup_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignergroup_edit_object_v1_response_free(ezsignsignergroup_edit_object_v1_response_t *ezsignsignergroup_edit_object_v1_response);

ezsignsignergroup_edit_object_v1_response_t *ezsignsignergroup_edit_object_v1_response_parseFromJSON(cJSON *ezsignsignergroup_edit_object_v1_responseJSON);

cJSON *ezsignsignergroup_edit_object_v1_response_convertToJSON(ezsignsignergroup_edit_object_v1_response_t *ezsignsignergroup_edit_object_v1_response);

#endif /* _ezsignsignergroup_edit_object_v1_response_H_ */


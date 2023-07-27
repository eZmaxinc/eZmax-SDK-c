/*
 * ezsignsignergroupmembership_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}
 */

#ifndef _ezsignsignergroupmembership_delete_object_v1_response_H_
#define _ezsignsignergroupmembership_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_delete_object_v1_response_t ezsignsignergroupmembership_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignsignergroupmembership_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignsignergroupmembership_delete_object_v1_response_t;

ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignergroupmembership_delete_object_v1_response_free(ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response);

ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response_parseFromJSON(cJSON *ezsignsignergroupmembership_delete_object_v1_responseJSON);

cJSON *ezsignsignergroupmembership_delete_object_v1_response_convertToJSON(ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response);

#endif /* _ezsignsignergroupmembership_delete_object_v1_response_H_ */


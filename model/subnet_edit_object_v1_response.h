/*
 * subnet_edit_object_v1_response.h
 *
 * Response for PUT /1/object/subnet/{pkiSubnetID}
 */

#ifndef _subnet_edit_object_v1_response_H_
#define _subnet_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_edit_object_v1_response_t subnet_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct subnet_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} subnet_edit_object_v1_response_t;

subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void subnet_edit_object_v1_response_free(subnet_edit_object_v1_response_t *subnet_edit_object_v1_response);

subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_parseFromJSON(cJSON *subnet_edit_object_v1_responseJSON);

cJSON *subnet_edit_object_v1_response_convertToJSON(subnet_edit_object_v1_response_t *subnet_edit_object_v1_response);

#endif /* _subnet_edit_object_v1_response_H_ */


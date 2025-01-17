/*
 * supply_edit_object_v1_response.h
 *
 * Response for PUT /1/object/supply/{pkiSupplyID}
 */

#ifndef _supply_edit_object_v1_response_H_
#define _supply_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_edit_object_v1_response_t supply_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct supply_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} supply_edit_object_v1_response_t;

supply_edit_object_v1_response_t *supply_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void supply_edit_object_v1_response_free(supply_edit_object_v1_response_t *supply_edit_object_v1_response);

supply_edit_object_v1_response_t *supply_edit_object_v1_response_parseFromJSON(cJSON *supply_edit_object_v1_responseJSON);

cJSON *supply_edit_object_v1_response_convertToJSON(supply_edit_object_v1_response_t *supply_edit_object_v1_response);

#endif /* _supply_edit_object_v1_response_H_ */


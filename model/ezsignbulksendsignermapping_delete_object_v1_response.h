/*
 * ezsignbulksendsignermapping_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}
 */

#ifndef _ezsignbulksendsignermapping_delete_object_v1_response_H_
#define _ezsignbulksendsignermapping_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_delete_object_v1_response_t ezsignbulksendsignermapping_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignbulksendsignermapping_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksendsignermapping_delete_object_v1_response_t;

ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksendsignermapping_delete_object_v1_response_free(ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response);

ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response_parseFromJSON(cJSON *ezsignbulksendsignermapping_delete_object_v1_responseJSON);

cJSON *ezsignbulksendsignermapping_delete_object_v1_response_convertToJSON(ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response);

#endif /* _ezsignbulksendsignermapping_delete_object_v1_response_H_ */


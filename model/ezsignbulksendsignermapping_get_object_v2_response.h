/*
 * ezsignbulksendsignermapping_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}
 */

#ifndef _ezsignbulksendsignermapping_get_object_v2_response_H_
#define _ezsignbulksendsignermapping_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_get_object_v2_response_t ezsignbulksendsignermapping_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignbulksendsignermapping_get_object_v2_response_m_payload.h"



typedef struct ezsignbulksendsignermapping_get_object_v2_response_t {
    struct ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksendsignermapping_get_object_v2_response_t;

ezsignbulksendsignermapping_get_object_v2_response_t *ezsignbulksendsignermapping_get_object_v2_response_create(
    ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksendsignermapping_get_object_v2_response_free(ezsignbulksendsignermapping_get_object_v2_response_t *ezsignbulksendsignermapping_get_object_v2_response);

ezsignbulksendsignermapping_get_object_v2_response_t *ezsignbulksendsignermapping_get_object_v2_response_parseFromJSON(cJSON *ezsignbulksendsignermapping_get_object_v2_responseJSON);

cJSON *ezsignbulksendsignermapping_get_object_v2_response_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_t *ezsignbulksendsignermapping_get_object_v2_response);

#endif /* _ezsignbulksendsignermapping_get_object_v2_response_H_ */


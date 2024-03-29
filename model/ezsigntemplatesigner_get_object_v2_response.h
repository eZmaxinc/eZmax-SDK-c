/*
 * ezsigntemplatesigner_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef _ezsigntemplatesigner_get_object_v2_response_H_
#define _ezsigntemplatesigner_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_get_object_v2_response_t ezsigntemplatesigner_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatesigner_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatesigner_get_object_v2_response_t {
    struct ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatesigner_get_object_v2_response_t;

ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_create(
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatesigner_get_object_v2_response_free(ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response);

ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_responseJSON);

cJSON *ezsigntemplatesigner_get_object_v2_response_convertToJSON(ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response);

#endif /* _ezsigntemplatesigner_get_object_v2_response_H_ */


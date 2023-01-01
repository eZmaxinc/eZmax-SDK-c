/*
 * ezsigntemplatesignature_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef _ezsigntemplatesignature_get_object_v2_response_H_
#define _ezsigntemplatesignature_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_get_object_v2_response_t ezsigntemplatesignature_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatesignature_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatesignature_get_object_v2_response_t {
    struct ezsigntemplatesignature_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatesignature_get_object_v2_response_t;

ezsigntemplatesignature_get_object_v2_response_t *ezsigntemplatesignature_get_object_v2_response_create(
    ezsigntemplatesignature_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatesignature_get_object_v2_response_free(ezsigntemplatesignature_get_object_v2_response_t *ezsigntemplatesignature_get_object_v2_response);

ezsigntemplatesignature_get_object_v2_response_t *ezsigntemplatesignature_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v2_responseJSON);

cJSON *ezsigntemplatesignature_get_object_v2_response_convertToJSON(ezsigntemplatesignature_get_object_v2_response_t *ezsigntemplatesignature_get_object_v2_response);

#endif /* _ezsigntemplatesignature_get_object_v2_response_H_ */


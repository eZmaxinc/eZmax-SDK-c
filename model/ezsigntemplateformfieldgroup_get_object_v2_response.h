/*
 * ezsigntemplateformfieldgroup_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}
 */

#ifndef _ezsigntemplateformfieldgroup_get_object_v2_response_H_
#define _ezsigntemplateformfieldgroup_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_get_object_v2_response_t ezsigntemplateformfieldgroup_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateformfieldgroup_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplateformfieldgroup_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *m_payload; //model

} ezsigntemplateformfieldgroup_get_object_v2_response_t;

ezsigntemplateformfieldgroup_get_object_v2_response_t *ezsigntemplateformfieldgroup_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplateformfieldgroup_get_object_v2_response_free(ezsigntemplateformfieldgroup_get_object_v2_response_t *ezsigntemplateformfieldgroup_get_object_v2_response);

ezsigntemplateformfieldgroup_get_object_v2_response_t *ezsigntemplateformfieldgroup_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_get_object_v2_responseJSON);

cJSON *ezsigntemplateformfieldgroup_get_object_v2_response_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_t *ezsigntemplateformfieldgroup_get_object_v2_response);

#endif /* _ezsigntemplateformfieldgroup_get_object_v2_response_H_ */


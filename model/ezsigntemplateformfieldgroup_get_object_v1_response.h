/*
 * ezsigntemplateformfieldgroup_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}
 */

#ifndef _ezsigntemplateformfieldgroup_get_object_v1_response_H_
#define _ezsigntemplateformfieldgroup_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_get_object_v1_response_t ezsigntemplateformfieldgroup_get_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateformfieldgroup_get_object_v1_response_all_of.h"
#include "ezsigntemplateformfieldgroup_get_object_v1_response_m_payload.h"



typedef struct ezsigntemplateformfieldgroup_get_object_v1_response_t {
    struct ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplateformfieldgroup_get_object_v1_response_t;

ezsigntemplateformfieldgroup_get_object_v1_response_t *ezsigntemplateformfieldgroup_get_object_v1_response_create(
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplateformfieldgroup_get_object_v1_response_free(ezsigntemplateformfieldgroup_get_object_v1_response_t *ezsigntemplateformfieldgroup_get_object_v1_response);

ezsigntemplateformfieldgroup_get_object_v1_response_t *ezsigntemplateformfieldgroup_get_object_v1_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_get_object_v1_responseJSON);

cJSON *ezsigntemplateformfieldgroup_get_object_v1_response_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_t *ezsigntemplateformfieldgroup_get_object_v1_response);

#endif /* _ezsigntemplateformfieldgroup_get_object_v1_response_H_ */


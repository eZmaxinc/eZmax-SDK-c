/*
 * ezsigntemplatepackagesignermembership_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}
 */

#ifndef _ezsigntemplatepackagesignermembership_get_object_v1_response_H_
#define _ezsigntemplatepackagesignermembership_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_get_object_v1_response_t ezsigntemplatepackagesignermembership_get_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesignermembership_get_object_v1_response_all_of.h"
#include "ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagesignermembership_get_object_v1_response_t {
    struct ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepackagesignermembership_get_object_v1_response_t;

ezsigntemplatepackagesignermembership_get_object_v1_response_t *ezsigntemplatepackagesignermembership_get_object_v1_response_create(
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepackagesignermembership_get_object_v1_response_free(ezsigntemplatepackagesignermembership_get_object_v1_response_t *ezsigntemplatepackagesignermembership_get_object_v1_response);

ezsigntemplatepackagesignermembership_get_object_v1_response_t *ezsigntemplatepackagesignermembership_get_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_get_object_v1_responseJSON);

cJSON *ezsigntemplatepackagesignermembership_get_object_v1_response_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v1_response_t *ezsigntemplatepackagesignermembership_get_object_v1_response);

#endif /* _ezsigntemplatepackagesignermembership_get_object_v1_response_H_ */


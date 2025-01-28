/*
 * ezsigntemplatepackagesignermembership_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}
 */

#ifndef _ezsigntemplatepackagesignermembership_get_object_v2_response_H_
#define _ezsigntemplatepackagesignermembership_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_get_object_v2_response_t ezsigntemplatepackagesignermembership_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatepackagesignermembership_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesignermembership_get_object_v2_response_t;

__attribute__((deprecated)) ezsigntemplatepackagesignermembership_get_object_v2_response_t *ezsigntemplatepackagesignermembership_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatepackagesignermembership_get_object_v2_response_free(ezsigntemplatepackagesignermembership_get_object_v2_response_t *ezsigntemplatepackagesignermembership_get_object_v2_response);

ezsigntemplatepackagesignermembership_get_object_v2_response_t *ezsigntemplatepackagesignermembership_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_get_object_v2_responseJSON);

cJSON *ezsigntemplatepackagesignermembership_get_object_v2_response_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v2_response_t *ezsigntemplatepackagesignermembership_get_object_v2_response);

#endif /* _ezsigntemplatepackagesignermembership_get_object_v2_response_H_ */


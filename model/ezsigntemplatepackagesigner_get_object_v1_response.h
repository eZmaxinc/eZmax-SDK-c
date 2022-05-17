/*
 * ezsigntemplatepackagesigner_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_get_object_v1_response_H_
#define _ezsigntemplatepackagesigner_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_get_object_v1_response_t ezsigntemplatepackagesigner_get_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesigner_get_object_v1_response_all_of.h"
#include "ezsigntemplatepackagesigner_get_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagesigner_get_object_v1_response_t {
    struct ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepackagesigner_get_object_v1_response_t;

ezsigntemplatepackagesigner_get_object_v1_response_t *ezsigntemplatepackagesigner_get_object_v1_response_create(
    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepackagesigner_get_object_v1_response_free(ezsigntemplatepackagesigner_get_object_v1_response_t *ezsigntemplatepackagesigner_get_object_v1_response);

ezsigntemplatepackagesigner_get_object_v1_response_t *ezsigntemplatepackagesigner_get_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_get_object_v1_responseJSON);

cJSON *ezsigntemplatepackagesigner_get_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_get_object_v1_response_t *ezsigntemplatepackagesigner_get_object_v1_response);

#endif /* _ezsigntemplatepackagesigner_get_object_v1_response_H_ */


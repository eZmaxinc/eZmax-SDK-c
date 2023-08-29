/*
 * ezsigntemplatepackagesigner_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_get_object_v2_response_H_
#define _ezsigntemplatepackagesigner_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_get_object_v2_response_t ezsigntemplatepackagesigner_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesigner_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatepackagesigner_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *m_payload; //model

} ezsigntemplatepackagesigner_get_object_v2_response_t;

ezsigntemplatepackagesigner_get_object_v2_response_t *ezsigntemplatepackagesigner_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatepackagesigner_get_object_v2_response_free(ezsigntemplatepackagesigner_get_object_v2_response_t *ezsigntemplatepackagesigner_get_object_v2_response);

ezsigntemplatepackagesigner_get_object_v2_response_t *ezsigntemplatepackagesigner_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_get_object_v2_responseJSON);

cJSON *ezsigntemplatepackagesigner_get_object_v2_response_convertToJSON(ezsigntemplatepackagesigner_get_object_v2_response_t *ezsigntemplatepackagesigner_get_object_v2_response);

#endif /* _ezsigntemplatepackagesigner_get_object_v2_response_H_ */


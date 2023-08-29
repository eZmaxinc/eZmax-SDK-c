/*
 * ezsigntemplatepackagesigner_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatepackagesigner
 */

#ifndef _ezsigntemplatepackagesigner_create_object_v1_response_H_
#define _ezsigntemplatepackagesigner_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_create_object_v1_response_t ezsigntemplatepackagesigner_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesigner_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagesigner_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepackagesigner_create_object_v1_response_t;

ezsigntemplatepackagesigner_create_object_v1_response_t *ezsigntemplatepackagesigner_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackagesigner_create_object_v1_response_free(ezsigntemplatepackagesigner_create_object_v1_response_t *ezsigntemplatepackagesigner_create_object_v1_response);

ezsigntemplatepackagesigner_create_object_v1_response_t *ezsigntemplatepackagesigner_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_create_object_v1_responseJSON);

cJSON *ezsigntemplatepackagesigner_create_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_t *ezsigntemplatepackagesigner_create_object_v1_response);

#endif /* _ezsigntemplatepackagesigner_create_object_v1_response_H_ */


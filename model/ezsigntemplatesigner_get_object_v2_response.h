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
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_get_object_v2_response_t;

__attribute__((deprecated)) ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatesigner_get_object_v2_response_free(ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response);

ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_responseJSON);

cJSON *ezsigntemplatesigner_get_object_v2_response_convertToJSON(ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response);

#endif /* _ezsigntemplatesigner_get_object_v2_response_H_ */


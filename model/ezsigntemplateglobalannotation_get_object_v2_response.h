/*
 * ezsigntemplateglobalannotation_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplateglobalannotation/{pkiEzsigntemplateglobalannotationID}
 */

#ifndef _ezsigntemplateglobalannotation_get_object_v2_response_H_
#define _ezsigntemplateglobalannotation_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobalannotation_get_object_v2_response_t ezsigntemplateglobalannotation_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateglobalannotation_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplateglobalannotation_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobalannotation_get_object_v2_response_t;

__attribute__((deprecated)) ezsigntemplateglobalannotation_get_object_v2_response_t *ezsigntemplateglobalannotation_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplateglobalannotation_get_object_v2_response_free(ezsigntemplateglobalannotation_get_object_v2_response_t *ezsigntemplateglobalannotation_get_object_v2_response);

ezsigntemplateglobalannotation_get_object_v2_response_t *ezsigntemplateglobalannotation_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplateglobalannotation_get_object_v2_responseJSON);

cJSON *ezsigntemplateglobalannotation_get_object_v2_response_convertToJSON(ezsigntemplateglobalannotation_get_object_v2_response_t *ezsigntemplateglobalannotation_get_object_v2_response);

#endif /* _ezsigntemplateglobalannotation_get_object_v2_response_H_ */


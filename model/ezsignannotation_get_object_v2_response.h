/*
 * ezsignannotation_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignannotation/{pkiEzsignannotationID}
 */

#ifndef _ezsignannotation_get_object_v2_response_H_
#define _ezsignannotation_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_get_object_v2_response_t ezsignannotation_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignannotation_get_object_v2_response_m_payload.h"



typedef struct ezsignannotation_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignannotation_get_object_v2_response_m_payload_t *m_payload; //model

} ezsignannotation_get_object_v2_response_t;

ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignannotation_get_object_v2_response_m_payload_t *m_payload
);

void ezsignannotation_get_object_v2_response_free(ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response);

ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response_parseFromJSON(cJSON *ezsignannotation_get_object_v2_responseJSON);

cJSON *ezsignannotation_get_object_v2_response_convertToJSON(ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response);

#endif /* _ezsignannotation_get_object_v2_response_H_ */


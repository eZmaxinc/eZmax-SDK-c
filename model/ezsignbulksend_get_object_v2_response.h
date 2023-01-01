/*
 * ezsignbulksend_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef _ezsignbulksend_get_object_v2_response_H_
#define _ezsignbulksend_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_object_v2_response_t ezsignbulksend_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignbulksend_get_object_v2_response_m_payload.h"



typedef struct ezsignbulksend_get_object_v2_response_t {
    struct ezsignbulksend_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksend_get_object_v2_response_t;

ezsignbulksend_get_object_v2_response_t *ezsignbulksend_get_object_v2_response_create(
    ezsignbulksend_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksend_get_object_v2_response_free(ezsignbulksend_get_object_v2_response_t *ezsignbulksend_get_object_v2_response);

ezsignbulksend_get_object_v2_response_t *ezsignbulksend_get_object_v2_response_parseFromJSON(cJSON *ezsignbulksend_get_object_v2_responseJSON);

cJSON *ezsignbulksend_get_object_v2_response_convertToJSON(ezsignbulksend_get_object_v2_response_t *ezsignbulksend_get_object_v2_response);

#endif /* _ezsignbulksend_get_object_v2_response_H_ */


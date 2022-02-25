/*
 * ezsignbulksend_get_object_v1_response.h
 *
 * Response for the /1/object/ezsignbulksend/getObject API Request
 */

#ifndef _ezsignbulksend_get_object_v1_response_H_
#define _ezsignbulksend_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_object_v1_response_t ezsignbulksend_get_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignbulksend_get_object_v1_response_all_of.h"
#include "ezsignbulksend_get_object_v1_response_m_payload.h"



typedef struct ezsignbulksend_get_object_v1_response_t {
    struct ezsignbulksend_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksend_get_object_v1_response_t;

ezsignbulksend_get_object_v1_response_t *ezsignbulksend_get_object_v1_response_create(
    ezsignbulksend_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksend_get_object_v1_response_free(ezsignbulksend_get_object_v1_response_t *ezsignbulksend_get_object_v1_response);

ezsignbulksend_get_object_v1_response_t *ezsignbulksend_get_object_v1_response_parseFromJSON(cJSON *ezsignbulksend_get_object_v1_responseJSON);

cJSON *ezsignbulksend_get_object_v1_response_convertToJSON(ezsignbulksend_get_object_v1_response_t *ezsignbulksend_get_object_v1_response);

#endif /* _ezsignbulksend_get_object_v1_response_H_ */


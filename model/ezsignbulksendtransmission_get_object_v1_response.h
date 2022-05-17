/*
 * ezsignbulksendtransmission_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}
 */

#ifndef _ezsignbulksendtransmission_get_object_v1_response_H_
#define _ezsignbulksendtransmission_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_get_object_v1_response_t ezsignbulksendtransmission_get_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignbulksendtransmission_get_object_v1_response_all_of.h"
#include "ezsignbulksendtransmission_get_object_v1_response_m_payload.h"



typedef struct ezsignbulksendtransmission_get_object_v1_response_t {
    struct ezsignbulksendtransmission_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksendtransmission_get_object_v1_response_t;

ezsignbulksendtransmission_get_object_v1_response_t *ezsignbulksendtransmission_get_object_v1_response_create(
    ezsignbulksendtransmission_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksendtransmission_get_object_v1_response_free(ezsignbulksendtransmission_get_object_v1_response_t *ezsignbulksendtransmission_get_object_v1_response);

ezsignbulksendtransmission_get_object_v1_response_t *ezsignbulksendtransmission_get_object_v1_response_parseFromJSON(cJSON *ezsignbulksendtransmission_get_object_v1_responseJSON);

cJSON *ezsignbulksendtransmission_get_object_v1_response_convertToJSON(ezsignbulksendtransmission_get_object_v1_response_t *ezsignbulksendtransmission_get_object_v1_response);

#endif /* _ezsignbulksendtransmission_get_object_v1_response_H_ */


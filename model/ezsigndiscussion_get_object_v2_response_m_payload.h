/*
 * ezsigndiscussion_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigndiscussion/{pkiEzsigndiscussionID}
 */

#ifndef _ezsigndiscussion_get_object_v2_response_m_payload_H_
#define _ezsigndiscussion_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_get_object_v2_response_m_payload_t ezsigndiscussion_get_object_v2_response_m_payload_t;

#include "ezsigndiscussion_response_compound.h"



typedef struct ezsigndiscussion_get_object_v2_response_m_payload_t {
    struct ezsigndiscussion_response_compound_t *obj_ezsigndiscussion; //model

} ezsigndiscussion_get_object_v2_response_m_payload_t;

ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_create(
    ezsigndiscussion_response_compound_t *obj_ezsigndiscussion
);

void ezsigndiscussion_get_object_v2_response_m_payload_free(ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload);

ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigndiscussion_get_object_v2_response_m_payloadJSON);

cJSON *ezsigndiscussion_get_object_v2_response_m_payload_convertToJSON(ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload);

#endif /* _ezsigndiscussion_get_object_v2_response_m_payload_H_ */


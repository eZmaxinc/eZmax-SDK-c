/*
 * ezsigndocument_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigndocument/{pkiEzsigndocumentID}
 */

#ifndef _ezsigndocument_get_object_v2_response_m_payload_H_
#define _ezsigndocument_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_object_v2_response_m_payload_t ezsigndocument_get_object_v2_response_m_payload_t;

#include "ezsigndocument_response_compound.h"



typedef struct ezsigndocument_get_object_v2_response_m_payload_t {
    struct ezsigndocument_response_compound_t *obj_ezsigndocument; //model

} ezsigndocument_get_object_v2_response_m_payload_t;

ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload_create(
    ezsigndocument_response_compound_t *obj_ezsigndocument
);

void ezsigndocument_get_object_v2_response_m_payload_free(ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload);

ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_object_v2_response_m_payloadJSON);

cJSON *ezsigndocument_get_object_v2_response_m_payload_convertToJSON(ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload);

#endif /* _ezsigndocument_get_object_v2_response_m_payload_H_ */


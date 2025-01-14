/*
 * ezsigndocument_create_object_v3_response_m_payload.h
 *
 * Payload for POST /3/object/ezsigndocument
 */

#ifndef _ezsigndocument_create_object_v3_response_m_payload_H_
#define _ezsigndocument_create_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v3_response_m_payload_t ezsigndocument_create_object_v3_response_m_payload_t;

#include "ezsigndocument_create_element_v3_response.h"



typedef struct ezsigndocument_create_object_v3_response_m_payload_t {
    list_t *a_obj_ezsigndocument; //nonprimitive container

} ezsigndocument_create_object_v3_response_m_payload_t;

ezsigndocument_create_object_v3_response_m_payload_t *ezsigndocument_create_object_v3_response_m_payload_create(
    list_t *a_obj_ezsigndocument
);

void ezsigndocument_create_object_v3_response_m_payload_free(ezsigndocument_create_object_v3_response_m_payload_t *ezsigndocument_create_object_v3_response_m_payload);

ezsigndocument_create_object_v3_response_m_payload_t *ezsigndocument_create_object_v3_response_m_payload_parseFromJSON(cJSON *ezsigndocument_create_object_v3_response_m_payloadJSON);

cJSON *ezsigndocument_create_object_v3_response_m_payload_convertToJSON(ezsigndocument_create_object_v3_response_m_payload_t *ezsigndocument_create_object_v3_response_m_payload);

#endif /* _ezsigndocument_create_object_v3_response_m_payload_H_ */


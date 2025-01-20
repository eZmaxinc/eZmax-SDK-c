/*
 * ezsigndocument_get_ezsignpages_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getEzsignpages
 */

#ifndef _ezsigndocument_get_ezsignpages_v1_response_m_payload_H_
#define _ezsigndocument_get_ezsignpages_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_ezsignpages_v1_response_m_payload_t ezsigndocument_get_ezsignpages_v1_response_m_payload_t;

#include "ezsignpage_response.h"



typedef struct ezsigndocument_get_ezsignpages_v1_response_m_payload_t {
    list_t *a_obj_ezsignpage; //nonprimitive container

} ezsigndocument_get_ezsignpages_v1_response_m_payload_t;

ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload_create(
    list_t *a_obj_ezsignpage
);

void ezsigndocument_get_ezsignpages_v1_response_m_payload_free(ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload);

ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignpages_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_ezsignpages_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignpages_v1_response_m_payload_t *ezsigndocument_get_ezsignpages_v1_response_m_payload);

#endif /* _ezsigndocument_get_ezsignpages_v1_response_m_payload_H_ */


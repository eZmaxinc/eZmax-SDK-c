/*
 * ezsignsignature_get_object_v3_response_m_payload.h
 *
 * Payload for GET /3/object/ezsignsignature/{pkiEzsignsignatureID}
 */

#ifndef _ezsignsignature_get_object_v3_response_m_payload_H_
#define _ezsignsignature_get_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_get_object_v3_response_m_payload_t ezsignsignature_get_object_v3_response_m_payload_t;

#include "ezsignsignature_response_compound_v3.h"



typedef struct ezsignsignature_get_object_v3_response_m_payload_t {
    struct ezsignsignature_response_compound_v3_t *obj_ezsignsignature; //model

} ezsignsignature_get_object_v3_response_m_payload_t;

ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_create(
    ezsignsignature_response_compound_v3_t *obj_ezsignsignature
);

void ezsignsignature_get_object_v3_response_m_payload_free(ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload);

ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_object_v3_response_m_payloadJSON);

cJSON *ezsignsignature_get_object_v3_response_m_payload_convertToJSON(ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload);

#endif /* _ezsignsignature_get_object_v3_response_m_payload_H_ */


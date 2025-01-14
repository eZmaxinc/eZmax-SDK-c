/*
 * signature_get_object_v3_response_m_payload.h
 *
 * Payload for GET /3/object/signature/{pkiSignatureID}
 */

#ifndef _signature_get_object_v3_response_m_payload_H_
#define _signature_get_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_get_object_v3_response_m_payload_t signature_get_object_v3_response_m_payload_t;

#include "signature_response_compound_v3.h"



typedef struct signature_get_object_v3_response_m_payload_t {
    struct signature_response_compound_v3_t *obj_signature; //model

} signature_get_object_v3_response_m_payload_t;

signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload_create(
    signature_response_compound_v3_t *obj_signature
);

void signature_get_object_v3_response_m_payload_free(signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload);

signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload_parseFromJSON(cJSON *signature_get_object_v3_response_m_payloadJSON);

cJSON *signature_get_object_v3_response_m_payload_convertToJSON(signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload);

#endif /* _signature_get_object_v3_response_m_payload_H_ */


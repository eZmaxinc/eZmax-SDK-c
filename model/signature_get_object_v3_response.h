/*
 * signature_get_object_v3_response.h
 *
 * Response for GET /3/object/signature/{pkiSignatureID}
 */

#ifndef _signature_get_object_v3_response_H_
#define _signature_get_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_get_object_v3_response_t signature_get_object_v3_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "signature_get_object_v3_response_m_payload.h"



typedef struct signature_get_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct signature_get_object_v3_response_m_payload_t *m_payload; //model

} signature_get_object_v3_response_t;

signature_get_object_v3_response_t *signature_get_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    signature_get_object_v3_response_m_payload_t *m_payload
);

void signature_get_object_v3_response_free(signature_get_object_v3_response_t *signature_get_object_v3_response);

signature_get_object_v3_response_t *signature_get_object_v3_response_parseFromJSON(cJSON *signature_get_object_v3_responseJSON);

cJSON *signature_get_object_v3_response_convertToJSON(signature_get_object_v3_response_t *signature_get_object_v3_response);

#endif /* _signature_get_object_v3_response_H_ */


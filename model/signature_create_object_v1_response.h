/*
 * signature_create_object_v1_response.h
 *
 * Response for POST /1/object/signature
 */

#ifndef _signature_create_object_v1_response_H_
#define _signature_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_create_object_v1_response_t signature_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "signature_create_object_v1_response_m_payload.h"



typedef struct signature_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct signature_create_object_v1_response_m_payload_t *m_payload; //model

} signature_create_object_v1_response_t;

signature_create_object_v1_response_t *signature_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    signature_create_object_v1_response_m_payload_t *m_payload
);

void signature_create_object_v1_response_free(signature_create_object_v1_response_t *signature_create_object_v1_response);

signature_create_object_v1_response_t *signature_create_object_v1_response_parseFromJSON(cJSON *signature_create_object_v1_responseJSON);

cJSON *signature_create_object_v1_response_convertToJSON(signature_create_object_v1_response_t *signature_create_object_v1_response);

#endif /* _signature_create_object_v1_response_H_ */


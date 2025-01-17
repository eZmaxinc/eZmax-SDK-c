/*
 * signature_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/signature/{pkiSignatureID}
 */

#ifndef _signature_delete_object_v1_response_H_
#define _signature_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_delete_object_v1_response_t signature_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct signature_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} signature_delete_object_v1_response_t;

signature_delete_object_v1_response_t *signature_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void signature_delete_object_v1_response_free(signature_delete_object_v1_response_t *signature_delete_object_v1_response);

signature_delete_object_v1_response_t *signature_delete_object_v1_response_parseFromJSON(cJSON *signature_delete_object_v1_responseJSON);

cJSON *signature_delete_object_v1_response_convertToJSON(signature_delete_object_v1_response_t *signature_delete_object_v1_response);

#endif /* _signature_delete_object_v1_response_H_ */


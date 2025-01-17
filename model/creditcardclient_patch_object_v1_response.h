/*
 * creditcardclient_patch_object_v1_response.h
 *
 * Response for PATCH /1/object/creditcardclient/{pkiCreditcardclientID}
 */

#ifndef _creditcardclient_patch_object_v1_response_H_
#define _creditcardclient_patch_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_patch_object_v1_response_t creditcardclient_patch_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct creditcardclient_patch_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} creditcardclient_patch_object_v1_response_t;

creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void creditcardclient_patch_object_v1_response_free(creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response);

creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response_parseFromJSON(cJSON *creditcardclient_patch_object_v1_responseJSON);

cJSON *creditcardclient_patch_object_v1_response_convertToJSON(creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response);

#endif /* _creditcardclient_patch_object_v1_response_H_ */


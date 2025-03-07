/*
 * ezmaxcase_patch_object_v1_response.h
 *
 * Response for PATCH /1/object/creditcardclient/{pkiCreditcardclientID}
 */

#ifndef _ezmaxcase_patch_object_v1_response_H_
#define _ezmaxcase_patch_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcase_patch_object_v1_response_t ezmaxcase_patch_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezmaxcase_patch_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcase_patch_object_v1_response_t;

__attribute__((deprecated)) ezmaxcase_patch_object_v1_response_t *ezmaxcase_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezmaxcase_patch_object_v1_response_free(ezmaxcase_patch_object_v1_response_t *ezmaxcase_patch_object_v1_response);

ezmaxcase_patch_object_v1_response_t *ezmaxcase_patch_object_v1_response_parseFromJSON(cJSON *ezmaxcase_patch_object_v1_responseJSON);

cJSON *ezmaxcase_patch_object_v1_response_convertToJSON(ezmaxcase_patch_object_v1_response_t *ezmaxcase_patch_object_v1_response);

#endif /* _ezmaxcase_patch_object_v1_response_H_ */


/*
 * ezmaxcustomeruser_patch_object_v1_response.h
 *
 * Request for PATCH /1/object/ezmaxcustomeruser/{pkiEzmaxcustomeruserID}
 */

#ifndef _ezmaxcustomeruser_patch_object_v1_response_H_
#define _ezmaxcustomeruser_patch_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcustomeruser_patch_object_v1_response_t ezmaxcustomeruser_patch_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezmaxcustomeruser_patch_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcustomeruser_patch_object_v1_response_t;

__attribute__((deprecated)) ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezmaxcustomeruser_patch_object_v1_response_free(ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response);

ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_parseFromJSON(cJSON *ezmaxcustomeruser_patch_object_v1_responseJSON);

cJSON *ezmaxcustomeruser_patch_object_v1_response_convertToJSON(ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response);

#endif /* _ezmaxcustomeruser_patch_object_v1_response_H_ */


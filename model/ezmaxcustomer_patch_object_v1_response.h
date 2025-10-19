/*
 * ezmaxcustomer_patch_object_v1_response.h
 *
 * Request for PATCH /1/object/ezmaxcustomer/{pkiEzmaxcustomerID}
 */

#ifndef _ezmaxcustomer_patch_object_v1_response_H_
#define _ezmaxcustomer_patch_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcustomer_patch_object_v1_response_t ezmaxcustomer_patch_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezmaxcustomer_patch_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcustomer_patch_object_v1_response_t;

__attribute__((deprecated)) ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezmaxcustomer_patch_object_v1_response_free(ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response);

ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_parseFromJSON(cJSON *ezmaxcustomer_patch_object_v1_responseJSON);

cJSON *ezmaxcustomer_patch_object_v1_response_convertToJSON(ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response);

#endif /* _ezmaxcustomer_patch_object_v1_response_H_ */


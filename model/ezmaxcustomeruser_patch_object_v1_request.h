/*
 * ezmaxcustomeruser_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/ezmaxcustomeruser/{pkiEzmaxcustomeruserID}
 */

#ifndef _ezmaxcustomeruser_patch_object_v1_request_H_
#define _ezmaxcustomeruser_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcustomeruser_patch_object_v1_request_t ezmaxcustomeruser_patch_object_v1_request_t;

#include "ezmaxcustomeruser_request_patch.h"



typedef struct ezmaxcustomeruser_patch_object_v1_request_t {
    struct ezmaxcustomeruser_request_patch_t *obj_ezmaxcustomeruser; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcustomeruser_patch_object_v1_request_t;

__attribute__((deprecated)) ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_create(
    ezmaxcustomeruser_request_patch_t *obj_ezmaxcustomeruser
);

void ezmaxcustomeruser_patch_object_v1_request_free(ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request);

ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_parseFromJSON(cJSON *ezmaxcustomeruser_patch_object_v1_requestJSON);

cJSON *ezmaxcustomeruser_patch_object_v1_request_convertToJSON(ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request);

#endif /* _ezmaxcustomeruser_patch_object_v1_request_H_ */


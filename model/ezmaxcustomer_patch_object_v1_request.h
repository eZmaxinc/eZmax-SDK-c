/*
 * ezmaxcustomer_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/ezmaxcustomer/{pkiEzmaxcustomerID}
 */

#ifndef _ezmaxcustomer_patch_object_v1_request_H_
#define _ezmaxcustomer_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcustomer_patch_object_v1_request_t ezmaxcustomer_patch_object_v1_request_t;

#include "ezmaxcustomer_request_patch.h"



typedef struct ezmaxcustomer_patch_object_v1_request_t {
    struct ezmaxcustomer_request_patch_t *obj_ezmaxcustomer; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcustomer_patch_object_v1_request_t;

__attribute__((deprecated)) ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_create(
    ezmaxcustomer_request_patch_t *obj_ezmaxcustomer
);

void ezmaxcustomer_patch_object_v1_request_free(ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request);

ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_parseFromJSON(cJSON *ezmaxcustomer_patch_object_v1_requestJSON);

cJSON *ezmaxcustomer_patch_object_v1_request_convertToJSON(ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request);

#endif /* _ezmaxcustomer_patch_object_v1_request_H_ */


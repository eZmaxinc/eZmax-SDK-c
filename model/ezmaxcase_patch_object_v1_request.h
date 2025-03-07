/*
 * ezmaxcase_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/ezmaxcase/{pkiEzmaxcaseID}
 */

#ifndef _ezmaxcase_patch_object_v1_request_H_
#define _ezmaxcase_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxcase_patch_object_v1_request_t ezmaxcase_patch_object_v1_request_t;

#include "ezmaxcase_request_patch.h"



typedef struct ezmaxcase_patch_object_v1_request_t {
    struct ezmaxcase_request_patch_t *obj_ezmaxcase; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxcase_patch_object_v1_request_t;

__attribute__((deprecated)) ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_create(
    ezmaxcase_request_patch_t *obj_ezmaxcase
);

void ezmaxcase_patch_object_v1_request_free(ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request);

ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_parseFromJSON(cJSON *ezmaxcase_patch_object_v1_requestJSON);

cJSON *ezmaxcase_patch_object_v1_request_convertToJSON(ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request);

#endif /* _ezmaxcase_patch_object_v1_request_H_ */


/*
 * ezsignformfieldgroup_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignformfieldgroup
 */

#ifndef _ezsignformfieldgroup_create_object_v1_request_H_
#define _ezsignformfieldgroup_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_create_object_v1_request_t ezsignformfieldgroup_create_object_v1_request_t;

#include "ezsignformfieldgroup_request_compound.h"



typedef struct ezsignformfieldgroup_create_object_v1_request_t {
    list_t *a_obj_ezsignformfieldgroup; //nonprimitive container

} ezsignformfieldgroup_create_object_v1_request_t;

ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup
);

void ezsignformfieldgroup_create_object_v1_request_free(ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request);

ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_requestJSON);

cJSON *ezsignformfieldgroup_create_object_v1_request_convertToJSON(ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request);

#endif /* _ezsignformfieldgroup_create_object_v1_request_H_ */


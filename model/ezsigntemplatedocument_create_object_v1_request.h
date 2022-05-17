/*
 * ezsigntemplatedocument_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatedocument
 */

#ifndef _ezsigntemplatedocument_create_object_v1_request_H_
#define _ezsigntemplatedocument_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_create_object_v1_request_t ezsigntemplatedocument_create_object_v1_request_t;

#include "ezsigntemplatedocument_request_compound.h"



typedef struct ezsigntemplatedocument_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatedocument; //nonprimitive container

} ezsigntemplatedocument_create_object_v1_request_t;

ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatedocument
);

void ezsigntemplatedocument_create_object_v1_request_free(ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request);

ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_create_object_v1_requestJSON);

cJSON *ezsigntemplatedocument_create_object_v1_request_convertToJSON(ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request);

#endif /* _ezsigntemplatedocument_create_object_v1_request_H_ */


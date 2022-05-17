/*
 * ezsigntemplatepackagemembership_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatepackagemembership
 */

#ifndef _ezsigntemplatepackagemembership_create_object_v1_request_H_
#define _ezsigntemplatepackagemembership_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_create_object_v1_request_t ezsigntemplatepackagemembership_create_object_v1_request_t;

#include "ezsigntemplatepackagemembership_request_compound.h"



typedef struct ezsigntemplatepackagemembership_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatepackagemembership; //nonprimitive container

} ezsigntemplatepackagemembership_create_object_v1_request_t;

ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackagemembership
);

void ezsigntemplatepackagemembership_create_object_v1_request_free(ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request);

ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagemembership_create_object_v1_requestJSON);

cJSON *ezsigntemplatepackagemembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request);

#endif /* _ezsigntemplatepackagemembership_create_object_v1_request_H_ */


/*
 * ezsigntemplatepackage_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatepackage
 */

#ifndef _ezsigntemplatepackage_create_object_v1_request_H_
#define _ezsigntemplatepackage_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_create_object_v1_request_t ezsigntemplatepackage_create_object_v1_request_t;

#include "ezsigntemplatepackage_request_compound.h"



typedef struct ezsigntemplatepackage_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatepackage; //nonprimitive container

} ezsigntemplatepackage_create_object_v1_request_t;

ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackage
);

void ezsigntemplatepackage_create_object_v1_request_free(ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request);

ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackage_create_object_v1_requestJSON);

cJSON *ezsigntemplatepackage_create_object_v1_request_convertToJSON(ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request);

#endif /* _ezsigntemplatepackage_create_object_v1_request_H_ */


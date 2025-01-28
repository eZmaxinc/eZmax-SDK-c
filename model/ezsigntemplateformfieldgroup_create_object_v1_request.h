/*
 * ezsigntemplateformfieldgroup_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplateformfieldgroup
 */

#ifndef _ezsigntemplateformfieldgroup_create_object_v1_request_H_
#define _ezsigntemplateformfieldgroup_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_create_object_v1_request_t ezsigntemplateformfieldgroup_create_object_v1_request_t;

#include "ezsigntemplateformfieldgroup_request_compound.h"



typedef struct ezsigntemplateformfieldgroup_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplateformfieldgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroup_create_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplateformfieldgroup
);

void ezsigntemplateformfieldgroup_create_object_v1_request_free(ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request);

ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_create_object_v1_requestJSON);

cJSON *ezsigntemplateformfieldgroup_create_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request);

#endif /* _ezsigntemplateformfieldgroup_create_object_v1_request_H_ */


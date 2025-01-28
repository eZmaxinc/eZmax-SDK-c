/*
 * ezsigntemplateformfieldgroup_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}
 */

#ifndef _ezsigntemplateformfieldgroup_edit_object_v1_request_H_
#define _ezsigntemplateformfieldgroup_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_edit_object_v1_request_t ezsigntemplateformfieldgroup_edit_object_v1_request_t;

#include "ezsigntemplateformfieldgroup_request_compound.h"



typedef struct ezsigntemplateformfieldgroup_edit_object_v1_request_t {
    struct ezsigntemplateformfieldgroup_request_compound_t *obj_ezsigntemplateformfieldgroup; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroup_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_create(
    ezsigntemplateformfieldgroup_request_compound_t *obj_ezsigntemplateformfieldgroup
);

void ezsigntemplateformfieldgroup_edit_object_v1_request_free(ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request);

ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_edit_object_v1_requestJSON);

cJSON *ezsigntemplateformfieldgroup_edit_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request);

#endif /* _ezsigntemplateformfieldgroup_edit_object_v1_request_H_ */


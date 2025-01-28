/*
 * ezsigntemplatesigner_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef _ezsigntemplatesigner_edit_object_v1_request_H_
#define _ezsigntemplatesigner_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_edit_object_v1_request_t ezsigntemplatesigner_edit_object_v1_request_t;

#include "ezsigntemplatesigner_request_compound.h"



typedef struct ezsigntemplatesigner_edit_object_v1_request_t {
    struct ezsigntemplatesigner_request_compound_t *obj_ezsigntemplatesigner; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_create(
    ezsigntemplatesigner_request_compound_t *obj_ezsigntemplatesigner
);

void ezsigntemplatesigner_edit_object_v1_request_free(ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request);

ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatesigner_edit_object_v1_requestJSON);

cJSON *ezsigntemplatesigner_edit_object_v1_request_convertToJSON(ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request);

#endif /* _ezsigntemplatesigner_edit_object_v1_request_H_ */


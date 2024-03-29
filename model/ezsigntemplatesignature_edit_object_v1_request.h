/*
 * ezsigntemplatesignature_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef _ezsigntemplatesignature_edit_object_v1_request_H_
#define _ezsigntemplatesignature_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_edit_object_v1_request_t ezsigntemplatesignature_edit_object_v1_request_t;

#include "ezsigntemplatesignature_request_compound.h"



typedef struct ezsigntemplatesignature_edit_object_v1_request_t {
    struct ezsigntemplatesignature_request_compound_t *obj_ezsigntemplatesignature; //model

} ezsigntemplatesignature_edit_object_v1_request_t;

ezsigntemplatesignature_edit_object_v1_request_t *ezsigntemplatesignature_edit_object_v1_request_create(
    ezsigntemplatesignature_request_compound_t *obj_ezsigntemplatesignature
);

void ezsigntemplatesignature_edit_object_v1_request_free(ezsigntemplatesignature_edit_object_v1_request_t *ezsigntemplatesignature_edit_object_v1_request);

ezsigntemplatesignature_edit_object_v1_request_t *ezsigntemplatesignature_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatesignature_edit_object_v1_requestJSON);

cJSON *ezsigntemplatesignature_edit_object_v1_request_convertToJSON(ezsigntemplatesignature_edit_object_v1_request_t *ezsigntemplatesignature_edit_object_v1_request);

#endif /* _ezsigntemplatesignature_edit_object_v1_request_H_ */


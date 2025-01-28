/*
 * ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatesignatures
 */

#ifndef _ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_H_
#define _ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t;

#include "ezsigntemplatesignature_request_compound.h"



typedef struct ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t {
    list_t *a_obj_ezsigntemplatesignature; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t;

__attribute__((deprecated)) ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_create(
    list_t *a_obj_ezsigntemplatesignature
);

void ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_free(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);

ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_requestJSON);

cJSON *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);

#endif /* _ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_H_ */


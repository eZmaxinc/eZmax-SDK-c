/*
 * ezsignsignature_edit_object_v2_request.h
 *
 * Request for PUT /2/object/ezsignsignature/{pkiEzsignsignatureID}
 */

#ifndef _ezsignsignature_edit_object_v2_request_H_
#define _ezsignsignature_edit_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_edit_object_v2_request_t ezsignsignature_edit_object_v2_request_t;

#include "ezsignsignature_request_compound_v2.h"



typedef struct ezsignsignature_edit_object_v2_request_t {
    struct ezsignsignature_request_compound_v2_t *obj_ezsignsignature; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignature_edit_object_v2_request_t;

__attribute__((deprecated)) ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_create(
    ezsignsignature_request_compound_v2_t *obj_ezsignsignature
);

void ezsignsignature_edit_object_v2_request_free(ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request);

ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_parseFromJSON(cJSON *ezsignsignature_edit_object_v2_requestJSON);

cJSON *ezsignsignature_edit_object_v2_request_convertToJSON(ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request);

#endif /* _ezsignsignature_edit_object_v2_request_H_ */


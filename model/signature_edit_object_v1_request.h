/*
 * signature_edit_object_v1_request.h
 *
 * Request for PUT /1/object/signature/{pkiSignatureID}
 */

#ifndef _signature_edit_object_v1_request_H_
#define _signature_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_edit_object_v1_request_t signature_edit_object_v1_request_t;

#include "signature_request_compound.h"



typedef struct signature_edit_object_v1_request_t {
    struct signature_request_compound_t *obj_signature; //model

    int _library_owned; // Is the library responsible for freeing this object?
} signature_edit_object_v1_request_t;

__attribute__((deprecated)) signature_edit_object_v1_request_t *signature_edit_object_v1_request_create(
    signature_request_compound_t *obj_signature
);

void signature_edit_object_v1_request_free(signature_edit_object_v1_request_t *signature_edit_object_v1_request);

signature_edit_object_v1_request_t *signature_edit_object_v1_request_parseFromJSON(cJSON *signature_edit_object_v1_requestJSON);

cJSON *signature_edit_object_v1_request_convertToJSON(signature_edit_object_v1_request_t *signature_edit_object_v1_request);

#endif /* _signature_edit_object_v1_request_H_ */


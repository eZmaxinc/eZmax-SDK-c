/*
 * ezsignannotation_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignannotation/{pkiEzsignannotationID}
 */

#ifndef _ezsignannotation_edit_object_v1_request_H_
#define _ezsignannotation_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_edit_object_v1_request_t ezsignannotation_edit_object_v1_request_t;

#include "ezsignannotation_request_compound.h"



typedef struct ezsignannotation_edit_object_v1_request_t {
    struct ezsignannotation_request_compound_t *obj_ezsignannotation; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignannotation_edit_object_v1_request_t;

__attribute__((deprecated)) ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request_create(
    ezsignannotation_request_compound_t *obj_ezsignannotation
);

void ezsignannotation_edit_object_v1_request_free(ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request);

ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request_parseFromJSON(cJSON *ezsignannotation_edit_object_v1_requestJSON);

cJSON *ezsignannotation_edit_object_v1_request_convertToJSON(ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request);

#endif /* _ezsignannotation_edit_object_v1_request_H_ */


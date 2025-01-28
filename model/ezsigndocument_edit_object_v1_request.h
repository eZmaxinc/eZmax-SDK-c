/*
 * ezsigndocument_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}
 */

#ifndef _ezsigndocument_edit_object_v1_request_H_
#define _ezsigndocument_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_edit_object_v1_request_t ezsigndocument_edit_object_v1_request_t;

#include "ezsigndocument_request_compound.h"



typedef struct ezsigndocument_edit_object_v1_request_t {
    struct ezsigndocument_request_compound_t *obj_ezsigndocument; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_create(
    ezsigndocument_request_compound_t *obj_ezsigndocument
);

void ezsigndocument_edit_object_v1_request_free(ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request);

ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_object_v1_requestJSON);

cJSON *ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request);

#endif /* _ezsigndocument_edit_object_v1_request_H_ */


/*
 * ezsignuser_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignuser/{pkiEzsignuserID}
 */

#ifndef _ezsignuser_edit_object_v1_request_H_
#define _ezsignuser_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_edit_object_v1_request_t ezsignuser_edit_object_v1_request_t;

#include "ezsignuser_request_compound.h"



typedef struct ezsignuser_edit_object_v1_request_t {
    struct ezsignuser_request_compound_t *obj_ezsignuser; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignuser_edit_object_v1_request_t;

__attribute__((deprecated)) ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request_create(
    ezsignuser_request_compound_t *obj_ezsignuser
);

void ezsignuser_edit_object_v1_request_free(ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request);

ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request_parseFromJSON(cJSON *ezsignuser_edit_object_v1_requestJSON);

cJSON *ezsignuser_edit_object_v1_request_convertToJSON(ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request);

#endif /* _ezsignuser_edit_object_v1_request_H_ */


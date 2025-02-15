/*
 * ezsignfoldertype_edit_object_v3_request.h
 *
 * Request for PUT /3/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef _ezsignfoldertype_edit_object_v3_request_H_
#define _ezsignfoldertype_edit_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_edit_object_v3_request_t ezsignfoldertype_edit_object_v3_request_t;

#include "ezsignfoldertype_request_compound_v3.h"



typedef struct ezsignfoldertype_edit_object_v3_request_t {
    struct ezsignfoldertype_request_compound_v3_t *obj_ezsignfoldertype; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_edit_object_v3_request_t;

__attribute__((deprecated)) ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_create(
    ezsignfoldertype_request_compound_v3_t *obj_ezsignfoldertype
);

void ezsignfoldertype_edit_object_v3_request_free(ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request);

ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_parseFromJSON(cJSON *ezsignfoldertype_edit_object_v3_requestJSON);

cJSON *ezsignfoldertype_edit_object_v3_request_convertToJSON(ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request);

#endif /* _ezsignfoldertype_edit_object_v3_request_H_ */


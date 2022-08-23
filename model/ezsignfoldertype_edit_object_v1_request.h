/*
 * ezsignfoldertype_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef _ezsignfoldertype_edit_object_v1_request_H_
#define _ezsignfoldertype_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_edit_object_v1_request_t ezsignfoldertype_edit_object_v1_request_t;

#include "ezsignfoldertype_request_compound.h"



typedef struct ezsignfoldertype_edit_object_v1_request_t {
    struct ezsignfoldertype_request_compound_t *obj_ezsignfoldertype; //model

} ezsignfoldertype_edit_object_v1_request_t;

ezsignfoldertype_edit_object_v1_request_t *ezsignfoldertype_edit_object_v1_request_create(
    ezsignfoldertype_request_compound_t *obj_ezsignfoldertype
);

void ezsignfoldertype_edit_object_v1_request_free(ezsignfoldertype_edit_object_v1_request_t *ezsignfoldertype_edit_object_v1_request);

ezsignfoldertype_edit_object_v1_request_t *ezsignfoldertype_edit_object_v1_request_parseFromJSON(cJSON *ezsignfoldertype_edit_object_v1_requestJSON);

cJSON *ezsignfoldertype_edit_object_v1_request_convertToJSON(ezsignfoldertype_edit_object_v1_request_t *ezsignfoldertype_edit_object_v1_request);

#endif /* _ezsignfoldertype_edit_object_v1_request_H_ */


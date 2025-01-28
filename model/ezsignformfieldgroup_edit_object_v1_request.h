/*
 * ezsignformfieldgroup_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignformfieldgroup/{pkiEzsignfoldersignerassociationID}
 */

#ifndef _ezsignformfieldgroup_edit_object_v1_request_H_
#define _ezsignformfieldgroup_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_edit_object_v1_request_t ezsignformfieldgroup_edit_object_v1_request_t;

#include "ezsignformfieldgroup_request_compound.h"



typedef struct ezsignformfieldgroup_edit_object_v1_request_t {
    struct ezsignformfieldgroup_request_compound_t *obj_ezsignformfieldgroup; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfieldgroup_edit_object_v1_request_t;

__attribute__((deprecated)) ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_create(
    ezsignformfieldgroup_request_compound_t *obj_ezsignformfieldgroup
);

void ezsignformfieldgroup_edit_object_v1_request_free(ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request);

ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_parseFromJSON(cJSON *ezsignformfieldgroup_edit_object_v1_requestJSON);

cJSON *ezsignformfieldgroup_edit_object_v1_request_convertToJSON(ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request);

#endif /* _ezsignformfieldgroup_edit_object_v1_request_H_ */


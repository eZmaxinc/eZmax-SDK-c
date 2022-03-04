/*
 * ezsigndocument_edit_ezsignformfieldgroups_v1_request.h
 *
 * Request for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignformfieldgroups API Request
 */

#ifndef _ezsigndocument_edit_ezsignformfieldgroups_v1_request_H_
#define _ezsigndocument_edit_ezsignformfieldgroups_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_edit_ezsignformfieldgroups_v1_request_t ezsigndocument_edit_ezsignformfieldgroups_v1_request_t;

#include "ezsignformfieldgroup_request_compound.h"



typedef struct ezsigndocument_edit_ezsignformfieldgroups_v1_request_t {
    list_t *a_obj_ezsignformfieldgroup; //nonprimitive container

} ezsigndocument_edit_ezsignformfieldgroups_v1_request_t;

ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup
);

void ezsigndocument_edit_ezsignformfieldgroups_v1_request_free(ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request);

ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_requestJSON);

cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_request_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request);

#endif /* _ezsigndocument_edit_ezsignformfieldgroups_v1_request_H_ */


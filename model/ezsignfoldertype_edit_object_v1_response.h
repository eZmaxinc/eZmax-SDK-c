/*
 * ezsignfoldertype_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef _ezsignfoldertype_edit_object_v1_response_H_
#define _ezsignfoldertype_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_edit_object_v1_response_t ezsignfoldertype_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfoldertype_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfoldertype_edit_object_v1_response_t;

ezsignfoldertype_edit_object_v1_response_t *ezsignfoldertype_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfoldertype_edit_object_v1_response_free(ezsignfoldertype_edit_object_v1_response_t *ezsignfoldertype_edit_object_v1_response);

ezsignfoldertype_edit_object_v1_response_t *ezsignfoldertype_edit_object_v1_response_parseFromJSON(cJSON *ezsignfoldertype_edit_object_v1_responseJSON);

cJSON *ezsignfoldertype_edit_object_v1_response_convertToJSON(ezsignfoldertype_edit_object_v1_response_t *ezsignfoldertype_edit_object_v1_response);

#endif /* _ezsignfoldertype_edit_object_v1_response_H_ */


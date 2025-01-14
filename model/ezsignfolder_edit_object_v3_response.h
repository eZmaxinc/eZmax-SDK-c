/*
 * ezsignfolder_edit_object_v3_response.h
 *
 * Response for PUT /3/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef _ezsignfolder_edit_object_v3_response_H_
#define _ezsignfolder_edit_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_edit_object_v3_response_t ezsignfolder_edit_object_v3_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfolder_edit_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfolder_edit_object_v3_response_t;

ezsignfolder_edit_object_v3_response_t *ezsignfolder_edit_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfolder_edit_object_v3_response_free(ezsignfolder_edit_object_v3_response_t *ezsignfolder_edit_object_v3_response);

ezsignfolder_edit_object_v3_response_t *ezsignfolder_edit_object_v3_response_parseFromJSON(cJSON *ezsignfolder_edit_object_v3_responseJSON);

cJSON *ezsignfolder_edit_object_v3_response_convertToJSON(ezsignfolder_edit_object_v3_response_t *ezsignfolder_edit_object_v3_response);

#endif /* _ezsignfolder_edit_object_v3_response_H_ */


/*
 * ezsigntemplate_edit_object_v3_response.h
 *
 * Response for PUT /3/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_edit_object_v3_response_H_
#define _ezsigntemplate_edit_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_edit_object_v3_response_t ezsigntemplate_edit_object_v3_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplate_edit_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplate_edit_object_v3_response_t;

ezsigntemplate_edit_object_v3_response_t *ezsigntemplate_edit_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplate_edit_object_v3_response_free(ezsigntemplate_edit_object_v3_response_t *ezsigntemplate_edit_object_v3_response);

ezsigntemplate_edit_object_v3_response_t *ezsigntemplate_edit_object_v3_response_parseFromJSON(cJSON *ezsigntemplate_edit_object_v3_responseJSON);

cJSON *ezsigntemplate_edit_object_v3_response_convertToJSON(ezsigntemplate_edit_object_v3_response_t *ezsigntemplate_edit_object_v3_response);

#endif /* _ezsigntemplate_edit_object_v3_response_H_ */


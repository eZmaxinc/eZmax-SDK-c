/*
 * ezsigntemplatesigner_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef _ezsigntemplatesigner_edit_object_v1_response_H_
#define _ezsigntemplatesigner_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_edit_object_v1_response_t ezsigntemplatesigner_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatesigner_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatesigner_edit_object_v1_response_t;

ezsigntemplatesigner_edit_object_v1_response_t *ezsigntemplatesigner_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatesigner_edit_object_v1_response_free(ezsigntemplatesigner_edit_object_v1_response_t *ezsigntemplatesigner_edit_object_v1_response);

ezsigntemplatesigner_edit_object_v1_response_t *ezsigntemplatesigner_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplatesigner_edit_object_v1_responseJSON);

cJSON *ezsigntemplatesigner_edit_object_v1_response_convertToJSON(ezsigntemplatesigner_edit_object_v1_response_t *ezsigntemplatesigner_edit_object_v1_response);

#endif /* _ezsigntemplatesigner_edit_object_v1_response_H_ */


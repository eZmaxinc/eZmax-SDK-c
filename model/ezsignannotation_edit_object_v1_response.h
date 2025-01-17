/*
 * ezsignannotation_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsignannotation/{pkiEzsignannotationID}
 */

#ifndef _ezsignannotation_edit_object_v1_response_H_
#define _ezsignannotation_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_edit_object_v1_response_t ezsignannotation_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignannotation_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignannotation_edit_object_v1_response_t;

ezsignannotation_edit_object_v1_response_t *ezsignannotation_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignannotation_edit_object_v1_response_free(ezsignannotation_edit_object_v1_response_t *ezsignannotation_edit_object_v1_response);

ezsignannotation_edit_object_v1_response_t *ezsignannotation_edit_object_v1_response_parseFromJSON(cJSON *ezsignannotation_edit_object_v1_responseJSON);

cJSON *ezsignannotation_edit_object_v1_response_convertToJSON(ezsignannotation_edit_object_v1_response_t *ezsignannotation_edit_object_v1_response);

#endif /* _ezsignannotation_edit_object_v1_response_H_ */


/*
 * ezsignsignature_edit_object_v1_response.h
 *
 * Response for the /1/object/ezsignsignature/editObject API Request
 */

#ifndef _ezsignsignature_edit_object_v1_response_H_
#define _ezsignsignature_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_edit_object_v1_response_t ezsignsignature_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignsignature_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignsignature_edit_object_v1_response_t;

ezsignsignature_edit_object_v1_response_t *ezsignsignature_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignature_edit_object_v1_response_free(ezsignsignature_edit_object_v1_response_t *ezsignsignature_edit_object_v1_response);

ezsignsignature_edit_object_v1_response_t *ezsignsignature_edit_object_v1_response_parseFromJSON(cJSON *ezsignsignature_edit_object_v1_responseJSON);

cJSON *ezsignsignature_edit_object_v1_response_convertToJSON(ezsignsignature_edit_object_v1_response_t *ezsignsignature_edit_object_v1_response);

#endif /* _ezsignsignature_edit_object_v1_response_H_ */


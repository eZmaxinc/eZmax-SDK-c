/*
 * unused_ezsignsignature_edit_object_v1_response.h
 *
 * Response for the /1/object/ezsignsignature/editObject API Request
 */

#ifndef _unused_ezsignsignature_edit_object_v1_response_H_
#define _unused_ezsignsignature_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unused_ezsignsignature_edit_object_v1_response_t unused_ezsignsignature_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct unused_ezsignsignature_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} unused_ezsignsignature_edit_object_v1_response_t;

unused_ezsignsignature_edit_object_v1_response_t *unused_ezsignsignature_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void unused_ezsignsignature_edit_object_v1_response_free(unused_ezsignsignature_edit_object_v1_response_t *unused_ezsignsignature_edit_object_v1_response);

unused_ezsignsignature_edit_object_v1_response_t *unused_ezsignsignature_edit_object_v1_response_parseFromJSON(cJSON *unused_ezsignsignature_edit_object_v1_responseJSON);

cJSON *unused_ezsignsignature_edit_object_v1_response_convertToJSON(unused_ezsignsignature_edit_object_v1_response_t *unused_ezsignsignature_edit_object_v1_response);

#endif /* _unused_ezsignsignature_edit_object_v1_response_H_ */


/*
 * branding_edit_object_v2_response.h
 *
 * Response for PUT /2/object/branding/{pkiBrandingID}
 */

#ifndef _branding_edit_object_v2_response_H_
#define _branding_edit_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_edit_object_v2_response_t branding_edit_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct branding_edit_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} branding_edit_object_v2_response_t;

__attribute__((deprecated)) branding_edit_object_v2_response_t *branding_edit_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void branding_edit_object_v2_response_free(branding_edit_object_v2_response_t *branding_edit_object_v2_response);

branding_edit_object_v2_response_t *branding_edit_object_v2_response_parseFromJSON(cJSON *branding_edit_object_v2_responseJSON);

cJSON *branding_edit_object_v2_response_convertToJSON(branding_edit_object_v2_response_t *branding_edit_object_v2_response);

#endif /* _branding_edit_object_v2_response_H_ */


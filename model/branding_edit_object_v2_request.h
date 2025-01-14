/*
 * branding_edit_object_v2_request.h
 *
 * Request for PUT /2/object/branding/{pkiBrandingID}
 */

#ifndef _branding_edit_object_v2_request_H_
#define _branding_edit_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_edit_object_v2_request_t branding_edit_object_v2_request_t;

#include "branding_request_compound_v2.h"



typedef struct branding_edit_object_v2_request_t {
    struct branding_request_compound_v2_t *obj_branding; //model

} branding_edit_object_v2_request_t;

branding_edit_object_v2_request_t *branding_edit_object_v2_request_create(
    branding_request_compound_v2_t *obj_branding
);

void branding_edit_object_v2_request_free(branding_edit_object_v2_request_t *branding_edit_object_v2_request);

branding_edit_object_v2_request_t *branding_edit_object_v2_request_parseFromJSON(cJSON *branding_edit_object_v2_requestJSON);

cJSON *branding_edit_object_v2_request_convertToJSON(branding_edit_object_v2_request_t *branding_edit_object_v2_request);

#endif /* _branding_edit_object_v2_request_H_ */


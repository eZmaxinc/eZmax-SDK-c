/*
 * branding_edit_object_v1_request.h
 *
 * Request for PUT /1/object/branding/{pkiBrandingID}
 */

#ifndef _branding_edit_object_v1_request_H_
#define _branding_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_edit_object_v1_request_t branding_edit_object_v1_request_t;

#include "branding_request_compound.h"



typedef struct branding_edit_object_v1_request_t {
    struct branding_request_compound_t *obj_branding; //model

} branding_edit_object_v1_request_t;

branding_edit_object_v1_request_t *branding_edit_object_v1_request_create(
    branding_request_compound_t *obj_branding
);

void branding_edit_object_v1_request_free(branding_edit_object_v1_request_t *branding_edit_object_v1_request);

branding_edit_object_v1_request_t *branding_edit_object_v1_request_parseFromJSON(cJSON *branding_edit_object_v1_requestJSON);

cJSON *branding_edit_object_v1_request_convertToJSON(branding_edit_object_v1_request_t *branding_edit_object_v1_request);

#endif /* _branding_edit_object_v1_request_H_ */


/*
 * unused_ezsignsignature_edit_object_v1_request.h
 *
 * Request for the /1/object/ezsignsignature/editObject API Request
 */

#ifndef _unused_ezsignsignature_edit_object_v1_request_H_
#define _unused_ezsignsignature_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unused_ezsignsignature_edit_object_v1_request_t unused_ezsignsignature_edit_object_v1_request_t;

#include "ezsignsignature_request.h"



typedef struct unused_ezsignsignature_edit_object_v1_request_t {
    struct ezsignsignature_request_t *obj_ezsignsignature; //model

} unused_ezsignsignature_edit_object_v1_request_t;

unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request_create(
    ezsignsignature_request_t *obj_ezsignsignature
);

void unused_ezsignsignature_edit_object_v1_request_free(unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request);

unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsignsignature_edit_object_v1_requestJSON);

cJSON *unused_ezsignsignature_edit_object_v1_request_convertToJSON(unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request);

#endif /* _unused_ezsignsignature_edit_object_v1_request_H_ */


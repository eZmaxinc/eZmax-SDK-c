/*
 * unused_ezsigndocument_edit_object_v1_request.h
 *
 * Request for the /1/object/ezsigndocument/editObject API Request
 */

#ifndef _unused_ezsigndocument_edit_object_v1_request_H_
#define _unused_ezsigndocument_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unused_ezsigndocument_edit_object_v1_request_t unused_ezsigndocument_edit_object_v1_request_t;

#include "ezsigndocument_request.h"



typedef struct unused_ezsigndocument_edit_object_v1_request_t {
    struct ezsigndocument_request_t *obj_ezsigndocument; //model

} unused_ezsigndocument_edit_object_v1_request_t;

unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request_create(
    ezsigndocument_request_t *obj_ezsigndocument
);

void unused_ezsigndocument_edit_object_v1_request_free(unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request);

unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsigndocument_edit_object_v1_requestJSON);

cJSON *unused_ezsigndocument_edit_object_v1_request_convertToJSON(unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request);

#endif /* _unused_ezsigndocument_edit_object_v1_request_H_ */


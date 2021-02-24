/*
 * unused_ezsignfolder_edit_object_v1_request.h
 *
 * Request for the /1/object/ezsignfolder/editObject API Request
 */

#ifndef _unused_ezsignfolder_edit_object_v1_request_H_
#define _unused_ezsignfolder_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unused_ezsignfolder_edit_object_v1_request_t unused_ezsignfolder_edit_object_v1_request_t;

#include "ezsignfolder_request.h"



typedef struct unused_ezsignfolder_edit_object_v1_request_t {
    struct ezsignfolder_request_t *obj_ezsignfolder; //model

} unused_ezsignfolder_edit_object_v1_request_t;

unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request_create(
    ezsignfolder_request_t *obj_ezsignfolder
);

void unused_ezsignfolder_edit_object_v1_request_free(unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request);

unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsignfolder_edit_object_v1_requestJSON);

cJSON *unused_ezsignfolder_edit_object_v1_request_convertToJSON(unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request);

#endif /* _unused_ezsignfolder_edit_object_v1_request_H_ */


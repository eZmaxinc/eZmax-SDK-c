/*
 * ezsignfolder_delete_object_v1_response.h
 *
 * Response for the /1/object/ezsignfolder/deleteObject API Request
 */

#ifndef _ezsignfolder_delete_object_v1_response_H_
#define _ezsignfolder_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_delete_object_v1_response_t ezsignfolder_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfolder_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfolder_delete_object_v1_response_t;

ezsignfolder_delete_object_v1_response_t *ezsignfolder_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfolder_delete_object_v1_response_free(ezsignfolder_delete_object_v1_response_t *ezsignfolder_delete_object_v1_response);

ezsignfolder_delete_object_v1_response_t *ezsignfolder_delete_object_v1_response_parseFromJSON(cJSON *ezsignfolder_delete_object_v1_responseJSON);

cJSON *ezsignfolder_delete_object_v1_response_convertToJSON(ezsignfolder_delete_object_v1_response_t *ezsignfolder_delete_object_v1_response);

#endif /* _ezsignfolder_delete_object_v1_response_H_ */


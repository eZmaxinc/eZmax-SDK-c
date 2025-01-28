/*
 * ezsignsigningreason_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsignsigningreason/{pkiEzsignsigningreasonID}
 */

#ifndef _ezsignsigningreason_edit_object_v1_response_H_
#define _ezsignsigningreason_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_edit_object_v1_response_t ezsignsigningreason_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignsigningreason_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_edit_object_v1_response_t;

__attribute__((deprecated)) ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsigningreason_edit_object_v1_response_free(ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response);

ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response_parseFromJSON(cJSON *ezsignsigningreason_edit_object_v1_responseJSON);

cJSON *ezsignsigningreason_edit_object_v1_response_convertToJSON(ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response);

#endif /* _ezsignsigningreason_edit_object_v1_response_H_ */


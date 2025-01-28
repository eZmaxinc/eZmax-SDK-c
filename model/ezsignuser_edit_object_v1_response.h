/*
 * ezsignuser_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsignuser/{pkiEzsignuserID}
 */

#ifndef _ezsignuser_edit_object_v1_response_H_
#define _ezsignuser_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_edit_object_v1_response_t ezsignuser_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignuser_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignuser_edit_object_v1_response_t;

__attribute__((deprecated)) ezsignuser_edit_object_v1_response_t *ezsignuser_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignuser_edit_object_v1_response_free(ezsignuser_edit_object_v1_response_t *ezsignuser_edit_object_v1_response);

ezsignuser_edit_object_v1_response_t *ezsignuser_edit_object_v1_response_parseFromJSON(cJSON *ezsignuser_edit_object_v1_responseJSON);

cJSON *ezsignuser_edit_object_v1_response_convertToJSON(ezsignuser_edit_object_v1_response_t *ezsignuser_edit_object_v1_response);

#endif /* _ezsignuser_edit_object_v1_response_H_ */


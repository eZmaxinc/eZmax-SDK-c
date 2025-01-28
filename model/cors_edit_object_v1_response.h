/*
 * cors_edit_object_v1_response.h
 *
 * Response for PUT /1/object/cors/{pkiCorsID}
 */

#ifndef _cors_edit_object_v1_response_H_
#define _cors_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_edit_object_v1_response_t cors_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct cors_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} cors_edit_object_v1_response_t;

__attribute__((deprecated)) cors_edit_object_v1_response_t *cors_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void cors_edit_object_v1_response_free(cors_edit_object_v1_response_t *cors_edit_object_v1_response);

cors_edit_object_v1_response_t *cors_edit_object_v1_response_parseFromJSON(cJSON *cors_edit_object_v1_responseJSON);

cJSON *cors_edit_object_v1_response_convertToJSON(cors_edit_object_v1_response_t *cors_edit_object_v1_response);

#endif /* _cors_edit_object_v1_response_H_ */


/*
 * cors_edit_object_v1_request.h
 *
 * Request for PUT /1/object/cors/{pkiCorsID}
 */

#ifndef _cors_edit_object_v1_request_H_
#define _cors_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_edit_object_v1_request_t cors_edit_object_v1_request_t;

#include "cors_request_compound.h"



typedef struct cors_edit_object_v1_request_t {
    struct cors_request_compound_t *obj_cors; //model

    int _library_owned; // Is the library responsible for freeing this object?
} cors_edit_object_v1_request_t;

__attribute__((deprecated)) cors_edit_object_v1_request_t *cors_edit_object_v1_request_create(
    cors_request_compound_t *obj_cors
);

void cors_edit_object_v1_request_free(cors_edit_object_v1_request_t *cors_edit_object_v1_request);

cors_edit_object_v1_request_t *cors_edit_object_v1_request_parseFromJSON(cJSON *cors_edit_object_v1_requestJSON);

cJSON *cors_edit_object_v1_request_convertToJSON(cors_edit_object_v1_request_t *cors_edit_object_v1_request);

#endif /* _cors_edit_object_v1_request_H_ */


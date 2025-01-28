/*
 * common_response.h
 *
 * All API response will inherit this based Response
 */

#ifndef _common_response_H_
#define _common_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_t common_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct common_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_t;

__attribute__((deprecated)) common_response_t *common_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void common_response_free(common_response_t *common_response);

common_response_t *common_response_parseFromJSON(cJSON *common_responseJSON);

cJSON *common_response_convertToJSON(common_response_t *common_response);

#endif /* _common_response_H_ */


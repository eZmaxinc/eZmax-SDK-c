/*
 * common_response_get_list.h
 *
 * All API response will inherit this based Response
 */

#ifndef _common_response_get_list_H_
#define _common_response_get_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_get_list_t common_response_get_list_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"



typedef struct common_response_get_list_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_get_list_t;

__attribute__((deprecated)) common_response_get_list_t *common_response_get_list_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void common_response_get_list_free(common_response_get_list_t *common_response_get_list);

common_response_get_list_t *common_response_get_list_parseFromJSON(cJSON *common_response_get_listJSON);

cJSON *common_response_get_list_convertToJSON(common_response_get_list_t *common_response_get_list);

#endif /* _common_response_get_list_H_ */


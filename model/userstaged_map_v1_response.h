/*
 * userstaged_map_v1_response.h
 *
 * Response for POST /1/object/userstaged/{pkiUserstagedID}/map
 */

#ifndef _userstaged_map_v1_response_H_
#define _userstaged_map_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_map_v1_response_t userstaged_map_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct userstaged_map_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} userstaged_map_v1_response_t;

__attribute__((deprecated)) userstaged_map_v1_response_t *userstaged_map_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void userstaged_map_v1_response_free(userstaged_map_v1_response_t *userstaged_map_v1_response);

userstaged_map_v1_response_t *userstaged_map_v1_response_parseFromJSON(cJSON *userstaged_map_v1_responseJSON);

cJSON *userstaged_map_v1_response_convertToJSON(userstaged_map_v1_response_t *userstaged_map_v1_response);

#endif /* _userstaged_map_v1_response_H_ */


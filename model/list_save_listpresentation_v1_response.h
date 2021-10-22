/*
 * list_save_listpresentation_v1_response.h
 *
 * Response for the POST /1/module/list/listpresentation/{sListName} API Request
 */

#ifndef _list_save_listpresentation_v1_response_H_
#define _list_save_listpresentation_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_save_listpresentation_v1_response_t list_save_listpresentation_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct list_save_listpresentation_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} list_save_listpresentation_v1_response_t;

list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void list_save_listpresentation_v1_response_free(list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response);

list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response_parseFromJSON(cJSON *list_save_listpresentation_v1_responseJSON);

cJSON *list_save_listpresentation_v1_response_convertToJSON(list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response);

#endif /* _list_save_listpresentation_v1_response_H_ */


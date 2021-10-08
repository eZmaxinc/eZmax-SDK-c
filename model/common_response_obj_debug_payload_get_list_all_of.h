/*
 * common_response_obj_debug_payload_get_list_all_of.h
 *
 * 
 */

#ifndef _common_response_obj_debug_payload_get_list_all_of_H_
#define _common_response_obj_debug_payload_get_list_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_obj_debug_payload_get_list_all_of_t common_response_obj_debug_payload_get_list_all_of_t;

#include "common_response_filter.h"



typedef struct common_response_obj_debug_payload_get_list_all_of_t {
    struct common_response_filter_t *a_filter; //model
    list_t* a_order_by; //map

} common_response_obj_debug_payload_get_list_all_of_t;

common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of_create(
    common_response_filter_t *a_filter,
    list_t* a_order_by
);

void common_response_obj_debug_payload_get_list_all_of_free(common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of);

common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of_parseFromJSON(cJSON *common_response_obj_debug_payload_get_list_all_ofJSON);

cJSON *common_response_obj_debug_payload_get_list_all_of_convertToJSON(common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of);

#endif /* _common_response_obj_debug_payload_get_list_all_of_H_ */


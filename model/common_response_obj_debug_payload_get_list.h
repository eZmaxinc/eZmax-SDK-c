/*
 * common_response_obj_debug_payload_get_list.h
 *
 * This is a debug object containing debugging information on the actual function
 */

#ifndef _common_response_obj_debug_payload_get_list_H_
#define _common_response_obj_debug_payload_get_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_obj_debug_payload_get_list_t common_response_obj_debug_payload_get_list_t;

#include "common_response_filter.h"



typedef struct common_response_obj_debug_payload_get_list_t {
    int i_version_min; //numeric
    int i_version_max; //numeric
    list_t *a_required_permission; //primitive container
    int b_version_deprecated; //boolean
    char *dt_response_date; // string
    struct common_response_filter_t *a_filter; //model
    list_t* a_order_by; //map
    int i_row_max; //numeric
    int i_row_offset; //numeric

} common_response_obj_debug_payload_get_list_t;

common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_create(
    int i_version_min,
    int i_version_max,
    list_t *a_required_permission,
    int b_version_deprecated,
    char *dt_response_date,
    common_response_filter_t *a_filter,
    list_t* a_order_by,
    int i_row_max,
    int i_row_offset
);

void common_response_obj_debug_payload_get_list_free(common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list);

common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_parseFromJSON(cJSON *common_response_obj_debug_payload_get_listJSON);

cJSON *common_response_obj_debug_payload_get_list_convertToJSON(common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list);

#endif /* _common_response_obj_debug_payload_get_list_H_ */


/*
 * common_response_obj_debug_payload.h
 *
 * This is a debug object containing debugging information on the actual function
 */

#ifndef _common_response_obj_debug_payload_H_
#define _common_response_obj_debug_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_obj_debug_payload_t common_response_obj_debug_payload_t;




typedef struct common_response_obj_debug_payload_t {
    int i_version_min; //numeric
    int i_version_max; //numeric
    list_t *a_required_permission; //primitive container
    int b_version_deprecated; //boolean
    char *dt_response_date; // string

} common_response_obj_debug_payload_t;

common_response_obj_debug_payload_t *common_response_obj_debug_payload_create(
    int i_version_min,
    int i_version_max,
    list_t *a_required_permission,
    int b_version_deprecated,
    char *dt_response_date
);

void common_response_obj_debug_payload_free(common_response_obj_debug_payload_t *common_response_obj_debug_payload);

common_response_obj_debug_payload_t *common_response_obj_debug_payload_parseFromJSON(cJSON *common_response_obj_debug_payloadJSON);

cJSON *common_response_obj_debug_payload_convertToJSON(common_response_obj_debug_payload_t *common_response_obj_debug_payload);

#endif /* _common_response_obj_debug_payload_H_ */


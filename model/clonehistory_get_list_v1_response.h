/*
 * clonehistory_get_list_v1_response.h
 *
 * Response for GET /1/object/clonehistory/getList
 */

#ifndef _clonehistory_get_list_v1_response_H_
#define _clonehistory_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct clonehistory_get_list_v1_response_t clonehistory_get_list_v1_response_t;

#include "clonehistory_get_list_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"



typedef struct clonehistory_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct clonehistory_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} clonehistory_get_list_v1_response_t;

__attribute__((deprecated)) clonehistory_get_list_v1_response_t *clonehistory_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    clonehistory_get_list_v1_response_m_payload_t *m_payload
);

void clonehistory_get_list_v1_response_free(clonehistory_get_list_v1_response_t *clonehistory_get_list_v1_response);

clonehistory_get_list_v1_response_t *clonehistory_get_list_v1_response_parseFromJSON(cJSON *clonehistory_get_list_v1_responseJSON);

cJSON *clonehistory_get_list_v1_response_convertToJSON(clonehistory_get_list_v1_response_t *clonehistory_get_list_v1_response);

#endif /* _clonehistory_get_list_v1_response_H_ */


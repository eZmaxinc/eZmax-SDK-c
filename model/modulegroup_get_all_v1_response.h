/*
 * modulegroup_get_all_v1_response.h
 *
 * Response for GET /1/object/modulegroup/getAll
 */

#ifndef _modulegroup_get_all_v1_response_H_
#define _modulegroup_get_all_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulegroup_get_all_v1_response_t modulegroup_get_all_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "modulegroup_get_all_v1_response_m_payload.h"



typedef struct modulegroup_get_all_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct modulegroup_get_all_v1_response_m_payload_t *m_payload; //model

} modulegroup_get_all_v1_response_t;

modulegroup_get_all_v1_response_t *modulegroup_get_all_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    modulegroup_get_all_v1_response_m_payload_t *m_payload
);

void modulegroup_get_all_v1_response_free(modulegroup_get_all_v1_response_t *modulegroup_get_all_v1_response);

modulegroup_get_all_v1_response_t *modulegroup_get_all_v1_response_parseFromJSON(cJSON *modulegroup_get_all_v1_responseJSON);

cJSON *modulegroup_get_all_v1_response_convertToJSON(modulegroup_get_all_v1_response_t *modulegroup_get_all_v1_response);

#endif /* _modulegroup_get_all_v1_response_H_ */


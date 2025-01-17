/*
 * supply_get_list_v1_response.h
 *
 * Response for GET /1/object/supply/getList
 */

#ifndef _supply_get_list_v1_response_H_
#define _supply_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_get_list_v1_response_t supply_get_list_v1_response_t;

#include "common_response_get_list.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "supply_get_list_v1_response_m_payload.h"



typedef struct supply_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct supply_get_list_v1_response_m_payload_t *m_payload; //model

} supply_get_list_v1_response_t;

supply_get_list_v1_response_t *supply_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    supply_get_list_v1_response_m_payload_t *m_payload
);

void supply_get_list_v1_response_free(supply_get_list_v1_response_t *supply_get_list_v1_response);

supply_get_list_v1_response_t *supply_get_list_v1_response_parseFromJSON(cJSON *supply_get_list_v1_responseJSON);

cJSON *supply_get_list_v1_response_convertToJSON(supply_get_list_v1_response_t *supply_get_list_v1_response);

#endif /* _supply_get_list_v1_response_H_ */


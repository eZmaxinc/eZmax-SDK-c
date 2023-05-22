/*
 * sessionhistory_get_list_v1_response.h
 *
 * Response for GET /1/object/sessionhistory/getList
 */

#ifndef _sessionhistory_get_list_v1_response_H_
#define _sessionhistory_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sessionhistory_get_list_v1_response_t sessionhistory_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "sessionhistory_get_list_v1_response_m_payload.h"



typedef struct sessionhistory_get_list_v1_response_t {
    struct sessionhistory_get_list_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} sessionhistory_get_list_v1_response_t;

sessionhistory_get_list_v1_response_t *sessionhistory_get_list_v1_response_create(
    sessionhistory_get_list_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void sessionhistory_get_list_v1_response_free(sessionhistory_get_list_v1_response_t *sessionhistory_get_list_v1_response);

sessionhistory_get_list_v1_response_t *sessionhistory_get_list_v1_response_parseFromJSON(cJSON *sessionhistory_get_list_v1_responseJSON);

cJSON *sessionhistory_get_list_v1_response_convertToJSON(sessionhistory_get_list_v1_response_t *sessionhistory_get_list_v1_response);

#endif /* _sessionhistory_get_list_v1_response_H_ */


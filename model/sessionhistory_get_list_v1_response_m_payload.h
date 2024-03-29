/*
 * sessionhistory_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/sessionhistory/getList
 */

#ifndef _sessionhistory_get_list_v1_response_m_payload_H_
#define _sessionhistory_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sessionhistory_get_list_v1_response_m_payload_t sessionhistory_get_list_v1_response_m_payload_t;

#include "sessionhistory_list_element.h"



typedef struct sessionhistory_get_list_v1_response_m_payload_t {
    list_t *a_obj_sessionhistory; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} sessionhistory_get_list_v1_response_m_payload_t;

sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload_create(
    list_t *a_obj_sessionhistory,
    int i_row_returned,
    int i_row_filtered
);

void sessionhistory_get_list_v1_response_m_payload_free(sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload);

sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload_parseFromJSON(cJSON *sessionhistory_get_list_v1_response_m_payloadJSON);

cJSON *sessionhistory_get_list_v1_response_m_payload_convertToJSON(sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload);

#endif /* _sessionhistory_get_list_v1_response_m_payload_H_ */


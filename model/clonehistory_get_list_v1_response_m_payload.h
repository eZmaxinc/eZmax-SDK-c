/*
 * clonehistory_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/clonehistory/getList
 */

#ifndef _clonehistory_get_list_v1_response_m_payload_H_
#define _clonehistory_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct clonehistory_get_list_v1_response_m_payload_t clonehistory_get_list_v1_response_m_payload_t;

#include "clonehistory_list_element.h"



typedef struct clonehistory_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_clonehistory; //nonprimitive container

} clonehistory_get_list_v1_response_m_payload_t;

clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_clonehistory
);

void clonehistory_get_list_v1_response_m_payload_free(clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload);

clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload_parseFromJSON(cJSON *clonehistory_get_list_v1_response_m_payloadJSON);

cJSON *clonehistory_get_list_v1_response_m_payload_convertToJSON(clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload);

#endif /* _clonehistory_get_list_v1_response_m_payload_H_ */


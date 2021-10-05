/*
 * common_get_list_v1_response_m_payload.h
 *
 * Generic List Response
 */

#ifndef _common_get_list_v1_response_m_payload_H_
#define _common_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_get_list_v1_response_m_payload_t common_get_list_v1_response_m_payload_t;




typedef struct common_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} common_get_list_v1_response_m_payload_t;

common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered
);

void common_get_list_v1_response_m_payload_free(common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload);

common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_parseFromJSON(cJSON *common_get_list_v1_response_m_payloadJSON);

cJSON *common_get_list_v1_response_m_payload_convertToJSON(common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload);

#endif /* _common_get_list_v1_response_m_payload_H_ */


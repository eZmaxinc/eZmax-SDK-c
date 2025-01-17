/*
 * billingentityinternal_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/billingentityinternal/getList
 */

#ifndef _billingentityinternal_get_list_v1_response_m_payload_H_
#define _billingentityinternal_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_get_list_v1_response_m_payload_t billingentityinternal_get_list_v1_response_m_payload_t;

#include "billingentityinternal_list_element.h"
#include "common_get_list_v1_response_m_payload.h"



typedef struct billingentityinternal_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_billingentityinternal; //nonprimitive container

} billingentityinternal_get_list_v1_response_m_payload_t;

billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_billingentityinternal
);

void billingentityinternal_get_list_v1_response_m_payload_free(billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload);

billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_parseFromJSON(cJSON *billingentityinternal_get_list_v1_response_m_payloadJSON);

cJSON *billingentityinternal_get_list_v1_response_m_payload_convertToJSON(billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload);

#endif /* _billingentityinternal_get_list_v1_response_m_payload_H_ */


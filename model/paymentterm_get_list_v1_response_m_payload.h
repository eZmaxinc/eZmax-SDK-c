/*
 * paymentterm_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/paymentterm/getList
 */

#ifndef _paymentterm_get_list_v1_response_m_payload_H_
#define _paymentterm_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_get_list_v1_response_m_payload_t paymentterm_get_list_v1_response_m_payload_t;

#include "paymentterm_list_element.h"



typedef struct paymentterm_get_list_v1_response_m_payload_t {
    list_t *a_obj_paymentterm; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} paymentterm_get_list_v1_response_m_payload_t;

paymentterm_get_list_v1_response_m_payload_t *paymentterm_get_list_v1_response_m_payload_create(
    list_t *a_obj_paymentterm,
    int i_row_returned,
    int i_row_filtered
);

void paymentterm_get_list_v1_response_m_payload_free(paymentterm_get_list_v1_response_m_payload_t *paymentterm_get_list_v1_response_m_payload);

paymentterm_get_list_v1_response_m_payload_t *paymentterm_get_list_v1_response_m_payload_parseFromJSON(cJSON *paymentterm_get_list_v1_response_m_payloadJSON);

cJSON *paymentterm_get_list_v1_response_m_payload_convertToJSON(paymentterm_get_list_v1_response_m_payload_t *paymentterm_get_list_v1_response_m_payload);

#endif /* _paymentterm_get_list_v1_response_m_payload_H_ */


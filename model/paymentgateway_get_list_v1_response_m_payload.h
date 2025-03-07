/*
 * paymentgateway_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/paymentgateway/getList
 */

#ifndef _paymentgateway_get_list_v1_response_m_payload_H_
#define _paymentgateway_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_get_list_v1_response_m_payload_t paymentgateway_get_list_v1_response_m_payload_t;

#include "paymentgateway_list_element.h"



typedef struct paymentgateway_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_paymentgateway; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_paymentgateway
);

void paymentgateway_get_list_v1_response_m_payload_free(paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload);

paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_parseFromJSON(cJSON *paymentgateway_get_list_v1_response_m_payloadJSON);

cJSON *paymentgateway_get_list_v1_response_m_payload_convertToJSON(paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload);

#endif /* _paymentgateway_get_list_v1_response_m_payload_H_ */


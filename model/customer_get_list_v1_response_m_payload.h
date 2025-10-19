/*
 * customer_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/customer/getList
 */

#ifndef _customer_get_list_v1_response_m_payload_H_
#define _customer_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_get_list_v1_response_m_payload_t customer_get_list_v1_response_m_payload_t;

#include "customer_list_element.h"



typedef struct customer_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_customer; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_customer
);

void customer_get_list_v1_response_m_payload_free(customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload);

customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_parseFromJSON(cJSON *customer_get_list_v1_response_m_payloadJSON);

cJSON *customer_get_list_v1_response_m_payload_convertToJSON(customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload);

#endif /* _customer_get_list_v1_response_m_payload_H_ */


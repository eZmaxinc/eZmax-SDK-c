/*
 * creditcardmerchant_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/creditcardmerchant/getList
 */

#ifndef _creditcardmerchant_get_list_v1_response_m_payload_H_
#define _creditcardmerchant_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_get_list_v1_response_m_payload_t creditcardmerchant_get_list_v1_response_m_payload_t;

#include "creditcardmerchant_list_element.h"



typedef struct creditcardmerchant_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_creditcardmerchant; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_creditcardmerchant
);

void creditcardmerchant_get_list_v1_response_m_payload_free(creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload);

creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_get_list_v1_response_m_payloadJSON);

cJSON *creditcardmerchant_get_list_v1_response_m_payload_convertToJSON(creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload);

#endif /* _creditcardmerchant_get_list_v1_response_m_payload_H_ */


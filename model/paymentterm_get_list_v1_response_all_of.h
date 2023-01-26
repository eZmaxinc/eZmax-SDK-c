/*
 * paymentterm_get_list_v1_response_all_of.h
 *
 * 
 */

#ifndef _paymentterm_get_list_v1_response_all_of_H_
#define _paymentterm_get_list_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_get_list_v1_response_all_of_t paymentterm_get_list_v1_response_all_of_t;

#include "paymentterm_get_list_v1_response_m_payload.h"



typedef struct paymentterm_get_list_v1_response_all_of_t {
    struct paymentterm_get_list_v1_response_m_payload_t *m_payload; //model

} paymentterm_get_list_v1_response_all_of_t;

paymentterm_get_list_v1_response_all_of_t *paymentterm_get_list_v1_response_all_of_create(
    paymentterm_get_list_v1_response_m_payload_t *m_payload
);

void paymentterm_get_list_v1_response_all_of_free(paymentterm_get_list_v1_response_all_of_t *paymentterm_get_list_v1_response_all_of);

paymentterm_get_list_v1_response_all_of_t *paymentterm_get_list_v1_response_all_of_parseFromJSON(cJSON *paymentterm_get_list_v1_response_all_ofJSON);

cJSON *paymentterm_get_list_v1_response_all_of_convertToJSON(paymentterm_get_list_v1_response_all_of_t *paymentterm_get_list_v1_response_all_of);

#endif /* _paymentterm_get_list_v1_response_all_of_H_ */


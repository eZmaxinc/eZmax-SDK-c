/*
 * creditcardclient_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/creditcardclient/getList
 */

#ifndef _creditcardclient_get_list_v1_response_m_payload_H_
#define _creditcardclient_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_get_list_v1_response_m_payload_t creditcardclient_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "creditcardclient_list_element.h"



typedef struct creditcardclient_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_creditcardclient; //nonprimitive container

} creditcardclient_get_list_v1_response_m_payload_t;

creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_creditcardclient
);

void creditcardclient_get_list_v1_response_m_payload_free(creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload);

creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload_parseFromJSON(cJSON *creditcardclient_get_list_v1_response_m_payloadJSON);

cJSON *creditcardclient_get_list_v1_response_m_payload_convertToJSON(creditcardclient_get_list_v1_response_m_payload_t *creditcardclient_get_list_v1_response_m_payload);

#endif /* _creditcardclient_get_list_v1_response_m_payload_H_ */


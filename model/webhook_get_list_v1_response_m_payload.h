/*
 * webhook_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/webhook/getList
 */

#ifndef _webhook_get_list_v1_response_m_payload_H_
#define _webhook_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_list_v1_response_m_payload_t webhook_get_list_v1_response_m_payload_t;

#include "webhook_list_element.h"



typedef struct webhook_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_webhook; //nonprimitive container

} webhook_get_list_v1_response_m_payload_t;

webhook_get_list_v1_response_m_payload_t *webhook_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_webhook
);

void webhook_get_list_v1_response_m_payload_free(webhook_get_list_v1_response_m_payload_t *webhook_get_list_v1_response_m_payload);

webhook_get_list_v1_response_m_payload_t *webhook_get_list_v1_response_m_payload_parseFromJSON(cJSON *webhook_get_list_v1_response_m_payloadJSON);

cJSON *webhook_get_list_v1_response_m_payload_convertToJSON(webhook_get_list_v1_response_m_payload_t *webhook_get_list_v1_response_m_payload);

#endif /* _webhook_get_list_v1_response_m_payload_H_ */


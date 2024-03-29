/*
 * webhook_get_history_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _webhook_get_history_v1_response_m_payload_all_of_H_
#define _webhook_get_history_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_history_v1_response_m_payload_all_of_t webhook_get_history_v1_response_m_payload_all_of_t;

#include "custom_webhooklog_response.h"



typedef struct webhook_get_history_v1_response_m_payload_all_of_t {
    list_t *a_obj_webhooklog; //nonprimitive container

} webhook_get_history_v1_response_m_payload_all_of_t;

webhook_get_history_v1_response_m_payload_all_of_t *webhook_get_history_v1_response_m_payload_all_of_create(
    list_t *a_obj_webhooklog
);

void webhook_get_history_v1_response_m_payload_all_of_free(webhook_get_history_v1_response_m_payload_all_of_t *webhook_get_history_v1_response_m_payload_all_of);

webhook_get_history_v1_response_m_payload_all_of_t *webhook_get_history_v1_response_m_payload_all_of_parseFromJSON(cJSON *webhook_get_history_v1_response_m_payload_all_ofJSON);

cJSON *webhook_get_history_v1_response_m_payload_all_of_convertToJSON(webhook_get_history_v1_response_m_payload_all_of_t *webhook_get_history_v1_response_m_payload_all_of);

#endif /* _webhook_get_history_v1_response_m_payload_all_of_H_ */


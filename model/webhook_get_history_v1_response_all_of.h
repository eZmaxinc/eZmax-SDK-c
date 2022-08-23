/*
 * webhook_get_history_v1_response_all_of.h
 *
 * 
 */

#ifndef _webhook_get_history_v1_response_all_of_H_
#define _webhook_get_history_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_history_v1_response_all_of_t webhook_get_history_v1_response_all_of_t;

#include "webhook_get_history_v1_response_m_payload.h"



typedef struct webhook_get_history_v1_response_all_of_t {
    struct webhook_get_history_v1_response_m_payload_t *m_payload; //model

} webhook_get_history_v1_response_all_of_t;

webhook_get_history_v1_response_all_of_t *webhook_get_history_v1_response_all_of_create(
    webhook_get_history_v1_response_m_payload_t *m_payload
);

void webhook_get_history_v1_response_all_of_free(webhook_get_history_v1_response_all_of_t *webhook_get_history_v1_response_all_of);

webhook_get_history_v1_response_all_of_t *webhook_get_history_v1_response_all_of_parseFromJSON(cJSON *webhook_get_history_v1_response_all_ofJSON);

cJSON *webhook_get_history_v1_response_all_of_convertToJSON(webhook_get_history_v1_response_all_of_t *webhook_get_history_v1_response_all_of);

#endif /* _webhook_get_history_v1_response_all_of_H_ */


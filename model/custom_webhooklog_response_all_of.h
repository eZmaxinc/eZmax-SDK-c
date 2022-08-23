/*
 * custom_webhooklog_response_all_of.h
 *
 * 
 */

#ifndef _custom_webhooklog_response_all_of_H_
#define _custom_webhooklog_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_webhooklog_response_all_of_t custom_webhooklog_response_all_of_t;




typedef struct custom_webhooklog_response_all_of_t {
    char *dt_webhooklog_date; // string
    char *t_webhooklog_json; // string

} custom_webhooklog_response_all_of_t;

custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of_create(
    char *dt_webhooklog_date,
    char *t_webhooklog_json
);

void custom_webhooklog_response_all_of_free(custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of);

custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of_parseFromJSON(cJSON *custom_webhooklog_response_all_ofJSON);

cJSON *custom_webhooklog_response_all_of_convertToJSON(custom_webhooklog_response_all_of_t *custom_webhooklog_response_all_of);

#endif /* _custom_webhooklog_response_all_of_H_ */


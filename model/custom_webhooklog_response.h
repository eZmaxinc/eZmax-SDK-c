/*
 * custom_webhooklog_response.h
 *
 * A custom Webhooklog object
 */

#ifndef _custom_webhooklog_response_H_
#define _custom_webhooklog_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_webhooklog_response_t custom_webhooklog_response_t;




typedef struct custom_webhooklog_response_t {
    char *dt_webhooklog_date; // string
    char *t_webhooklog_json; // string

} custom_webhooklog_response_t;

custom_webhooklog_response_t *custom_webhooklog_response_create(
    char *dt_webhooklog_date,
    char *t_webhooklog_json
);

void custom_webhooklog_response_free(custom_webhooklog_response_t *custom_webhooklog_response);

custom_webhooklog_response_t *custom_webhooklog_response_parseFromJSON(cJSON *custom_webhooklog_responseJSON);

cJSON *custom_webhooklog_response_convertToJSON(custom_webhooklog_response_t *custom_webhooklog_response);

#endif /* _custom_webhooklog_response_H_ */


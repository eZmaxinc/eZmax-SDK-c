/*
 * webhookheader_response.h
 *
 * A webhookheader object
 */

#ifndef _webhookheader_response_H_
#define _webhookheader_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhookheader_response_t webhookheader_response_t;




typedef struct webhookheader_response_t {
    int pki_webhookheader_id; //numeric
    int fki_webhook_id; //numeric
    char *s_webhookheader_name; // string
    char *s_webhookheader_value; // string

} webhookheader_response_t;

webhookheader_response_t *webhookheader_response_create(
    int pki_webhookheader_id,
    int fki_webhook_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
);

void webhookheader_response_free(webhookheader_response_t *webhookheader_response);

webhookheader_response_t *webhookheader_response_parseFromJSON(cJSON *webhookheader_responseJSON);

cJSON *webhookheader_response_convertToJSON(webhookheader_response_t *webhookheader_response);

#endif /* _webhookheader_response_H_ */


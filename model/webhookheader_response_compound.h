/*
 * webhookheader_response_compound.h
 *
 * A Webhookheader Object
 */

#ifndef _webhookheader_response_compound_H_
#define _webhookheader_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhookheader_response_compound_t webhookheader_response_compound_t;

#include "webhookheader_response.h"



typedef struct webhookheader_response_compound_t {
    int pki_webhookheader_id; //numeric
    int fki_webhook_id; //numeric
    char *s_webhookheader_name; // string
    char *s_webhookheader_value; // string

} webhookheader_response_compound_t;

webhookheader_response_compound_t *webhookheader_response_compound_create(
    int pki_webhookheader_id,
    int fki_webhook_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
);

void webhookheader_response_compound_free(webhookheader_response_compound_t *webhookheader_response_compound);

webhookheader_response_compound_t *webhookheader_response_compound_parseFromJSON(cJSON *webhookheader_response_compoundJSON);

cJSON *webhookheader_response_compound_convertToJSON(webhookheader_response_compound_t *webhookheader_response_compound);

#endif /* _webhookheader_response_compound_H_ */


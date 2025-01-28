/*
 * webhookheader_request_compound.h
 *
 * A Webhookheader Object
 */

#ifndef _webhookheader_request_compound_H_
#define _webhookheader_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhookheader_request_compound_t webhookheader_request_compound_t;




typedef struct webhookheader_request_compound_t {
    int pki_webhookheader_id; //numeric
    char *s_webhookheader_name; // string
    char *s_webhookheader_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} webhookheader_request_compound_t;

__attribute__((deprecated)) webhookheader_request_compound_t *webhookheader_request_compound_create(
    int pki_webhookheader_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
);

void webhookheader_request_compound_free(webhookheader_request_compound_t *webhookheader_request_compound);

webhookheader_request_compound_t *webhookheader_request_compound_parseFromJSON(cJSON *webhookheader_request_compoundJSON);

cJSON *webhookheader_request_compound_convertToJSON(webhookheader_request_compound_t *webhookheader_request_compound);

#endif /* _webhookheader_request_compound_H_ */


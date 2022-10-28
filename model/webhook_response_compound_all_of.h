/*
 * webhook_response_compound_all_of.h
 *
 * 
 */

#ifndef _webhook_response_compound_all_of_H_
#define _webhook_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_response_compound_all_of_t webhook_response_compound_all_of_t;




typedef struct webhook_response_compound_all_of_t {
    char *s_webhook_event; // string

} webhook_response_compound_all_of_t;

webhook_response_compound_all_of_t *webhook_response_compound_all_of_create(
    char *s_webhook_event
);

void webhook_response_compound_all_of_free(webhook_response_compound_all_of_t *webhook_response_compound_all_of);

webhook_response_compound_all_of_t *webhook_response_compound_all_of_parseFromJSON(cJSON *webhook_response_compound_all_ofJSON);

cJSON *webhook_response_compound_all_of_convertToJSON(webhook_response_compound_all_of_t *webhook_response_compound_all_of);

#endif /* _webhook_response_compound_all_of_H_ */


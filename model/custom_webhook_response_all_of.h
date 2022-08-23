/*
 * custom_webhook_response_all_of.h
 *
 * 
 */

#ifndef _custom_webhook_response_all_of_H_
#define _custom_webhook_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_webhook_response_all_of_t custom_webhook_response_all_of_t;




typedef struct custom_webhook_response_all_of_t {
    char *pks_customer_code; // string
    int b_webhook_test; //boolean

} custom_webhook_response_all_of_t;

custom_webhook_response_all_of_t *custom_webhook_response_all_of_create(
    char *pks_customer_code,
    int b_webhook_test
);

void custom_webhook_response_all_of_free(custom_webhook_response_all_of_t *custom_webhook_response_all_of);

custom_webhook_response_all_of_t *custom_webhook_response_all_of_parseFromJSON(cJSON *custom_webhook_response_all_ofJSON);

cJSON *custom_webhook_response_all_of_convertToJSON(custom_webhook_response_all_of_t *custom_webhook_response_all_of);

#endif /* _custom_webhook_response_all_of_H_ */


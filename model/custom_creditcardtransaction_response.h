/*
 * custom_creditcardtransaction_response.h
 *
 * A custom Creditcardtransaction Object
 */

#ifndef _custom_creditcardtransaction_response_H_
#define _custom_creditcardtransaction_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_creditcardtransaction_response_t custom_creditcardtransaction_response_t;

#include "field_e_creditcardtype_codename.h"

// Enum  for custom_creditcardtransaction_response

typedef enum  { ezmax_api_definition__full_custom_creditcardtransaction_response__NULL = 0, ezmax_api_definition__full_custom_creditcardtransaction_response__Amex, ezmax_api_definition__full_custom_creditcardtransaction_response__Mastercard, ezmax_api_definition__full_custom_creditcardtransaction_response__Visa } ezmax_api_definition__full_custom_creditcardtransaction_response__e;

char* custom_creditcardtransaction_response_e_creditcardtype_codename_ToString(ezmax_api_definition__full_custom_creditcardtransaction_response__e e_creditcardtype_codename);

ezmax_api_definition__full_custom_creditcardtransaction_response__e custom_creditcardtransaction_response_e_creditcardtype_codename_FromString(char* e_creditcardtype_codename);



typedef struct custom_creditcardtransaction_response_t {
    field_e_creditcardtype_codename_t *e_creditcardtype_codename; // custom
    char *d_creditcardtransaction_amount; // string
    char *s_creditcardtransaction_partiallydecryptednumber; // string
    char *s_creditcardtransaction_referencenumber; // string

} custom_creditcardtransaction_response_t;

custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_create(
    field_e_creditcardtype_codename_t *e_creditcardtype_codename,
    char *d_creditcardtransaction_amount,
    char *s_creditcardtransaction_partiallydecryptednumber,
    char *s_creditcardtransaction_referencenumber
);

void custom_creditcardtransaction_response_free(custom_creditcardtransaction_response_t *custom_creditcardtransaction_response);

custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_parseFromJSON(cJSON *custom_creditcardtransaction_responseJSON);

cJSON *custom_creditcardtransaction_response_convertToJSON(custom_creditcardtransaction_response_t *custom_creditcardtransaction_response);

#endif /* _custom_creditcardtransaction_response_H_ */


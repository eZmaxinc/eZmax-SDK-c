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



typedef struct custom_creditcardtransaction_response_t {
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename; //referenced enum
    char *d_creditcardtransaction_amount; // string
    char *s_creditcardtransaction_partiallydecryptednumber; // string
    char *s_creditcardtransaction_referencenumber; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_creditcardtransaction_response_t;

__attribute__((deprecated)) custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_create(
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename,
    char *d_creditcardtransaction_amount,
    char *s_creditcardtransaction_partiallydecryptednumber,
    char *s_creditcardtransaction_referencenumber
);

void custom_creditcardtransaction_response_free(custom_creditcardtransaction_response_t *custom_creditcardtransaction_response);

custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_parseFromJSON(cJSON *custom_creditcardtransaction_responseJSON);

cJSON *custom_creditcardtransaction_response_convertToJSON(custom_creditcardtransaction_response_t *custom_creditcardtransaction_response);

#endif /* _custom_creditcardtransaction_response_H_ */


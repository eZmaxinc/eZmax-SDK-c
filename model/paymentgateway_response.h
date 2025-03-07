/*
 * paymentgateway_response.h
 *
 * A Paymentgateway Object
 */

#ifndef _paymentgateway_response_H_
#define _paymentgateway_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_response_t paymentgateway_response_t;

#include "creditcardmerchant_response_compound.h"
#include "field_e_paymentgateway_processor.h"
#include "multilingual_paymentgateway_description.h"



typedef struct paymentgateway_response_t {
    int pki_paymentgateway_id; //numeric
    int fki_creditcardmerchant_id; //numeric
    char *s_creditcardmerchant_description; // string
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor; //referenced enum
    struct multilingual_paymentgateway_description_t *obj_paymentgateway_description; //model
    struct creditcardmerchant_response_compound_t *obj_creditcardmerchant; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_response_t;

__attribute__((deprecated)) paymentgateway_response_t *paymentgateway_response_create(
    int pki_paymentgateway_id,
    int fki_creditcardmerchant_id,
    char *s_creditcardmerchant_description,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    multilingual_paymentgateway_description_t *obj_paymentgateway_description,
    creditcardmerchant_response_compound_t *obj_creditcardmerchant
);

void paymentgateway_response_free(paymentgateway_response_t *paymentgateway_response);

paymentgateway_response_t *paymentgateway_response_parseFromJSON(cJSON *paymentgateway_responseJSON);

cJSON *paymentgateway_response_convertToJSON(paymentgateway_response_t *paymentgateway_response);

#endif /* _paymentgateway_response_H_ */


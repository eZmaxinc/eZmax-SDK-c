/*
 * paymentgateway_request_compound.h
 *
 * A Paymentgateway Object and children
 */

#ifndef _paymentgateway_request_compound_H_
#define _paymentgateway_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_request_compound_t paymentgateway_request_compound_t;

#include "creditcardmerchant_request_compound.h"
#include "field_e_paymentgateway_processor.h"
#include "multilingual_paymentgateway_description.h"



typedef struct paymentgateway_request_compound_t {
    int *pki_paymentgateway_id; //numeric
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor; //referenced enum
    struct multilingual_paymentgateway_description_t *obj_paymentgateway_description; //model
    struct creditcardmerchant_request_compound_t *obj_creditcardmerchant; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_request_compound_t;

__attribute__((deprecated)) paymentgateway_request_compound_t *paymentgateway_request_compound_create(
    int *pki_paymentgateway_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    multilingual_paymentgateway_description_t *obj_paymentgateway_description,
    creditcardmerchant_request_compound_t *obj_creditcardmerchant
);

void paymentgateway_request_compound_free(paymentgateway_request_compound_t *paymentgateway_request_compound);

paymentgateway_request_compound_t *paymentgateway_request_compound_parseFromJSON(cJSON *paymentgateway_request_compoundJSON);

cJSON *paymentgateway_request_compound_convertToJSON(paymentgateway_request_compound_t *paymentgateway_request_compound);

#endif /* _paymentgateway_request_compound_H_ */


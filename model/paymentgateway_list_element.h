/*
 * paymentgateway_list_element.h
 *
 * A Paymentgateway List Element
 */

#ifndef _paymentgateway_list_element_H_
#define _paymentgateway_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_list_element_t paymentgateway_list_element_t;

#include "field_e_paymentgateway_processor.h"



typedef struct paymentgateway_list_element_t {
    int *pki_paymentgateway_id; //numeric
    int *fki_creditcardmerchant_id; //numeric
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor; //referenced enum
    char *s_paymentgateway_description_x; // string
    int *b_paymentgateway_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_list_element_t;

__attribute__((deprecated)) paymentgateway_list_element_t *paymentgateway_list_element_create(
    int *pki_paymentgateway_id,
    int *fki_creditcardmerchant_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    char *s_paymentgateway_description_x,
    int *b_paymentgateway_isactive
);

void paymentgateway_list_element_free(paymentgateway_list_element_t *paymentgateway_list_element);

paymentgateway_list_element_t *paymentgateway_list_element_parseFromJSON(cJSON *paymentgateway_list_elementJSON);

cJSON *paymentgateway_list_element_convertToJSON(paymentgateway_list_element_t *paymentgateway_list_element);

#endif /* _paymentgateway_list_element_H_ */


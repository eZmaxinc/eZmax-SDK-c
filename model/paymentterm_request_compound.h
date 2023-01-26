/*
 * paymentterm_request_compound.h
 *
 * A Paymentterm Object and children
 */

#ifndef _paymentterm_request_compound_H_
#define _paymentterm_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_request_compound_t paymentterm_request_compound_t;

#include "multilingual_paymentterm_description.h"



typedef struct paymentterm_request_compound_t {
    int pki_paymentterm_id; //numeric
    char *s_paymentterm_code; // string
    struct multilingual_paymentterm_description_t *obj_paymentterm_description; //model
    int b_paymentterm_isactive; //boolean

} paymentterm_request_compound_t;

paymentterm_request_compound_t *paymentterm_request_compound_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive
);

void paymentterm_request_compound_free(paymentterm_request_compound_t *paymentterm_request_compound);

paymentterm_request_compound_t *paymentterm_request_compound_parseFromJSON(cJSON *paymentterm_request_compoundJSON);

cJSON *paymentterm_request_compound_convertToJSON(paymentterm_request_compound_t *paymentterm_request_compound);

#endif /* _paymentterm_request_compound_H_ */


/*
 * paymentterm_response_compound.h
 *
 * A Paymentterm Object
 */

#ifndef _paymentterm_response_compound_H_
#define _paymentterm_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_response_compound_t paymentterm_response_compound_t;

#include "common_audit.h"
#include "multilingual_paymentterm_description.h"



typedef struct paymentterm_response_compound_t {
    int pki_paymentterm_id; //numeric
    char *s_paymentterm_code; // string
    struct multilingual_paymentterm_description_t *obj_paymentterm_description; //model
    int b_paymentterm_isactive; //boolean
    struct common_audit_t *obj_audit; //model

} paymentterm_response_compound_t;

paymentterm_response_compound_t *paymentterm_response_compound_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive,
    common_audit_t *obj_audit
);

void paymentterm_response_compound_free(paymentterm_response_compound_t *paymentterm_response_compound);

paymentterm_response_compound_t *paymentterm_response_compound_parseFromJSON(cJSON *paymentterm_response_compoundJSON);

cJSON *paymentterm_response_compound_convertToJSON(paymentterm_response_compound_t *paymentterm_response_compound);

#endif /* _paymentterm_response_compound_H_ */


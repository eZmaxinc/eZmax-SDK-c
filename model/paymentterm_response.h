/*
 * paymentterm_response.h
 *
 * A Paymentterm Object
 */

#ifndef _paymentterm_response_H_
#define _paymentterm_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_response_t paymentterm_response_t;

#include "common_audit.h"
#include "multilingual_paymentterm_description.h"



typedef struct paymentterm_response_t {
    int pki_paymentterm_id; //numeric
    char *s_paymentterm_code; // string
    struct multilingual_paymentterm_description_t *obj_paymentterm_description; //model
    int b_paymentterm_isactive; //boolean
    struct common_audit_t *obj_audit; //model

} paymentterm_response_t;

paymentterm_response_t *paymentterm_response_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive,
    common_audit_t *obj_audit
);

void paymentterm_response_free(paymentterm_response_t *paymentterm_response);

paymentterm_response_t *paymentterm_response_parseFromJSON(cJSON *paymentterm_responseJSON);

cJSON *paymentterm_response_convertToJSON(paymentterm_response_t *paymentterm_response);

#endif /* _paymentterm_response_H_ */


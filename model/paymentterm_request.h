/*
 * paymentterm_request.h
 *
 * A Paymentterm Object
 */

#ifndef _paymentterm_request_H_
#define _paymentterm_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_request_t paymentterm_request_t;

#include "field_e_paymentterm_type.h"
#include "multilingual_paymentterm_description.h"

// Enum  for paymentterm_request

typedef enum  { ezmax_api_definition__full_paymentterm_request__NULL = 0, ezmax_api_definition__full_paymentterm_request__Days, ezmax_api_definition__full_paymentterm_request__Dayofthemonth } ezmax_api_definition__full_paymentterm_request__e;

char* paymentterm_request_e_paymentterm_type_ToString(ezmax_api_definition__full_paymentterm_request__e e_paymentterm_type);

ezmax_api_definition__full_paymentterm_request__e paymentterm_request_e_paymentterm_type_FromString(char* e_paymentterm_type);



typedef struct paymentterm_request_t {
    int pki_paymentterm_id; //numeric
    char *s_paymentterm_code; // string
    field_e_paymentterm_type_t *e_paymentterm_type; // custom
    int i_paymentterm_day; //numeric
    struct multilingual_paymentterm_description_t *obj_paymentterm_description; //model
    int b_paymentterm_isactive; //boolean

} paymentterm_request_t;

paymentterm_request_t *paymentterm_request_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    field_e_paymentterm_type_t *e_paymentterm_type,
    int i_paymentterm_day,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive
);

void paymentterm_request_free(paymentterm_request_t *paymentterm_request);

paymentterm_request_t *paymentterm_request_parseFromJSON(cJSON *paymentterm_requestJSON);

cJSON *paymentterm_request_convertToJSON(paymentterm_request_t *paymentterm_request);

#endif /* _paymentterm_request_H_ */


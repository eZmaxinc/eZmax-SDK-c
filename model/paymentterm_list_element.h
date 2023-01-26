/*
 * paymentterm_list_element.h
 *
 * A Paymentterm List Element
 */

#ifndef _paymentterm_list_element_H_
#define _paymentterm_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_list_element_t paymentterm_list_element_t;




typedef struct paymentterm_list_element_t {
    int pki_paymentterm_id; //numeric
    char *s_paymentterm_code; // string
    char *s_paymentterm_description_x; // string
    int b_paymentterm_isactive; //boolean

} paymentterm_list_element_t;

paymentterm_list_element_t *paymentterm_list_element_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    char *s_paymentterm_description_x,
    int b_paymentterm_isactive
);

void paymentterm_list_element_free(paymentterm_list_element_t *paymentterm_list_element);

paymentterm_list_element_t *paymentterm_list_element_parseFromJSON(cJSON *paymentterm_list_elementJSON);

cJSON *paymentterm_list_element_convertToJSON(paymentterm_list_element_t *paymentterm_list_element);

#endif /* _paymentterm_list_element_H_ */


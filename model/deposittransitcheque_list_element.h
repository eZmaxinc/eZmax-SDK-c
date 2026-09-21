/*
 * deposittransitcheque_list_element.h
 *
 * A Deposittransitcheque List Element
 */

#ifndef _deposittransitcheque_list_element_H_
#define _deposittransitcheque_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_list_element_t deposittransitcheque_list_element_t;




typedef struct deposittransitcheque_list_element_t {
    int *pki_deposittransitcheque_id; //numeric
    int *fki_bankaccount_id; //numeric
    int *fki_deposit_id; //numeric
    char *s_deposittransitcheque_number; // string
    char *dt_deposittransitcheque_date; // string
    char *d_deposittransitcheque_amount; // string
    char *s_bankaccount_bankname; // string
    char *s_period_yyyymm; // string
    char *s_customer_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_list_element_t;

__attribute__((deprecated)) deposittransitcheque_list_element_t *deposittransitcheque_list_element_create(
    int *pki_deposittransitcheque_id,
    int *fki_bankaccount_id,
    int *fki_deposit_id,
    char *s_deposittransitcheque_number,
    char *dt_deposittransitcheque_date,
    char *d_deposittransitcheque_amount,
    char *s_bankaccount_bankname,
    char *s_period_yyyymm,
    char *s_customer_name
);

void deposittransitcheque_list_element_free(deposittransitcheque_list_element_t *deposittransitcheque_list_element);

deposittransitcheque_list_element_t *deposittransitcheque_list_element_parseFromJSON(cJSON *deposittransitcheque_list_elementJSON);

cJSON *deposittransitcheque_list_element_convertToJSON(deposittransitcheque_list_element_t *deposittransitcheque_list_element);

#endif /* _deposittransitcheque_list_element_H_ */


/*
 * deposit_list_element.h
 *
 * A Deposit List Element
 */

#ifndef _deposit_list_element_H_
#define _deposit_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_list_element_t deposit_list_element_t;




typedef struct deposit_list_element_t {
    int *pki_deposit_id; //numeric
    int *fki_bankaccount_id; //numeric
    int *fki_period_id; //numeric
    int *fki_user_id_created; //numeric
    char *s_deposit_number; // string
    char *dt_deposit_date; // string
    char *d_deposit_total; // string
    char *dt_created_date; // string
    int *b_deposit_draft; //boolean
    int *b_deposit_reconciled; //boolean
    int *fki_reconciliation_id; //numeric
    char *s_bankaccount_bankname; // string
    char *s_period_yyyymm; // string
    char *s_user_loginname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_list_element_t;

__attribute__((deprecated)) deposit_list_element_t *deposit_list_element_create(
    int *pki_deposit_id,
    int *fki_bankaccount_id,
    int *fki_period_id,
    int *fki_user_id_created,
    char *s_deposit_number,
    char *dt_deposit_date,
    char *d_deposit_total,
    char *dt_created_date,
    int *b_deposit_draft,
    int *b_deposit_reconciled,
    int *fki_reconciliation_id,
    char *s_bankaccount_bankname,
    char *s_period_yyyymm,
    char *s_user_loginname
);

void deposit_list_element_free(deposit_list_element_t *deposit_list_element);

deposit_list_element_t *deposit_list_element_parseFromJSON(cJSON *deposit_list_elementJSON);

cJSON *deposit_list_element_convertToJSON(deposit_list_element_t *deposit_list_element);

#endif /* _deposit_list_element_H_ */


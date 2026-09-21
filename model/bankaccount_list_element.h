/*
 * bankaccount_list_element.h
 *
 * A Bankaccount List Element
 */

#ifndef _bankaccount_list_element_H_
#define _bankaccount_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_list_element_t bankaccount_list_element_t;

#include "field_e_bankaccount_type.h"



typedef struct bankaccount_list_element_t {
    int *pki_bankaccount_id; //numeric
    char *s_bankaccount_bankname; // string
    char *s_bankaccount_transit; // string
    char *s_bankaccount_institution; // string
    char *s_bankaccount_account; // string
    char *s_bankaccount_number; // string
    ezmax_api_definition__full_field_e_bankaccount_type__e e_bankaccount_type; //referenced enum
    int *b_bankaccount_commissionprocessing; //boolean
    int *b_bankaccount_isactive; //boolean
    int *i_glaccount_code; //numeric
    char *s_glaccount_description_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_list_element_t;

__attribute__((deprecated)) bankaccount_list_element_t *bankaccount_list_element_create(
    int *pki_bankaccount_id,
    char *s_bankaccount_bankname,
    char *s_bankaccount_transit,
    char *s_bankaccount_institution,
    char *s_bankaccount_account,
    char *s_bankaccount_number,
    ezmax_api_definition__full_field_e_bankaccount_type__e e_bankaccount_type,
    int *b_bankaccount_commissionprocessing,
    int *b_bankaccount_isactive,
    int *i_glaccount_code,
    char *s_glaccount_description_x
);

void bankaccount_list_element_free(bankaccount_list_element_t *bankaccount_list_element);

bankaccount_list_element_t *bankaccount_list_element_parseFromJSON(cJSON *bankaccount_list_elementJSON);

cJSON *bankaccount_list_element_convertToJSON(bankaccount_list_element_t *bankaccount_list_element);

#endif /* _bankaccount_list_element_H_ */


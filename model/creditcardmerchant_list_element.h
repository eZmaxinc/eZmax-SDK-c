/*
 * creditcardmerchant_list_element.h
 *
 * A Creditcardmerchant List Element
 */

#ifndef _creditcardmerchant_list_element_H_
#define _creditcardmerchant_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_list_element_t creditcardmerchant_list_element_t;




typedef struct creditcardmerchant_list_element_t {
    int pki_creditcardmerchant_id; //numeric
    int fki_bankaccount_id; //numeric
    int fki_language_id; //numeric
    int b_creditcardmerchant_denyvisa; //boolean
    int b_creditcardmerchant_denymastercard; //boolean
    int b_creditcardmerchant_denyamex; //boolean
    int b_creditcardmerchant_isactive; //boolean
    char *s_creditcardmerchant_description; // string
    char *s_creditcardmerchant_storeid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_list_element_t;

__attribute__((deprecated)) creditcardmerchant_list_element_t *creditcardmerchant_list_element_create(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    int fki_language_id,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
);

void creditcardmerchant_list_element_free(creditcardmerchant_list_element_t *creditcardmerchant_list_element);

creditcardmerchant_list_element_t *creditcardmerchant_list_element_parseFromJSON(cJSON *creditcardmerchant_list_elementJSON);

cJSON *creditcardmerchant_list_element_convertToJSON(creditcardmerchant_list_element_t *creditcardmerchant_list_element);

#endif /* _creditcardmerchant_list_element_H_ */


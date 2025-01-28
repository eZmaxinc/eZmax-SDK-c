/*
 * creditcardmerchant_response_compound.h
 *
 * A Creditcardmerchant Object
 */

#ifndef _creditcardmerchant_response_compound_H_
#define _creditcardmerchant_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_response_compound_t creditcardmerchant_response_compound_t;




typedef struct creditcardmerchant_response_compound_t {
    int pki_creditcardmerchant_id; //numeric
    int fki_bankaccount_id; //numeric
    char *s_bankaccount_bankname; // string
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    int b_creditcardmerchant_denyvisa; //boolean
    int b_creditcardmerchant_denymastercard; //boolean
    int b_creditcardmerchant_denyamex; //boolean
    int b_creditcardmerchant_isactive; //boolean
    char *s_creditcardmerchant_description; // string
    char *s_creditcardmerchant_storeid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_response_compound_t;

__attribute__((deprecated)) creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_create(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    char *s_bankaccount_bankname,
    int fki_language_id,
    char *s_language_name_x,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
);

void creditcardmerchant_response_compound_free(creditcardmerchant_response_compound_t *creditcardmerchant_response_compound);

creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_parseFromJSON(cJSON *creditcardmerchant_response_compoundJSON);

cJSON *creditcardmerchant_response_compound_convertToJSON(creditcardmerchant_response_compound_t *creditcardmerchant_response_compound);

#endif /* _creditcardmerchant_response_compound_H_ */


/*
 * creditcardmerchant_request_compound.h
 *
 * A Creditcardmerchant Object and children
 */

#ifndef _creditcardmerchant_request_compound_H_
#define _creditcardmerchant_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_request_compound_t creditcardmerchant_request_compound_t;




typedef struct creditcardmerchant_request_compound_t {
    int pki_creditcardmerchant_id; //numeric
    int fki_bankaccount_id; //numeric
    int fki_language_id; //numeric
    int b_creditcardmerchant_denyvisa; //boolean
    int b_creditcardmerchant_denymastercard; //boolean
    int b_creditcardmerchant_denyamex; //boolean
    int b_creditcardmerchant_isactive; //boolean
    char *s_creditcardmerchant_apitoken; // string
    char *s_creditcardmerchant_description; // string
    char *s_creditcardmerchant_storeid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_request_compound_t;

__attribute__((deprecated)) creditcardmerchant_request_compound_t *creditcardmerchant_request_compound_create(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    int fki_language_id,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_apitoken,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
);

void creditcardmerchant_request_compound_free(creditcardmerchant_request_compound_t *creditcardmerchant_request_compound);

creditcardmerchant_request_compound_t *creditcardmerchant_request_compound_parseFromJSON(cJSON *creditcardmerchant_request_compoundJSON);

cJSON *creditcardmerchant_request_compound_convertToJSON(creditcardmerchant_request_compound_t *creditcardmerchant_request_compound);

#endif /* _creditcardmerchant_request_compound_H_ */


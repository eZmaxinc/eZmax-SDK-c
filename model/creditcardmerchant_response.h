/*
 * creditcardmerchant_response.h
 *
 * A Creditcardmerchant Object
 */

#ifndef _creditcardmerchant_response_H_
#define _creditcardmerchant_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_response_t creditcardmerchant_response_t;




typedef struct creditcardmerchant_response_t {
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
} creditcardmerchant_response_t;

__attribute__((deprecated)) creditcardmerchant_response_t *creditcardmerchant_response_create(
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

void creditcardmerchant_response_free(creditcardmerchant_response_t *creditcardmerchant_response);

creditcardmerchant_response_t *creditcardmerchant_response_parseFromJSON(cJSON *creditcardmerchant_responseJSON);

cJSON *creditcardmerchant_response_convertToJSON(creditcardmerchant_response_t *creditcardmerchant_response);

#endif /* _creditcardmerchant_response_H_ */


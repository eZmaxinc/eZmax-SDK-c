/*
 * creditcardmerchant_request.h
 *
 * A Creditcardmerchant Object
 */

#ifndef _creditcardmerchant_request_H_
#define _creditcardmerchant_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_request_t creditcardmerchant_request_t;




typedef struct creditcardmerchant_request_t {
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
} creditcardmerchant_request_t;

__attribute__((deprecated)) creditcardmerchant_request_t *creditcardmerchant_request_create(
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

void creditcardmerchant_request_free(creditcardmerchant_request_t *creditcardmerchant_request);

creditcardmerchant_request_t *creditcardmerchant_request_parseFromJSON(cJSON *creditcardmerchant_requestJSON);

cJSON *creditcardmerchant_request_convertToJSON(creditcardmerchant_request_t *creditcardmerchant_request);

#endif /* _creditcardmerchant_request_H_ */


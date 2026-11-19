/*
 * custom_creditcardmerchant_response.h
 *
 * A Creditcardmerchant Response
 */

#ifndef _custom_creditcardmerchant_response_H_
#define _custom_creditcardmerchant_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_creditcardmerchant_response_t custom_creditcardmerchant_response_t;




typedef struct custom_creditcardmerchant_response_t {
    int *b_creditcardmerchant_denyamex; //boolean
    int *b_creditcardmerchant_denymastercard; //boolean
    int *b_creditcardmerchant_denyvisa; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_creditcardmerchant_response_t;

__attribute__((deprecated)) custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_create(
    int *b_creditcardmerchant_denyamex,
    int *b_creditcardmerchant_denymastercard,
    int *b_creditcardmerchant_denyvisa
);

void custom_creditcardmerchant_response_free(custom_creditcardmerchant_response_t *custom_creditcardmerchant_response);

custom_creditcardmerchant_response_t *custom_creditcardmerchant_response_parseFromJSON(cJSON *custom_creditcardmerchant_responseJSON);

cJSON *custom_creditcardmerchant_response_convertToJSON(custom_creditcardmerchant_response_t *custom_creditcardmerchant_response);

#endif /* _custom_creditcardmerchant_response_H_ */


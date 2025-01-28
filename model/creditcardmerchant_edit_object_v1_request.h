/*
 * creditcardmerchant_edit_object_v1_request.h
 *
 * Request for PUT /1/object/creditcardmerchant/{pkiCreditcardmerchantID}
 */

#ifndef _creditcardmerchant_edit_object_v1_request_H_
#define _creditcardmerchant_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_edit_object_v1_request_t creditcardmerchant_edit_object_v1_request_t;

#include "creditcardmerchant_request_compound.h"



typedef struct creditcardmerchant_edit_object_v1_request_t {
    struct creditcardmerchant_request_compound_t *obj_creditcardmerchant; //model

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_edit_object_v1_request_t;

__attribute__((deprecated)) creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_create(
    creditcardmerchant_request_compound_t *obj_creditcardmerchant
);

void creditcardmerchant_edit_object_v1_request_free(creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request);

creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_parseFromJSON(cJSON *creditcardmerchant_edit_object_v1_requestJSON);

cJSON *creditcardmerchant_edit_object_v1_request_convertToJSON(creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request);

#endif /* _creditcardmerchant_edit_object_v1_request_H_ */


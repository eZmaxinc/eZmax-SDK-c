/*
 * billingentityinternalproduct_request.h
 *
 * A Billingentityinternalproduct Object
 */

#ifndef _billingentityinternalproduct_request_H_
#define _billingentityinternalproduct_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternalproduct_request_t billingentityinternalproduct_request_t;




typedef struct billingentityinternalproduct_request_t {
    int pki_billingentityinternalproduct_id; //numeric
    int fki_ezmaxproduct_id; //numeric
    int fki_billingentityexternal_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternalproduct_request_t;

__attribute__((deprecated)) billingentityinternalproduct_request_t *billingentityinternalproduct_request_create(
    int pki_billingentityinternalproduct_id,
    int fki_ezmaxproduct_id,
    int fki_billingentityexternal_id
);

void billingentityinternalproduct_request_free(billingentityinternalproduct_request_t *billingentityinternalproduct_request);

billingentityinternalproduct_request_t *billingentityinternalproduct_request_parseFromJSON(cJSON *billingentityinternalproduct_requestJSON);

cJSON *billingentityinternalproduct_request_convertToJSON(billingentityinternalproduct_request_t *billingentityinternalproduct_request);

#endif /* _billingentityinternalproduct_request_H_ */


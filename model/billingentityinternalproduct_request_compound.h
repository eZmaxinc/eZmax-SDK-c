/*
 * billingentityinternalproduct_request_compound.h
 *
 * A Billingentityinternalproduct Object and children
 */

#ifndef _billingentityinternalproduct_request_compound_H_
#define _billingentityinternalproduct_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternalproduct_request_compound_t billingentityinternalproduct_request_compound_t;




typedef struct billingentityinternalproduct_request_compound_t {
    int pki_billingentityinternalproduct_id; //numeric
    int fki_ezmaxproduct_id; //numeric
    int fki_billingentityexternal_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternalproduct_request_compound_t;

__attribute__((deprecated)) billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_create(
    int pki_billingentityinternalproduct_id,
    int fki_ezmaxproduct_id,
    int fki_billingentityexternal_id
);

void billingentityinternalproduct_request_compound_free(billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound);

billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_parseFromJSON(cJSON *billingentityinternalproduct_request_compoundJSON);

cJSON *billingentityinternalproduct_request_compound_convertToJSON(billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound);

#endif /* _billingentityinternalproduct_request_compound_H_ */


/*
 * billingentityinternalproduct_response_compound.h
 *
 * A Billingentityinternalproduct Object
 */

#ifndef _billingentityinternalproduct_response_compound_H_
#define _billingentityinternalproduct_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternalproduct_response_compound_t billingentityinternalproduct_response_compound_t;

#include "billingentityinternalproduct_response.h"



typedef struct billingentityinternalproduct_response_compound_t {
    int pki_billingentityinternalproduct_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_ezmaxproduct_id; //numeric
    char *s_ezmaxproduct_description_x; // string
    int fki_billingentityexternal_id; //numeric
    char *s_billingentityexternal_description; // string

} billingentityinternalproduct_response_compound_t;

billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_create(
    int pki_billingentityinternalproduct_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description
);

void billingentityinternalproduct_response_compound_free(billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound);

billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_parseFromJSON(cJSON *billingentityinternalproduct_response_compoundJSON);

cJSON *billingentityinternalproduct_response_compound_convertToJSON(billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound);

#endif /* _billingentityinternalproduct_response_compound_H_ */


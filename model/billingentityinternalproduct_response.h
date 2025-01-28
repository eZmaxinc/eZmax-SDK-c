/*
 * billingentityinternalproduct_response.h
 *
 * A Billingentityinternalproduct Object
 */

#ifndef _billingentityinternalproduct_response_H_
#define _billingentityinternalproduct_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternalproduct_response_t billingentityinternalproduct_response_t;




typedef struct billingentityinternalproduct_response_t {
    int pki_billingentityinternalproduct_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_ezmaxproduct_id; //numeric
    char *s_ezmaxproduct_description_x; // string
    int fki_billingentityexternal_id; //numeric
    char *s_billingentityexternal_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternalproduct_response_t;

__attribute__((deprecated)) billingentityinternalproduct_response_t *billingentityinternalproduct_response_create(
    int pki_billingentityinternalproduct_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description
);

void billingentityinternalproduct_response_free(billingentityinternalproduct_response_t *billingentityinternalproduct_response);

billingentityinternalproduct_response_t *billingentityinternalproduct_response_parseFromJSON(cJSON *billingentityinternalproduct_responseJSON);

cJSON *billingentityinternalproduct_response_convertToJSON(billingentityinternalproduct_response_t *billingentityinternalproduct_response);

#endif /* _billingentityinternalproduct_response_H_ */


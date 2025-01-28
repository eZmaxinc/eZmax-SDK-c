/*
 * billingentityinternal_response_compound.h
 *
 * A Billingentityinternal Object
 */

#ifndef _billingentityinternal_response_compound_H_
#define _billingentityinternal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_response_compound_t billingentityinternal_response_compound_t;

#include "billingentityinternalproduct_response_compound.h"
#include "multilingual_billingentityinternal_description.h"



typedef struct billingentityinternal_response_compound_t {
    int pki_billingentityinternal_id; //numeric
    struct multilingual_billingentityinternal_description_t *obj_billingentityinternal_description; //model
    list_t *a_obj_billingentityinternalproduct; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternal_response_compound_t;

__attribute__((deprecated)) billingentityinternal_response_compound_t *billingentityinternal_response_compound_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description,
    list_t *a_obj_billingentityinternalproduct
);

void billingentityinternal_response_compound_free(billingentityinternal_response_compound_t *billingentityinternal_response_compound);

billingentityinternal_response_compound_t *billingentityinternal_response_compound_parseFromJSON(cJSON *billingentityinternal_response_compoundJSON);

cJSON *billingentityinternal_response_compound_convertToJSON(billingentityinternal_response_compound_t *billingentityinternal_response_compound);

#endif /* _billingentityinternal_response_compound_H_ */


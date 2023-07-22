/*
 * billingentityinternal_request_compound_all_of.h
 *
 * 
 */

#ifndef _billingentityinternal_request_compound_all_of_H_
#define _billingentityinternal_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_request_compound_all_of_t billingentityinternal_request_compound_all_of_t;

#include "billingentityinternalproduct_request_compound.h"



typedef struct billingentityinternal_request_compound_all_of_t {
    list_t *a_obj_billingentityinternalproduct; //nonprimitive container

} billingentityinternal_request_compound_all_of_t;

billingentityinternal_request_compound_all_of_t *billingentityinternal_request_compound_all_of_create(
    list_t *a_obj_billingentityinternalproduct
);

void billingentityinternal_request_compound_all_of_free(billingentityinternal_request_compound_all_of_t *billingentityinternal_request_compound_all_of);

billingentityinternal_request_compound_all_of_t *billingentityinternal_request_compound_all_of_parseFromJSON(cJSON *billingentityinternal_request_compound_all_ofJSON);

cJSON *billingentityinternal_request_compound_all_of_convertToJSON(billingentityinternal_request_compound_all_of_t *billingentityinternal_request_compound_all_of);

#endif /* _billingentityinternal_request_compound_all_of_H_ */


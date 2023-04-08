/*
 * billingentityinternal_request_compound.h
 *
 * A Billingentityinternal Object and children
 */

#ifndef _billingentityinternal_request_compound_H_
#define _billingentityinternal_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_request_compound_t billingentityinternal_request_compound_t;

#include "multilingual_billingentityinternal_description.h"



typedef struct billingentityinternal_request_compound_t {
    int pki_billingentityinternal_id; //numeric
    struct multilingual_billingentityinternal_description_t *obj_billingentityinternal_description; //model

} billingentityinternal_request_compound_t;

billingentityinternal_request_compound_t *billingentityinternal_request_compound_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
);

void billingentityinternal_request_compound_free(billingentityinternal_request_compound_t *billingentityinternal_request_compound);

billingentityinternal_request_compound_t *billingentityinternal_request_compound_parseFromJSON(cJSON *billingentityinternal_request_compoundJSON);

cJSON *billingentityinternal_request_compound_convertToJSON(billingentityinternal_request_compound_t *billingentityinternal_request_compound);

#endif /* _billingentityinternal_request_compound_H_ */


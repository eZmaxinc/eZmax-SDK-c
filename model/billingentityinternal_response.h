/*
 * billingentityinternal_response.h
 *
 * A Billingentityinternal Object
 */

#ifndef _billingentityinternal_response_H_
#define _billingentityinternal_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_response_t billingentityinternal_response_t;

#include "multilingual_billingentityinternal_description.h"



typedef struct billingentityinternal_response_t {
    int pki_billingentityinternal_id; //numeric
    struct multilingual_billingentityinternal_description_t *obj_billingentityinternal_description; //model

} billingentityinternal_response_t;

billingentityinternal_response_t *billingentityinternal_response_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
);

void billingentityinternal_response_free(billingentityinternal_response_t *billingentityinternal_response);

billingentityinternal_response_t *billingentityinternal_response_parseFromJSON(cJSON *billingentityinternal_responseJSON);

cJSON *billingentityinternal_response_convertToJSON(billingentityinternal_response_t *billingentityinternal_response);

#endif /* _billingentityinternal_response_H_ */


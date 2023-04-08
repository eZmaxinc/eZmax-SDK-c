/*
 * billingentityinternal_request.h
 *
 * A Billingentityinternal Object
 */

#ifndef _billingentityinternal_request_H_
#define _billingentityinternal_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_request_t billingentityinternal_request_t;

#include "multilingual_billingentityinternal_description.h"



typedef struct billingentityinternal_request_t {
    int pki_billingentityinternal_id; //numeric
    struct multilingual_billingentityinternal_description_t *obj_billingentityinternal_description; //model

} billingentityinternal_request_t;

billingentityinternal_request_t *billingentityinternal_request_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
);

void billingentityinternal_request_free(billingentityinternal_request_t *billingentityinternal_request);

billingentityinternal_request_t *billingentityinternal_request_parseFromJSON(cJSON *billingentityinternal_requestJSON);

cJSON *billingentityinternal_request_convertToJSON(billingentityinternal_request_t *billingentityinternal_request);

#endif /* _billingentityinternal_request_H_ */


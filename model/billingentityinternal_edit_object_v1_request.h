/*
 * billingentityinternal_edit_object_v1_request.h
 *
 * Request for PUT /1/object/billingentityinternal/{pkiBillingentityinternalID}
 */

#ifndef _billingentityinternal_edit_object_v1_request_H_
#define _billingentityinternal_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_edit_object_v1_request_t billingentityinternal_edit_object_v1_request_t;

#include "billingentityinternal_request_compound.h"



typedef struct billingentityinternal_edit_object_v1_request_t {
    struct billingentityinternal_request_compound_t *obj_billingentityinternal; //model

} billingentityinternal_edit_object_v1_request_t;

billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_create(
    billingentityinternal_request_compound_t *obj_billingentityinternal
);

void billingentityinternal_edit_object_v1_request_free(billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request);

billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request_parseFromJSON(cJSON *billingentityinternal_edit_object_v1_requestJSON);

cJSON *billingentityinternal_edit_object_v1_request_convertToJSON(billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request);

#endif /* _billingentityinternal_edit_object_v1_request_H_ */


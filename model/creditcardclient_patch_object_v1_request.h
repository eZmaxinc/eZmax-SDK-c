/*
 * creditcardclient_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/creditcardclient/{pkiCreditcardclientID}
 */

#ifndef _creditcardclient_patch_object_v1_request_H_
#define _creditcardclient_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_patch_object_v1_request_t creditcardclient_patch_object_v1_request_t;

#include "creditcardclient_request_patch.h"



typedef struct creditcardclient_patch_object_v1_request_t {
    struct creditcardclient_request_patch_t *obj_creditcardclient; //model

} creditcardclient_patch_object_v1_request_t;

creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_create(
    creditcardclient_request_patch_t *obj_creditcardclient
);

void creditcardclient_patch_object_v1_request_free(creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request);

creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_parseFromJSON(cJSON *creditcardclient_patch_object_v1_requestJSON);

cJSON *creditcardclient_patch_object_v1_request_convertToJSON(creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request);

#endif /* _creditcardclient_patch_object_v1_request_H_ */


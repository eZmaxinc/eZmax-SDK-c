/*
 * creditcardclient_edit_object_v1_request.h
 *
 * Request for PUT /1/object/creditcardclient/{pkiCreditcardclientID}
 */

#ifndef _creditcardclient_edit_object_v1_request_H_
#define _creditcardclient_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_edit_object_v1_request_t creditcardclient_edit_object_v1_request_t;

#include "creditcardclient_request_compound.h"



typedef struct creditcardclient_edit_object_v1_request_t {
    struct creditcardclient_request_compound_t *obj_creditcardclient; //model

} creditcardclient_edit_object_v1_request_t;

creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request_create(
    creditcardclient_request_compound_t *obj_creditcardclient
);

void creditcardclient_edit_object_v1_request_free(creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request);

creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request_parseFromJSON(cJSON *creditcardclient_edit_object_v1_requestJSON);

cJSON *creditcardclient_edit_object_v1_request_convertToJSON(creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request);

#endif /* _creditcardclient_edit_object_v1_request_H_ */


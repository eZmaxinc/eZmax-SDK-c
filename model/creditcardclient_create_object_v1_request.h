/*
 * creditcardclient_create_object_v1_request.h
 *
 * Request for POST /1/object/creditcardclient
 */

#ifndef _creditcardclient_create_object_v1_request_H_
#define _creditcardclient_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_create_object_v1_request_t creditcardclient_create_object_v1_request_t;

#include "creditcardclient_request_compound.h"



typedef struct creditcardclient_create_object_v1_request_t {
    list_t *a_obj_creditcardclient; //nonprimitive container

} creditcardclient_create_object_v1_request_t;

creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request_create(
    list_t *a_obj_creditcardclient
);

void creditcardclient_create_object_v1_request_free(creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request);

creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request_parseFromJSON(cJSON *creditcardclient_create_object_v1_requestJSON);

cJSON *creditcardclient_create_object_v1_request_convertToJSON(creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request);

#endif /* _creditcardclient_create_object_v1_request_H_ */


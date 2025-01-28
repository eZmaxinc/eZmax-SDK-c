/*
 * creditcardclient_create_object_v1_response.h
 *
 * Response for POST /1/object/creditcardclient
 */

#ifndef _creditcardclient_create_object_v1_response_H_
#define _creditcardclient_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_create_object_v1_response_t creditcardclient_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "creditcardclient_create_object_v1_response_m_payload.h"



typedef struct creditcardclient_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct creditcardclient_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardclient_create_object_v1_response_t;

__attribute__((deprecated)) creditcardclient_create_object_v1_response_t *creditcardclient_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    creditcardclient_create_object_v1_response_m_payload_t *m_payload
);

void creditcardclient_create_object_v1_response_free(creditcardclient_create_object_v1_response_t *creditcardclient_create_object_v1_response);

creditcardclient_create_object_v1_response_t *creditcardclient_create_object_v1_response_parseFromJSON(cJSON *creditcardclient_create_object_v1_responseJSON);

cJSON *creditcardclient_create_object_v1_response_convertToJSON(creditcardclient_create_object_v1_response_t *creditcardclient_create_object_v1_response);

#endif /* _creditcardclient_create_object_v1_response_H_ */


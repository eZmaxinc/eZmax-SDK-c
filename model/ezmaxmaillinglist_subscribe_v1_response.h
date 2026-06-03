/*
 * ezmaxmaillinglist_subscribe_v1_response.h
 *
 * Response for POST /1/module/ezmaxmaillinglist/subscribe
 */

#ifndef _ezmaxmaillinglist_subscribe_v1_response_H_
#define _ezmaxmaillinglist_subscribe_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxmaillinglist_subscribe_v1_response_t ezmaxmaillinglist_subscribe_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezmaxmaillinglist_subscribe_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxmaillinglist_subscribe_v1_response_t;

__attribute__((deprecated)) ezmaxmaillinglist_subscribe_v1_response_t *ezmaxmaillinglist_subscribe_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezmaxmaillinglist_subscribe_v1_response_free(ezmaxmaillinglist_subscribe_v1_response_t *ezmaxmaillinglist_subscribe_v1_response);

ezmaxmaillinglist_subscribe_v1_response_t *ezmaxmaillinglist_subscribe_v1_response_parseFromJSON(cJSON *ezmaxmaillinglist_subscribe_v1_responseJSON);

cJSON *ezmaxmaillinglist_subscribe_v1_response_convertToJSON(ezmaxmaillinglist_subscribe_v1_response_t *ezmaxmaillinglist_subscribe_v1_response);

#endif /* _ezmaxmaillinglist_subscribe_v1_response_H_ */


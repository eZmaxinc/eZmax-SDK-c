/*
 * ezmaxmaillinglist_subscribe_v1_request.h
 *
 * Request for POST /1/module/ezmaxmaillinglist/subscribe
 */

#ifndef _ezmaxmaillinglist_subscribe_v1_request_H_
#define _ezmaxmaillinglist_subscribe_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxmaillinglist_subscribe_v1_request_t ezmaxmaillinglist_subscribe_v1_request_t;




typedef struct ezmaxmaillinglist_subscribe_v1_request_t {
    list_t *a_pki_ezmaxmaillinglist_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxmaillinglist_subscribe_v1_request_t;

__attribute__((deprecated)) ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_create(
    list_t *a_pki_ezmaxmaillinglist_id
);

void ezmaxmaillinglist_subscribe_v1_request_free(ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request);

ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request_parseFromJSON(cJSON *ezmaxmaillinglist_subscribe_v1_requestJSON);

cJSON *ezmaxmaillinglist_subscribe_v1_request_convertToJSON(ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request);

#endif /* _ezmaxmaillinglist_subscribe_v1_request_H_ */


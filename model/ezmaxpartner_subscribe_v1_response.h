/*
 * ezmaxpartner_subscribe_v1_response.h
 *
 * Request for POST /1/module/ezmaxmaillinglist/subscribe
 */

#ifndef _ezmaxpartner_subscribe_v1_response_H_
#define _ezmaxpartner_subscribe_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxpartner_subscribe_v1_response_t ezmaxpartner_subscribe_v1_response_t;




typedef struct ezmaxpartner_subscribe_v1_response_t {
    char *s_external_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxpartner_subscribe_v1_response_t;

__attribute__((deprecated)) ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_create(
    char *s_external_id
);

void ezmaxpartner_subscribe_v1_response_free(ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response);

ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_parseFromJSON(cJSON *ezmaxpartner_subscribe_v1_responseJSON);

cJSON *ezmaxpartner_subscribe_v1_response_convertToJSON(ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response);

#endif /* _ezmaxpartner_subscribe_v1_response_H_ */


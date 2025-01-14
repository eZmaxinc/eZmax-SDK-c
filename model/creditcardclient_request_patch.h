/*
 * creditcardclient_request_patch.h
 *
 * A Creditcardclient Object
 */

#ifndef _creditcardclient_request_patch_H_
#define _creditcardclient_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_request_patch_t creditcardclient_request_patch_t;




typedef struct creditcardclient_request_patch_t {
    int b_creditcardclientrelation_isdefault; //boolean

} creditcardclient_request_patch_t;

creditcardclient_request_patch_t *creditcardclient_request_patch_create(
    int b_creditcardclientrelation_isdefault
);

void creditcardclient_request_patch_free(creditcardclient_request_patch_t *creditcardclient_request_patch);

creditcardclient_request_patch_t *creditcardclient_request_patch_parseFromJSON(cJSON *creditcardclient_request_patchJSON);

cJSON *creditcardclient_request_patch_convertToJSON(creditcardclient_request_patch_t *creditcardclient_request_patch);

#endif /* _creditcardclient_request_patch_H_ */


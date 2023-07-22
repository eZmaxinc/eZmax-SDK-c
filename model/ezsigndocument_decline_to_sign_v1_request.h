/*
 * ezsigndocument_decline_to_sign_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/declineToSign
 */

#ifndef _ezsigndocument_decline_to_sign_v1_request_H_
#define _ezsigndocument_decline_to_sign_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_decline_to_sign_v1_request_t ezsigndocument_decline_to_sign_v1_request_t;




typedef struct ezsigndocument_decline_to_sign_v1_request_t {
    char *s_reason; // string

} ezsigndocument_decline_to_sign_v1_request_t;

ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_create(
    char *s_reason
);

void ezsigndocument_decline_to_sign_v1_request_free(ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request);

ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_parseFromJSON(cJSON *ezsigndocument_decline_to_sign_v1_requestJSON);

cJSON *ezsigndocument_decline_to_sign_v1_request_convertToJSON(ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request);

#endif /* _ezsigndocument_decline_to_sign_v1_request_H_ */


/*
 * custom_communicationsender_request.h
 *
 * A Communicationsender Object
 */

#ifndef _custom_communicationsender_request_H_
#define _custom_communicationsender_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_communicationsender_request_t custom_communicationsender_request_t;




typedef struct custom_communicationsender_request_t {
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_mailboxshared_id; //numeric
    int fki_user_id; //numeric

} custom_communicationsender_request_t;

custom_communicationsender_request_t *custom_communicationsender_request_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_mailboxshared_id,
    int fki_user_id
);

void custom_communicationsender_request_free(custom_communicationsender_request_t *custom_communicationsender_request);

custom_communicationsender_request_t *custom_communicationsender_request_parseFromJSON(cJSON *custom_communicationsender_requestJSON);

cJSON *custom_communicationsender_request_convertToJSON(custom_communicationsender_request_t *custom_communicationsender_request);

#endif /* _custom_communicationsender_request_H_ */


/*
 * discussion_chat_v1_request.h
 *
 * Request for POST /1/object/discussion/chat
 */

#ifndef _discussion_chat_v1_request_H_
#define _discussion_chat_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_chat_v1_request_t discussion_chat_v1_request_t;

#include "field_e_discussion_robot.h"



typedef struct discussion_chat_v1_request_t {
    int fki_discussion_id; //numeric
    ezmax_api_definition__full_field_e_discussion_robot__e e_discussion_robot; //referenced enum
    char *t_discussion_message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_chat_v1_request_t;

__attribute__((deprecated)) discussion_chat_v1_request_t *discussion_chat_v1_request_create(
    int fki_discussion_id,
    ezmax_api_definition__full_field_e_discussion_robot__e e_discussion_robot,
    char *t_discussion_message
);

void discussion_chat_v1_request_free(discussion_chat_v1_request_t *discussion_chat_v1_request);

discussion_chat_v1_request_t *discussion_chat_v1_request_parseFromJSON(cJSON *discussion_chat_v1_requestJSON);

cJSON *discussion_chat_v1_request_convertToJSON(discussion_chat_v1_request_t *discussion_chat_v1_request);

#endif /* _discussion_chat_v1_request_H_ */


/*
 * discussion_chat_v1_200_response.h
 *
 * 
 */

#ifndef _discussion_chat_v1_200_response_H_
#define _discussion_chat_v1_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_chat_v1_200_response_t discussion_chat_v1_200_response_t;




typedef struct discussion_chat_v1_200_response_t {
    char *event; // string
    char *data; // string

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_chat_v1_200_response_t;

__attribute__((deprecated)) discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_create(
    char *event,
    char *data
);

void discussion_chat_v1_200_response_free(discussion_chat_v1_200_response_t *discussion_chat_v1_200_response);

discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_parseFromJSON(cJSON *discussion_chat_v1_200_responseJSON);

cJSON *discussion_chat_v1_200_response_convertToJSON(discussion_chat_v1_200_response_t *discussion_chat_v1_200_response);

#endif /* _discussion_chat_v1_200_response_H_ */


/*
 * documentation_subscribe_v1_response.h
 *
 * Request for POST /1/module/ezmaxmaillinglist/subscribe
 */

#ifndef _documentation_subscribe_v1_response_H_
#define _documentation_subscribe_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documentation_subscribe_v1_response_t documentation_subscribe_v1_response_t;




typedef struct documentation_subscribe_v1_response_t {
    char *s_external_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} documentation_subscribe_v1_response_t;

__attribute__((deprecated)) documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_create(
    char *s_external_id
);

void documentation_subscribe_v1_response_free(documentation_subscribe_v1_response_t *documentation_subscribe_v1_response);

documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_parseFromJSON(cJSON *documentation_subscribe_v1_responseJSON);

cJSON *documentation_subscribe_v1_response_convertToJSON(documentation_subscribe_v1_response_t *documentation_subscribe_v1_response);

#endif /* _documentation_subscribe_v1_response_H_ */


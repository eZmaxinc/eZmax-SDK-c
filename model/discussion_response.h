/*
 * discussion_response.h
 *
 * A Discussion Object
 */

#ifndef _discussion_response_H_
#define _discussion_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_response_t discussion_response_t;

#include "custom_discussionconfiguration_response.h"



typedef struct discussion_response_t {
    int pki_discussion_id; //numeric
    char *s_discussion_description; // string
    int b_discussion_closed; //boolean
    char *dt_discussion_lastread; // string
    int i_discussionmessage_count; //numeric
    int i_discussionmessage_countunread; //numeric
    struct custom_discussionconfiguration_response_t *obj_discussionconfiguration; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_response_t;

__attribute__((deprecated)) discussion_response_t *discussion_response_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed,
    char *dt_discussion_lastread,
    int i_discussionmessage_count,
    int i_discussionmessage_countunread,
    custom_discussionconfiguration_response_t *obj_discussionconfiguration
);

void discussion_response_free(discussion_response_t *discussion_response);

discussion_response_t *discussion_response_parseFromJSON(cJSON *discussion_responseJSON);

cJSON *discussion_response_convertToJSON(discussion_response_t *discussion_response);

#endif /* _discussion_response_H_ */


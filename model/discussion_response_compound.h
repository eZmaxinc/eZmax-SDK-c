/*
 * discussion_response_compound.h
 *
 * A Discussion Object
 */

#ifndef _discussion_response_compound_H_
#define _discussion_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_response_compound_t discussion_response_compound_t;

#include "custom_discussionconfiguration_response.h"
#include "discussionmembership_response_compound.h"
#include "discussionmessage_response_compound.h"



typedef struct discussion_response_compound_t {
    int pki_discussion_id; //numeric
    char *s_discussion_description; // string
    int b_discussion_closed; //boolean
    char *dt_discussion_lastread; // string
    int i_discussionmessage_count; //numeric
    int i_discussionmessage_countunread; //numeric
    struct custom_discussionconfiguration_response_t *obj_discussionconfiguration; //model
    list_t *a_obj_discussionmembership; //nonprimitive container
    list_t *a_obj_discussionmessage; //nonprimitive container

} discussion_response_compound_t;

discussion_response_compound_t *discussion_response_compound_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed,
    char *dt_discussion_lastread,
    int i_discussionmessage_count,
    int i_discussionmessage_countunread,
    custom_discussionconfiguration_response_t *obj_discussionconfiguration,
    list_t *a_obj_discussionmembership,
    list_t *a_obj_discussionmessage
);

void discussion_response_compound_free(discussion_response_compound_t *discussion_response_compound);

discussion_response_compound_t *discussion_response_compound_parseFromJSON(cJSON *discussion_response_compoundJSON);

cJSON *discussion_response_compound_convertToJSON(discussion_response_compound_t *discussion_response_compound);

#endif /* _discussion_response_compound_H_ */


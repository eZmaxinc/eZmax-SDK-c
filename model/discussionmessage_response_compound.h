/*
 * discussionmessage_response_compound.h
 *
 * A Discussionmessage Object and children
 */

#ifndef _discussionmessage_response_compound_H_
#define _discussionmessage_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_response_compound_t discussionmessage_response_compound_t;

#include "common_audit.h"
#include "field_e_discussionmessage_status.h"



typedef struct discussionmessage_response_compound_t {
    int pki_discussionmessage_id; //numeric
    int fki_discussion_id; //numeric
    int fki_discussionmembership_id; //numeric
    int fki_discussionmembership_id_actionrequired; //numeric
    ezmax_api_definition__full_field_e_discussionmessage_status__e e_discussionmessage_status; //referenced enum
    char *t_discussionmessage_content; // string
    char *s_discussionmessage_creatorname; // string
    char *s_discussionmessage_actionrequiredname; // string
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmessage_response_compound_t;

__attribute__((deprecated)) discussionmessage_response_compound_t *discussionmessage_response_compound_create(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id,
    int fki_discussionmembership_id_actionrequired,
    ezmax_api_definition__full_field_e_discussionmessage_status__e e_discussionmessage_status,
    char *t_discussionmessage_content,
    char *s_discussionmessage_creatorname,
    char *s_discussionmessage_actionrequiredname,
    common_audit_t *obj_audit
);

void discussionmessage_response_compound_free(discussionmessage_response_compound_t *discussionmessage_response_compound);

discussionmessage_response_compound_t *discussionmessage_response_compound_parseFromJSON(cJSON *discussionmessage_response_compoundJSON);

cJSON *discussionmessage_response_compound_convertToJSON(discussionmessage_response_compound_t *discussionmessage_response_compound);

#endif /* _discussionmessage_response_compound_H_ */


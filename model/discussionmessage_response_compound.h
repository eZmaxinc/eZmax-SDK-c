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

// Enum  for discussionmessage_response_compound

typedef enum  { ezmax_api_definition__full_discussionmessage_response_compound__NULL = 0, ezmax_api_definition__full_discussionmessage_response_compound___New, ezmax_api_definition__full_discussionmessage_response_compound__Edited, ezmax_api_definition__full_discussionmessage_response_compound__Deleted } ezmax_api_definition__full_discussionmessage_response_compound__e;

char* discussionmessage_response_compound_e_discussionmessage_status_ToString(ezmax_api_definition__full_discussionmessage_response_compound__e e_discussionmessage_status);

ezmax_api_definition__full_discussionmessage_response_compound__e discussionmessage_response_compound_e_discussionmessage_status_FromString(char* e_discussionmessage_status);



typedef struct discussionmessage_response_compound_t {
    int pki_discussionmessage_id; //numeric
    int fki_discussion_id; //numeric
    int fki_discussionmembership_id; //numeric
    int fki_discussionmembership_id_actionrequired; //numeric
    field_e_discussionmessage_status_t *e_discussionmessage_status; // custom
    char *t_discussionmessage_content; // string
    char *s_discussionmessage_creatorname; // string
    char *s_discussionmessage_actionrequiredname; // string
    struct common_audit_t *obj_audit; //model

} discussionmessage_response_compound_t;

discussionmessage_response_compound_t *discussionmessage_response_compound_create(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id,
    int fki_discussionmembership_id_actionrequired,
    field_e_discussionmessage_status_t *e_discussionmessage_status,
    char *t_discussionmessage_content,
    char *s_discussionmessage_creatorname,
    char *s_discussionmessage_actionrequiredname,
    common_audit_t *obj_audit
);

void discussionmessage_response_compound_free(discussionmessage_response_compound_t *discussionmessage_response_compound);

discussionmessage_response_compound_t *discussionmessage_response_compound_parseFromJSON(cJSON *discussionmessage_response_compoundJSON);

cJSON *discussionmessage_response_compound_convertToJSON(discussionmessage_response_compound_t *discussionmessage_response_compound);

#endif /* _discussionmessage_response_compound_H_ */


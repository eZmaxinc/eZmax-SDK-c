/*
 * email_request_compound.h
 *
 * An Email Object and children to create a complete structure
 */

#ifndef _email_request_compound_H_
#define _email_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_request_compound_t email_request_compound_t;




typedef struct email_request_compound_t {
    int pki_email_id; //numeric
    int fki_emailtype_id; //numeric
    char *s_email_address; // string

} email_request_compound_t;

email_request_compound_t *email_request_compound_create(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
);

void email_request_compound_free(email_request_compound_t *email_request_compound);

email_request_compound_t *email_request_compound_parseFromJSON(cJSON *email_request_compoundJSON);

cJSON *email_request_compound_convertToJSON(email_request_compound_t *email_request_compound);

#endif /* _email_request_compound_H_ */


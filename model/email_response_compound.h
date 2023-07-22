/*
 * email_response_compound.h
 *
 * An Email Object and children to create a complete structure
 */

#ifndef _email_response_compound_H_
#define _email_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_response_compound_t email_response_compound_t;




typedef struct email_response_compound_t {
    int pki_email_id; //numeric
    int fki_emailtype_id; //numeric
    char *s_email_address; // string

} email_response_compound_t;

email_response_compound_t *email_response_compound_create(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
);

void email_response_compound_free(email_response_compound_t *email_response_compound);

email_response_compound_t *email_response_compound_parseFromJSON(cJSON *email_response_compoundJSON);

cJSON *email_response_compound_convertToJSON(email_response_compound_t *email_response_compound);

#endif /* _email_response_compound_H_ */


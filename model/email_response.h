/*
 * email_response.h
 *
 * An Email Object
 */

#ifndef _email_response_H_
#define _email_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_response_t email_response_t;




typedef struct email_response_t {
    int pki_email_id; //numeric
    int fki_emailtype_id; //numeric
    char *s_email_address; // string

} email_response_t;

email_response_t *email_response_create(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
);

void email_response_free(email_response_t *email_response);

email_response_t *email_response_parseFromJSON(cJSON *email_responseJSON);

cJSON *email_response_convertToJSON(email_response_t *email_response);

#endif /* _email_response_H_ */


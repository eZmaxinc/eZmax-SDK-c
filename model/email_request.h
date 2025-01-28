/*
 * email_request.h
 *
 * An Email Object
 */

#ifndef _email_request_H_
#define _email_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_request_t email_request_t;




typedef struct email_request_t {
    int pki_email_id; //numeric
    int fki_emailtype_id; //numeric
    char *s_email_address; // string

    int _library_owned; // Is the library responsible for freeing this object?
} email_request_t;

__attribute__((deprecated)) email_request_t *email_request_create(
    int pki_email_id,
    int fki_emailtype_id,
    char *s_email_address
);

void email_request_free(email_request_t *email_request);

email_request_t *email_request_parseFromJSON(cJSON *email_requestJSON);

cJSON *email_request_convertToJSON(email_request_t *email_request);

#endif /* _email_request_H_ */


/*
 * emailstatic_response.h
 *
 * An Emailstatic Object
 */

#ifndef _emailstatic_response_H_
#define _emailstatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct emailstatic_response_t emailstatic_response_t;




typedef struct emailstatic_response_t {
    int pki_emailstatic_id; //numeric
    char *s_emailstatic_address; // string

} emailstatic_response_t;

emailstatic_response_t *emailstatic_response_create(
    int pki_emailstatic_id,
    char *s_emailstatic_address
);

void emailstatic_response_free(emailstatic_response_t *emailstatic_response);

emailstatic_response_t *emailstatic_response_parseFromJSON(cJSON *emailstatic_responseJSON);

cJSON *emailstatic_response_convertToJSON(emailstatic_response_t *emailstatic_response);

#endif /* _emailstatic_response_H_ */


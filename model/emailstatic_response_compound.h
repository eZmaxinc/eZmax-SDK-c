/*
 * emailstatic_response_compound.h
 *
 * An Emailstatic Object and children to create a complete structure
 */

#ifndef _emailstatic_response_compound_H_
#define _emailstatic_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct emailstatic_response_compound_t emailstatic_response_compound_t;




typedef struct emailstatic_response_compound_t {
    int pki_emailstatic_id; //numeric
    char *s_emailstatic_address; // string

} emailstatic_response_compound_t;

emailstatic_response_compound_t *emailstatic_response_compound_create(
    int pki_emailstatic_id,
    char *s_emailstatic_address
);

void emailstatic_response_compound_free(emailstatic_response_compound_t *emailstatic_response_compound);

emailstatic_response_compound_t *emailstatic_response_compound_parseFromJSON(cJSON *emailstatic_response_compoundJSON);

cJSON *emailstatic_response_compound_convertToJSON(emailstatic_response_compound_t *emailstatic_response_compound);

#endif /* _emailstatic_response_compound_H_ */


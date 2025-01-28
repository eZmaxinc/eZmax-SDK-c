/*
 * domain_request_compound.h
 *
 * A Domain Object and children
 */

#ifndef _domain_request_compound_H_
#define _domain_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_request_compound_t domain_request_compound_t;




typedef struct domain_request_compound_t {
    int pki_domain_id; //numeric
    char *s_domain_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_request_compound_t;

__attribute__((deprecated)) domain_request_compound_t *domain_request_compound_create(
    int pki_domain_id,
    char *s_domain_name
);

void domain_request_compound_free(domain_request_compound_t *domain_request_compound);

domain_request_compound_t *domain_request_compound_parseFromJSON(cJSON *domain_request_compoundJSON);

cJSON *domain_request_compound_convertToJSON(domain_request_compound_t *domain_request_compound);

#endif /* _domain_request_compound_H_ */


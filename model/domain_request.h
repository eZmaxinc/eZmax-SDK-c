/*
 * domain_request.h
 *
 * A Domain Object
 */

#ifndef _domain_request_H_
#define _domain_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_request_t domain_request_t;




typedef struct domain_request_t {
    int pki_domain_id; //numeric
    char *s_domain_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_request_t;

__attribute__((deprecated)) domain_request_t *domain_request_create(
    int pki_domain_id,
    char *s_domain_name
);

void domain_request_free(domain_request_t *domain_request);

domain_request_t *domain_request_parseFromJSON(cJSON *domain_requestJSON);

cJSON *domain_request_convertToJSON(domain_request_t *domain_request);

#endif /* _domain_request_H_ */


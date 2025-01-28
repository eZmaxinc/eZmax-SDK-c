/*
 * domain_response.h
 *
 * A Domain Object
 */

#ifndef _domain_response_H_
#define _domain_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_response_t domain_response_t;

#include "common_audit.h"



typedef struct domain_response_t {
    int pki_domain_id; //numeric
    char *s_domain_name; // string
    int b_domain_validdkim; //boolean
    int b_domain_validmailfrom; //boolean
    int b_domain_validcustomer; //boolean
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} domain_response_t;

__attribute__((deprecated)) domain_response_t *domain_response_create(
    int pki_domain_id,
    char *s_domain_name,
    int b_domain_validdkim,
    int b_domain_validmailfrom,
    int b_domain_validcustomer,
    common_audit_t *obj_audit
);

void domain_response_free(domain_response_t *domain_response);

domain_response_t *domain_response_parseFromJSON(cJSON *domain_responseJSON);

cJSON *domain_response_convertToJSON(domain_response_t *domain_response);

#endif /* _domain_response_H_ */


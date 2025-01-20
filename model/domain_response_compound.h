/*
 * domain_response_compound.h
 *
 * A Domain Object
 */

#ifndef _domain_response_compound_H_
#define _domain_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_response_compound_t domain_response_compound_t;

#include "common_audit.h"
#include "object.h"



typedef struct domain_response_compound_t {
    int pki_domain_id; //numeric
    char *s_domain_name; // string
    int b_domain_validdkim; //boolean
    int b_domain_validmailfrom; //boolean
    int b_domain_validcustomer; //boolean
    struct common_audit_t *obj_audit; //model
    list_t *a_obj_dnsrecord; //nonprimitive container

} domain_response_compound_t;

domain_response_compound_t *domain_response_compound_create(
    int pki_domain_id,
    char *s_domain_name,
    int b_domain_validdkim,
    int b_domain_validmailfrom,
    int b_domain_validcustomer,
    common_audit_t *obj_audit,
    list_t *a_obj_dnsrecord
);

void domain_response_compound_free(domain_response_compound_t *domain_response_compound);

domain_response_compound_t *domain_response_compound_parseFromJSON(cJSON *domain_response_compoundJSON);

cJSON *domain_response_compound_convertToJSON(domain_response_compound_t *domain_response_compound);

#endif /* _domain_response_compound_H_ */


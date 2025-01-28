/*
 * ezsignuser_response_compound.h
 *
 * A Ezsignuser Object
 */

#ifndef _ezsignuser_response_compound_H_
#define _ezsignuser_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_response_compound_t ezsignuser_response_compound_t;

#include "common_audit.h"
#include "contact_response_compound.h"



typedef struct ezsignuser_response_compound_t {
    int pki_ezsignuser_id; //numeric
    int fki_contact_id; //numeric
    struct contact_response_compound_t *obj_contact; //model
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignuser_response_compound_t;

__attribute__((deprecated)) ezsignuser_response_compound_t *ezsignuser_response_compound_create(
    int pki_ezsignuser_id,
    int fki_contact_id,
    contact_response_compound_t *obj_contact,
    common_audit_t *obj_audit
);

void ezsignuser_response_compound_free(ezsignuser_response_compound_t *ezsignuser_response_compound);

ezsignuser_response_compound_t *ezsignuser_response_compound_parseFromJSON(cJSON *ezsignuser_response_compoundJSON);

cJSON *ezsignuser_response_compound_convertToJSON(ezsignuser_response_compound_t *ezsignuser_response_compound);

#endif /* _ezsignuser_response_compound_H_ */


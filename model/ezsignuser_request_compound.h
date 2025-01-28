/*
 * ezsignuser_request_compound.h
 *
 * A Ezsignuser Object and children
 */

#ifndef _ezsignuser_request_compound_H_
#define _ezsignuser_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_request_compound_t ezsignuser_request_compound_t;

#include "contact_request_compound_v2.h"



typedef struct ezsignuser_request_compound_t {
    int pki_ezsignuser_id; //numeric
    int fki_contact_id; //numeric
    struct contact_request_compound_v2_t *obj_contact; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignuser_request_compound_t;

__attribute__((deprecated)) ezsignuser_request_compound_t *ezsignuser_request_compound_create(
    int pki_ezsignuser_id,
    int fki_contact_id,
    contact_request_compound_v2_t *obj_contact
);

void ezsignuser_request_compound_free(ezsignuser_request_compound_t *ezsignuser_request_compound);

ezsignuser_request_compound_t *ezsignuser_request_compound_parseFromJSON(cJSON *ezsignuser_request_compoundJSON);

cJSON *ezsignuser_request_compound_convertToJSON(ezsignuser_request_compound_t *ezsignuser_request_compound);

#endif /* _ezsignuser_request_compound_H_ */


/*
 * ezsignuser_request.h
 *
 * A Ezsignuser Object
 */

#ifndef _ezsignuser_request_H_
#define _ezsignuser_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_request_t ezsignuser_request_t;

#include "contact_request_compound_v2.h"



typedef struct ezsignuser_request_t {
    int pki_ezsignuser_id; //numeric
    int fki_contact_id; //numeric
    struct contact_request_compound_v2_t *obj_contact; //model

} ezsignuser_request_t;

ezsignuser_request_t *ezsignuser_request_create(
    int pki_ezsignuser_id,
    int fki_contact_id,
    contact_request_compound_v2_t *obj_contact
);

void ezsignuser_request_free(ezsignuser_request_t *ezsignuser_request);

ezsignuser_request_t *ezsignuser_request_parseFromJSON(cJSON *ezsignuser_requestJSON);

cJSON *ezsignuser_request_convertToJSON(ezsignuser_request_t *ezsignuser_request);

#endif /* _ezsignuser_request_H_ */


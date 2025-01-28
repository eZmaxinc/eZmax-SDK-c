/*
 * ezsignsigningreason_request.h
 *
 * A Ezsignsigningreason Object
 */

#ifndef _ezsignsigningreason_request_H_
#define _ezsignsigningreason_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_request_t ezsignsigningreason_request_t;

#include "multilingual_ezsignsigningreason_description.h"



typedef struct ezsignsigningreason_request_t {
    int pki_ezsignsigningreason_id; //numeric
    struct multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description; //model
    int b_ezsignsigningreason_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_request_t;

__attribute__((deprecated)) ezsignsigningreason_request_t *ezsignsigningreason_request_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
);

void ezsignsigningreason_request_free(ezsignsigningreason_request_t *ezsignsigningreason_request);

ezsignsigningreason_request_t *ezsignsigningreason_request_parseFromJSON(cJSON *ezsignsigningreason_requestJSON);

cJSON *ezsignsigningreason_request_convertToJSON(ezsignsigningreason_request_t *ezsignsigningreason_request);

#endif /* _ezsignsigningreason_request_H_ */


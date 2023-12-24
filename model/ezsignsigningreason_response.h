/*
 * ezsignsigningreason_response.h
 *
 * A Ezsignsigningreason Object
 */

#ifndef _ezsignsigningreason_response_H_
#define _ezsignsigningreason_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_response_t ezsignsigningreason_response_t;

#include "multilingual_ezsignsigningreason_description.h"



typedef struct ezsignsigningreason_response_t {
    int pki_ezsignsigningreason_id; //numeric
    struct multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description; //model
    int b_ezsignsigningreason_isactive; //boolean

} ezsignsigningreason_response_t;

ezsignsigningreason_response_t *ezsignsigningreason_response_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
);

void ezsignsigningreason_response_free(ezsignsigningreason_response_t *ezsignsigningreason_response);

ezsignsigningreason_response_t *ezsignsigningreason_response_parseFromJSON(cJSON *ezsignsigningreason_responseJSON);

cJSON *ezsignsigningreason_response_convertToJSON(ezsignsigningreason_response_t *ezsignsigningreason_response);

#endif /* _ezsignsigningreason_response_H_ */


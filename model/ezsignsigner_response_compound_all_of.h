/*
 * ezsignsigner_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignsigner_response_compound_all_of_H_
#define _ezsignsigner_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_response_compound_all_of_t ezsignsigner_response_compound_all_of_t;

#include "ezsignsigner_response_compound_contact.h"



typedef struct ezsignsigner_response_compound_all_of_t {
    struct ezsignsigner_response_compound_contact_t *obj_contact; //model

} ezsignsigner_response_compound_all_of_t;

ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of_create(
    ezsignsigner_response_compound_contact_t *obj_contact
);

void ezsignsigner_response_compound_all_of_free(ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of);

ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of_parseFromJSON(cJSON *ezsignsigner_response_compound_all_ofJSON);

cJSON *ezsignsigner_response_compound_all_of_convertToJSON(ezsignsigner_response_compound_all_of_t *ezsignsigner_response_compound_all_of);

#endif /* _ezsignsigner_response_compound_all_of_H_ */


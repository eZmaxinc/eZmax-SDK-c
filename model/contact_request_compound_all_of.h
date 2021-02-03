/*
 * contact_request_compound_all_of.h
 *
 * 
 */

#ifndef _contact_request_compound_all_of_H_
#define _contact_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_request_compound_all_of_t contact_request_compound_all_of_t;

#include "contactinformations_request_compound.h"



typedef struct contact_request_compound_all_of_t {
    struct contactinformations_request_compound_t *obj_contactinformations; //model

} contact_request_compound_all_of_t;

contact_request_compound_all_of_t *contact_request_compound_all_of_create(
    contactinformations_request_compound_t *obj_contactinformations
);

void contact_request_compound_all_of_free(contact_request_compound_all_of_t *contact_request_compound_all_of);

contact_request_compound_all_of_t *contact_request_compound_all_of_parseFromJSON(cJSON *contact_request_compound_all_ofJSON);

cJSON *contact_request_compound_all_of_convertToJSON(contact_request_compound_all_of_t *contact_request_compound_all_of);

#endif /* _contact_request_compound_all_of_H_ */


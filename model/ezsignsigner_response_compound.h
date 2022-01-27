/*
 * ezsignsigner_response_compound.h
 *
 * An Ezsignsigner Object and children to create a complete structure
 */

#ifndef _ezsignsigner_response_compound_H_
#define _ezsignsigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_response_compound_t ezsignsigner_response_compound_t;

#include "ezsignsigner_response.h"
#include "ezsignsigner_response_compound_all_of.h"
#include "ezsignsigner_response_compound_contact.h"



typedef struct ezsignsigner_response_compound_t {
    struct ezsignsigner_response_compound_contact_t *obj_contact; //model
    int pki_ezsignsigner_id; //numeric
    int fki_taxassignment_id; //numeric
    int fki_secretquestion_id; //numeric
    int fki_userlogintype_id; //numeric
    char *s_userlogintype_description_x; // string

} ezsignsigner_response_compound_t;

ezsignsigner_response_compound_t *ezsignsigner_response_compound_create(
    ezsignsigner_response_compound_contact_t *obj_contact,
    int pki_ezsignsigner_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x
);

void ezsignsigner_response_compound_free(ezsignsigner_response_compound_t *ezsignsigner_response_compound);

ezsignsigner_response_compound_t *ezsignsigner_response_compound_parseFromJSON(cJSON *ezsignsigner_response_compoundJSON);

cJSON *ezsignsigner_response_compound_convertToJSON(ezsignsigner_response_compound_t *ezsignsigner_response_compound);

#endif /* _ezsignsigner_response_compound_H_ */


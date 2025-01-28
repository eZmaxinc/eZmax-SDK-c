/*
 * contact_request_compound.h
 *
 * A Contact Object and children to create a complete structure
 */

#ifndef _contact_request_compound_H_
#define _contact_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_request_compound_t contact_request_compound_t;

#include "contactinformations_request_compound.h"



typedef struct contact_request_compound_t {
    int fki_contacttitle_id; //numeric
    int fki_language_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string
    char *dt_contact_birthdate; // string
    struct contactinformations_request_compound_t *obj_contactinformations; //model

    int _library_owned; // Is the library responsible for freeing this object?
} contact_request_compound_t;

__attribute__((deprecated)) contact_request_compound_t *contact_request_compound_create(
    int fki_contacttitle_id,
    int fki_language_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate,
    contactinformations_request_compound_t *obj_contactinformations
);

void contact_request_compound_free(contact_request_compound_t *contact_request_compound);

contact_request_compound_t *contact_request_compound_parseFromJSON(cJSON *contact_request_compoundJSON);

cJSON *contact_request_compound_convertToJSON(contact_request_compound_t *contact_request_compound);

#endif /* _contact_request_compound_H_ */


/*
 * contact_response_compound.h
 *
 * A Contact Object
 */

#ifndef _contact_response_compound_H_
#define _contact_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_response_compound_t contact_response_compound_t;

#include "contactinformations_response_compound.h"
#include "field_e_contact_type.h"



typedef struct contact_response_compound_t {
    int pki_contact_id; //numeric
    int fki_language_id; //numeric
    int fki_contacttitle_id; //numeric
    int fki_contactinformations_id; //numeric
    char *dt_contact_birthdate; // string
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type; //referenced enum
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string
    char *s_contact_occupation; // string
    char *t_contact_note; // string
    int b_contact_isactive; //boolean
    struct contactinformations_response_compound_t *obj_contactinformations; //model

    int _library_owned; // Is the library responsible for freeing this object?
} contact_response_compound_t;

__attribute__((deprecated)) contact_response_compound_t *contact_response_compound_create(
    int pki_contact_id,
    int fki_language_id,
    int fki_contacttitle_id,
    int fki_contactinformations_id,
    char *dt_contact_birthdate,
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *s_contact_occupation,
    char *t_contact_note,
    int b_contact_isactive,
    contactinformations_response_compound_t *obj_contactinformations
);

void contact_response_compound_free(contact_response_compound_t *contact_response_compound);

contact_response_compound_t *contact_response_compound_parseFromJSON(cJSON *contact_response_compoundJSON);

cJSON *contact_response_compound_convertToJSON(contact_response_compound_t *contact_response_compound);

#endif /* _contact_response_compound_H_ */


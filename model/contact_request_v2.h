/*
 * contact_request_v2.h
 *
 * A Contact Object
 */

#ifndef _contact_request_v2_H_
#define _contact_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_request_v2_t contact_request_v2_t;

#include "contactinformations_request_compound.h"
#include "field_e_contact_type.h"



typedef struct contact_request_v2_t {
    int fki_contacttitle_id; //numeric
    int fki_language_id; //numeric
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type; //referenced enum
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string
    char *dt_contact_birthdate; // string
    char *s_contact_occupation; // string
    char *t_contact_note; // string
    int b_contact_isactive; //boolean
    struct contactinformations_request_compound_t *obj_contactinformations; //model

    int _library_owned; // Is the library responsible for freeing this object?
} contact_request_v2_t;

__attribute__((deprecated)) contact_request_v2_t *contact_request_v2_create(
    int fki_contacttitle_id,
    int fki_language_id,
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate,
    char *s_contact_occupation,
    char *t_contact_note,
    int b_contact_isactive,
    contactinformations_request_compound_t *obj_contactinformations
);

void contact_request_v2_free(contact_request_v2_t *contact_request_v2);

contact_request_v2_t *contact_request_v2_parseFromJSON(cJSON *contact_request_v2JSON);

cJSON *contact_request_v2_convertToJSON(contact_request_v2_t *contact_request_v2);

#endif /* _contact_request_v2_H_ */


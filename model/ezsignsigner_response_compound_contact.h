/*
 * ezsignsigner_response_compound_contact.h
 *
 * A Ezsignsigner-&gt;Contact Object and children to create a complete structure
 */

#ifndef _ezsignsigner_response_compound_contact_H_
#define _ezsignsigner_response_compound_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_response_compound_contact_t ezsignsigner_response_compound_contact_t;




typedef struct ezsignsigner_response_compound_contact_t {
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    int fki_language_id; //numeric
    char *s_email_address; // string
    char *s_phone_number; // string
    char *s_phone_number_cell; // string

} ezsignsigner_response_compound_contact_t;

ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    int fki_language_id,
    char *s_email_address,
    char *s_phone_number,
    char *s_phone_number_cell
);

void ezsignsigner_response_compound_contact_free(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact);

ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_parseFromJSON(cJSON *ezsignsigner_response_compound_contactJSON);

cJSON *ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact);

#endif /* _ezsignsigner_response_compound_contact_H_ */


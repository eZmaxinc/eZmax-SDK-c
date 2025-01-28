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
    int pki_contact_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    int fki_language_id; //numeric
    char *s_email_address; // string
    char *s_phone_e164; // string
    char *s_phone_extension; // string
    char *s_phone_e164_cell; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigner_response_compound_contact_t;

__attribute__((deprecated)) ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_create(
    int pki_contact_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int fki_language_id,
    char *s_email_address,
    char *s_phone_e164,
    char *s_phone_extension,
    char *s_phone_e164_cell
);

void ezsignsigner_response_compound_contact_free(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact);

ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_parseFromJSON(cJSON *ezsignsigner_response_compound_contactJSON);

cJSON *ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact);

#endif /* _ezsignsigner_response_compound_contact_H_ */


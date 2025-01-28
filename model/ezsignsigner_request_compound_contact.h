/*
 * ezsignsigner_request_compound_contact.h
 *
 * A Ezsignsigner-&gt;Contact Object and children to create a complete structure
 */

#ifndef _ezsignsigner_request_compound_contact_H_
#define _ezsignsigner_request_compound_contact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigner_request_compound_contact_t ezsignsigner_request_compound_contact_t;




typedef struct ezsignsigner_request_compound_contact_t {
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    int fki_language_id; //numeric
    char *s_email_address; // string
    char *s_phone_e164; // string
    char *s_phone_extension; // string
    char *s_phone_e164_cell; // string
    char *s_phone_number; // string
    char *s_phone_number_cell; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigner_request_compound_contact_t;

__attribute__((deprecated)) ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    int fki_language_id,
    char *s_email_address,
    char *s_phone_e164,
    char *s_phone_extension,
    char *s_phone_e164_cell,
    char *s_phone_number,
    char *s_phone_number_cell
);

void ezsignsigner_request_compound_contact_free(ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact);

ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact_parseFromJSON(cJSON *ezsignsigner_request_compound_contactJSON);

cJSON *ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact);

#endif /* _ezsignsigner_request_compound_contact_H_ */


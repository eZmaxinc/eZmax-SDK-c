/*
 * contact_request.h
 *
 * A Contact Object
 */

#ifndef _contact_request_H_
#define _contact_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_request_t contact_request_t;




typedef struct contact_request_t {
    int fki_contacttitle_id; //numeric
    int fki_language_id; //numeric
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string
    char *dt_contact_birthdate; // string

    int _library_owned; // Is the library responsible for freeing this object?
} contact_request_t;

__attribute__((deprecated)) contact_request_t *contact_request_create(
    int fki_contacttitle_id,
    int fki_language_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate
);

void contact_request_free(contact_request_t *contact_request);

contact_request_t *contact_request_parseFromJSON(cJSON *contact_requestJSON);

cJSON *contact_request_convertToJSON(contact_request_t *contact_request);

#endif /* _contact_request_H_ */


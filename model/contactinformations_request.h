/*
 * contactinformations_request.h
 *
 * A Contactinformations Object
 */

#ifndef _contactinformations_request_H_
#define _contactinformations_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contactinformations_request_t contactinformations_request_t;




typedef struct contactinformations_request_t {
    int i_address_default; //numeric
    int i_phone_default; //numeric
    int i_email_default; //numeric
    int i_website_default; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} contactinformations_request_t;

__attribute__((deprecated)) contactinformations_request_t *contactinformations_request_create(
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default
);

void contactinformations_request_free(contactinformations_request_t *contactinformations_request);

contactinformations_request_t *contactinformations_request_parseFromJSON(cJSON *contactinformations_requestJSON);

cJSON *contactinformations_request_convertToJSON(contactinformations_request_t *contactinformations_request);

#endif /* _contactinformations_request_H_ */


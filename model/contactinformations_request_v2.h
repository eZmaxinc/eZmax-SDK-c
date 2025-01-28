/*
 * contactinformations_request_v2.h
 *
 * A Contactinformations Object
 */

#ifndef _contactinformations_request_v2_H_
#define _contactinformations_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contactinformations_request_v2_t contactinformations_request_v2_t;

#include "field_e_contactinformations_type.h"



typedef struct contactinformations_request_v2_t {
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type; //referenced enum
    int i_address_default; //numeric
    int i_phone_default; //numeric
    int i_email_default; //numeric
    int i_website_default; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} contactinformations_request_v2_t;

__attribute__((deprecated)) contactinformations_request_v2_t *contactinformations_request_v2_create(
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type,
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default
);

void contactinformations_request_v2_free(contactinformations_request_v2_t *contactinformations_request_v2);

contactinformations_request_v2_t *contactinformations_request_v2_parseFromJSON(cJSON *contactinformations_request_v2JSON);

cJSON *contactinformations_request_v2_convertToJSON(contactinformations_request_v2_t *contactinformations_request_v2);

#endif /* _contactinformations_request_v2_H_ */


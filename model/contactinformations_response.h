/*
 * contactinformations_response.h
 *
 * A Contactinformations Object
 */

#ifndef _contactinformations_response_H_
#define _contactinformations_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contactinformations_response_t contactinformations_response_t;

#include "address_response_compound.h"
#include "email_response_compound.h"
#include "field_e_contactinformations_type.h"
#include "phone_response_compound.h"
#include "website_response_compound.h"



typedef struct contactinformations_response_t {
    int pki_contactinformations_id; //numeric
    int fki_address_id_default; //numeric
    int fki_phone_id_default; //numeric
    int fki_email_id_default; //numeric
    int fki_website_id_default; //numeric
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type; //referenced enum
    char *s_contactinformations_url; // string
    struct address_response_compound_t *obj_address_default; //model
    struct phone_response_compound_t *obj_phone_default; //model
    struct email_response_compound_t *obj_email_default; //model
    struct website_response_compound_t *obj_website_default; //model

    int _library_owned; // Is the library responsible for freeing this object?
} contactinformations_response_t;

__attribute__((deprecated)) contactinformations_response_t *contactinformations_response_create(
    int pki_contactinformations_id,
    int fki_address_id_default,
    int fki_phone_id_default,
    int fki_email_id_default,
    int fki_website_id_default,
    ezmax_api_definition__full_field_e_contactinformations_type__e e_contactinformations_type,
    char *s_contactinformations_url,
    address_response_compound_t *obj_address_default,
    phone_response_compound_t *obj_phone_default,
    email_response_compound_t *obj_email_default,
    website_response_compound_t *obj_website_default
);

void contactinformations_response_free(contactinformations_response_t *contactinformations_response);

contactinformations_response_t *contactinformations_response_parseFromJSON(cJSON *contactinformations_responseJSON);

cJSON *contactinformations_response_convertToJSON(contactinformations_response_t *contactinformations_response);

#endif /* _contactinformations_response_H_ */


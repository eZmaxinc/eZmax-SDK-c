/*
 * contactinformations_request_compound.h
 *
 * A Contactinformations Object and children to create a complete structure
 */

#ifndef _contactinformations_request_compound_H_
#define _contactinformations_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contactinformations_request_compound_t contactinformations_request_compound_t;

#include "address_request.h"
#include "contactinformations_request.h"
#include "email_request.h"
#include "phone_request.h"
#include "website_request.h"



typedef struct contactinformations_request_compound_t {
    int i_address_default; //numeric
    int i_phone_default; //numeric
    int i_email_default; //numeric
    int i_website_default; //numeric
    list_t *a_obj_address; //nonprimitive container
    list_t *a_obj_phone; //nonprimitive container
    list_t *a_obj_email; //nonprimitive container
    list_t *a_obj_website; //nonprimitive container

} contactinformations_request_compound_t;

contactinformations_request_compound_t *contactinformations_request_compound_create(
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default,
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website
);

void contactinformations_request_compound_free(contactinformations_request_compound_t *contactinformations_request_compound);

contactinformations_request_compound_t *contactinformations_request_compound_parseFromJSON(cJSON *contactinformations_request_compoundJSON);

cJSON *contactinformations_request_compound_convertToJSON(contactinformations_request_compound_t *contactinformations_request_compound);

#endif /* _contactinformations_request_compound_H_ */


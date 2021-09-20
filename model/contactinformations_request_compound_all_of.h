/*
 * contactinformations_request_compound_all_of.h
 *
 * 
 */

#ifndef _contactinformations_request_compound_all_of_H_
#define _contactinformations_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contactinformations_request_compound_all_of_t contactinformations_request_compound_all_of_t;

#include "address_request.h"
#include "email_request.h"
#include "phone_request.h"
#include "website_request.h"



typedef struct contactinformations_request_compound_all_of_t {
    list_t *a_obj_address; //nonprimitive container
    list_t *a_obj_phone; //nonprimitive container
    list_t *a_obj_email; //nonprimitive container
    list_t *a_obj_website; //nonprimitive container

} contactinformations_request_compound_all_of_t;

contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of_create(
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website
);

void contactinformations_request_compound_all_of_free(contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of);

contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of_parseFromJSON(cJSON *contactinformations_request_compound_all_ofJSON);

cJSON *contactinformations_request_compound_all_of_convertToJSON(contactinformations_request_compound_all_of_t *contactinformations_request_compound_all_of);

#endif /* _contactinformations_request_compound_all_of_H_ */


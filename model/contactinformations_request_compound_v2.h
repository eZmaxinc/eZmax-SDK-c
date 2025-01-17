/*
 * contactinformations_request_compound_v2.h
 *
 * A Contactinformations Object and children to create a complete structure
 */

#ifndef _contactinformations_request_compound_v2_H_
#define _contactinformations_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contactinformations_request_compound_v2_t contactinformations_request_compound_v2_t;

#include "address_request.h"
#include "contactinformations_request_v2.h"
#include "email_request.h"
#include "field_e_contactinformations_type.h"
#include "phone_request.h"
#include "website_request.h"

// Enum  for contactinformations_request_compound_v2

typedef enum  { ezmax_api_definition__full_contactinformations_request_compound_v2__NULL = 0, ezmax_api_definition__full_contactinformations_request_compound_v2__BankAccount, ezmax_api_definition__full_contactinformations_request_compound_v2__ContactObject, ezmax_api_definition__full_contactinformations_request_compound_v2__CreditCard, ezmax_api_definition__full_contactinformations_request_compound_v2__Customer, ezmax_api_definition__full_contactinformations_request_compound_v2__ExternalBroker, ezmax_api_definition__full_contactinformations_request_compound_v2__ExternalBrokerFirm, ezmax_api_definition__full_contactinformations_request_compound_v2__EzcomCompany, ezmax_api_definition__full_contactinformations_request_compound_v2__FinancialInstitution, ezmax_api_definition__full_contactinformations_request_compound_v2__FranchiseCompany, ezmax_api_definition__full_contactinformations_request_compound_v2__FranchiseOffice, ezmax_api_definition__full_contactinformations_request_compound_v2__Supplier } ezmax_api_definition__full_contactinformations_request_compound_v2__e;

char* contactinformations_request_compound_v2_e_contactinformations_type_ToString(ezmax_api_definition__full_contactinformations_request_compound_v2__e e_contactinformations_type);

ezmax_api_definition__full_contactinformations_request_compound_v2__e contactinformations_request_compound_v2_e_contactinformations_type_FromString(char* e_contactinformations_type);



typedef struct contactinformations_request_compound_v2_t {
    field_e_contactinformations_type_t *e_contactinformations_type; // custom
    int i_address_default; //numeric
    int i_phone_default; //numeric
    int i_email_default; //numeric
    int i_website_default; //numeric
    list_t *a_obj_address; //nonprimitive container
    list_t *a_obj_phone; //nonprimitive container
    list_t *a_obj_email; //nonprimitive container
    list_t *a_obj_website; //nonprimitive container

} contactinformations_request_compound_v2_t;

contactinformations_request_compound_v2_t *contactinformations_request_compound_v2_create(
    field_e_contactinformations_type_t *e_contactinformations_type,
    int i_address_default,
    int i_phone_default,
    int i_email_default,
    int i_website_default,
    list_t *a_obj_address,
    list_t *a_obj_phone,
    list_t *a_obj_email,
    list_t *a_obj_website
);

void contactinformations_request_compound_v2_free(contactinformations_request_compound_v2_t *contactinformations_request_compound_v2);

contactinformations_request_compound_v2_t *contactinformations_request_compound_v2_parseFromJSON(cJSON *contactinformations_request_compound_v2JSON);

cJSON *contactinformations_request_compound_v2_convertToJSON(contactinformations_request_compound_v2_t *contactinformations_request_compound_v2);

#endif /* _contactinformations_request_compound_v2_H_ */


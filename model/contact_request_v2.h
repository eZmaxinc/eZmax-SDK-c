/*
 * contact_request_v2.h
 *
 * A Contact Object
 */

#ifndef _contact_request_v2_H_
#define _contact_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_request_v2_t contact_request_v2_t;

#include "contactinformations_request_compound.h"
#include "field_e_contact_type.h"

// Enum  for contact_request_v2

typedef enum  { ezmax_api_definition__full_contact_request_v2__NULL = 0, ezmax_api_definition__full_contact_request_v2__Agent, ezmax_api_definition__full_contact_request_v2__Assistant, ezmax_api_definition__full_contact_request_v2__BankAccount, ezmax_api_definition__full_contact_request_v2__Borrower, ezmax_api_definition__full_contact_request_v2__Buyer, ezmax_api_definition__full_contact_request_v2__Company, ezmax_api_definition__full_contact_request_v2__ContractCreator, ezmax_api_definition__full_contact_request_v2__Creditcardmerchant, ezmax_api_definition__full_contact_request_v2__Customer, ezmax_api_definition__full_contact_request_v2__Depositreceipt, ezmax_api_definition__full_contact_request_v2__Employee, ezmax_api_definition__full_contact_request_v2__ExternalBroker, ezmax_api_definition__full_contact_request_v2__EzsignSigner, ezmax_api_definition__full_contact_request_v2__EzsignUser, ezmax_api_definition__full_contact_request_v2__EzcomAgent, ezmax_api_definition__full_contact_request_v2__EzcomApprover, ezmax_api_definition__full_contact_request_v2__FinancialInstitution, ezmax_api_definition__full_contact_request_v2__FranchiseBroker, ezmax_api_definition__full_contact_request_v2__Franchisefranchisecontact, ezmax_api_definition__full_contact_request_v2__Franchisefranchisesignatory, ezmax_api_definition__full_contact_request_v2__FranchiseOfficeBroker, ezmax_api_definition__full_contact_request_v2__FranchiseCompany, ezmax_api_definition__full_contact_request_v2__FranchiseOwner, ezmax_api_definition__full_contact_request_v2__Lead, ezmax_api_definition__full_contact_request_v2__MarketingCampaignSample, ezmax_api_definition__full_contact_request_v2__Notary, ezmax_api_definition__full_contact_request_v2__Payer, ezmax_api_definition__full_contact_request_v2__Petowner, ezmax_api_definition__full_contact_request_v2__PrivateTo, ezmax_api_definition__full_contact_request_v2__RewardMember, ezmax_api_definition__full_contact_request_v2__RewardRepresentative, ezmax_api_definition__full_contact_request_v2__Seller, ezmax_api_definition__full_contact_request_v2__Shared, ezmax_api_definition__full_contact_request_v2__Supplier, ezmax_api_definition__full_contact_request_v2__Survey, ezmax_api_definition__full_contact_request_v2__Inspector } ezmax_api_definition__full_contact_request_v2__e;

char* contact_request_v2_e_contact_type_ToString(ezmax_api_definition__full_contact_request_v2__e e_contact_type);

ezmax_api_definition__full_contact_request_v2__e contact_request_v2_e_contact_type_FromString(char* e_contact_type);



typedef struct contact_request_v2_t {
    int fki_contacttitle_id; //numeric
    int fki_language_id; //numeric
    field_e_contact_type_t *e_contact_type; // custom
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string
    char *dt_contact_birthdate; // string
    char *s_contact_occupation; // string
    char *t_contact_note; // string
    int b_contact_isactive; //boolean
    struct contactinformations_request_compound_t *obj_contactinformations; //model

} contact_request_v2_t;

contact_request_v2_t *contact_request_v2_create(
    int fki_contacttitle_id,
    int fki_language_id,
    field_e_contact_type_t *e_contact_type,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate,
    char *s_contact_occupation,
    char *t_contact_note,
    int b_contact_isactive,
    contactinformations_request_compound_t *obj_contactinformations
);

void contact_request_v2_free(contact_request_v2_t *contact_request_v2);

contact_request_v2_t *contact_request_v2_parseFromJSON(cJSON *contact_request_v2JSON);

cJSON *contact_request_v2_convertToJSON(contact_request_v2_t *contact_request_v2);

#endif /* _contact_request_v2_H_ */


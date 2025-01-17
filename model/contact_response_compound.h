/*
 * contact_response_compound.h
 *
 * A Contact Object
 */

#ifndef _contact_response_compound_H_
#define _contact_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_response_compound_t contact_response_compound_t;

#include "contact_response.h"
#include "contactinformations_response_compound.h"
#include "field_e_contact_type.h"

// Enum  for contact_response_compound

typedef enum  { ezmax_api_definition__full_contact_response_compound__NULL = 0, ezmax_api_definition__full_contact_response_compound__Agent, ezmax_api_definition__full_contact_response_compound__Assistant, ezmax_api_definition__full_contact_response_compound__BankAccount, ezmax_api_definition__full_contact_response_compound__Borrower, ezmax_api_definition__full_contact_response_compound__Buyer, ezmax_api_definition__full_contact_response_compound__Company, ezmax_api_definition__full_contact_response_compound__ContractCreator, ezmax_api_definition__full_contact_response_compound__Creditcardmerchant, ezmax_api_definition__full_contact_response_compound__Customer, ezmax_api_definition__full_contact_response_compound__Depositreceipt, ezmax_api_definition__full_contact_response_compound__Employee, ezmax_api_definition__full_contact_response_compound__ExternalBroker, ezmax_api_definition__full_contact_response_compound__EzsignSigner, ezmax_api_definition__full_contact_response_compound__EzsignUser, ezmax_api_definition__full_contact_response_compound__EzcomAgent, ezmax_api_definition__full_contact_response_compound__EzcomApprover, ezmax_api_definition__full_contact_response_compound__FinancialInstitution, ezmax_api_definition__full_contact_response_compound__FranchiseBroker, ezmax_api_definition__full_contact_response_compound__Franchisefranchisecontact, ezmax_api_definition__full_contact_response_compound__Franchisefranchisesignatory, ezmax_api_definition__full_contact_response_compound__FranchiseOfficeBroker, ezmax_api_definition__full_contact_response_compound__FranchiseCompany, ezmax_api_definition__full_contact_response_compound__FranchiseOwner, ezmax_api_definition__full_contact_response_compound__Lead, ezmax_api_definition__full_contact_response_compound__MarketingCampaignSample, ezmax_api_definition__full_contact_response_compound__Notary, ezmax_api_definition__full_contact_response_compound__Payer, ezmax_api_definition__full_contact_response_compound__Petowner, ezmax_api_definition__full_contact_response_compound__PrivateTo, ezmax_api_definition__full_contact_response_compound__RewardMember, ezmax_api_definition__full_contact_response_compound__RewardRepresentative, ezmax_api_definition__full_contact_response_compound__Seller, ezmax_api_definition__full_contact_response_compound__Shared, ezmax_api_definition__full_contact_response_compound__Supplier, ezmax_api_definition__full_contact_response_compound__Survey, ezmax_api_definition__full_contact_response_compound__Inspector } ezmax_api_definition__full_contact_response_compound__e;

char* contact_response_compound_e_contact_type_ToString(ezmax_api_definition__full_contact_response_compound__e e_contact_type);

ezmax_api_definition__full_contact_response_compound__e contact_response_compound_e_contact_type_FromString(char* e_contact_type);



typedef struct contact_response_compound_t {
    int pki_contact_id; //numeric
    int fki_language_id; //numeric
    int fki_contacttitle_id; //numeric
    int fki_contactinformations_id; //numeric
    char *dt_contact_birthdate; // string
    field_e_contact_type_t *e_contact_type; // custom
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string
    char *s_contact_occupation; // string
    char *t_contact_note; // string
    int b_contact_isactive; //boolean
    struct contactinformations_response_compound_t *obj_contactinformations; //model

} contact_response_compound_t;

contact_response_compound_t *contact_response_compound_create(
    int pki_contact_id,
    int fki_language_id,
    int fki_contacttitle_id,
    int fki_contactinformations_id,
    char *dt_contact_birthdate,
    field_e_contact_type_t *e_contact_type,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *s_contact_occupation,
    char *t_contact_note,
    int b_contact_isactive,
    contactinformations_response_compound_t *obj_contactinformations
);

void contact_response_compound_free(contact_response_compound_t *contact_response_compound);

contact_response_compound_t *contact_response_compound_parseFromJSON(cJSON *contact_response_compoundJSON);

cJSON *contact_response_compound_convertToJSON(contact_response_compound_t *contact_response_compound);

#endif /* _contact_response_compound_H_ */


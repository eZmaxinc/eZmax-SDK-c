/*
 * contact_response.h
 *
 * A Contact Object
 */

#ifndef _contact_response_H_
#define _contact_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_response_t contact_response_t;

#include "contactinformations_response_compound.h"
#include "field_e_contact_type.h"

// Enum  for contact_response

typedef enum  { ezmax_api_definition__full_contact_response__NULL = 0, ezmax_api_definition__full_contact_response__Agent, ezmax_api_definition__full_contact_response__Assistant, ezmax_api_definition__full_contact_response__BankAccount, ezmax_api_definition__full_contact_response__Borrower, ezmax_api_definition__full_contact_response__Buyer, ezmax_api_definition__full_contact_response__Company, ezmax_api_definition__full_contact_response__ContractCreator, ezmax_api_definition__full_contact_response__Creditcardmerchant, ezmax_api_definition__full_contact_response__Customer, ezmax_api_definition__full_contact_response__Depositreceipt, ezmax_api_definition__full_contact_response__Employee, ezmax_api_definition__full_contact_response__ExternalBroker, ezmax_api_definition__full_contact_response__EzsignSigner, ezmax_api_definition__full_contact_response__EzsignUser, ezmax_api_definition__full_contact_response__EzcomAgent, ezmax_api_definition__full_contact_response__EzcomApprover, ezmax_api_definition__full_contact_response__FinancialInstitution, ezmax_api_definition__full_contact_response__FranchiseBroker, ezmax_api_definition__full_contact_response__Franchisefranchisecontact, ezmax_api_definition__full_contact_response__Franchisefranchisesignatory, ezmax_api_definition__full_contact_response__FranchiseOfficeBroker, ezmax_api_definition__full_contact_response__FranchiseCompany, ezmax_api_definition__full_contact_response__FranchiseOwner, ezmax_api_definition__full_contact_response__Lead, ezmax_api_definition__full_contact_response__MarketingCampaignSample, ezmax_api_definition__full_contact_response__Notary, ezmax_api_definition__full_contact_response__Payer, ezmax_api_definition__full_contact_response__Petowner, ezmax_api_definition__full_contact_response__PrivateTo, ezmax_api_definition__full_contact_response__RewardMember, ezmax_api_definition__full_contact_response__RewardRepresentative, ezmax_api_definition__full_contact_response__Seller, ezmax_api_definition__full_contact_response__Shared, ezmax_api_definition__full_contact_response__Supplier, ezmax_api_definition__full_contact_response__Survey, ezmax_api_definition__full_contact_response__Inspector } ezmax_api_definition__full_contact_response__e;

char* contact_response_e_contact_type_ToString(ezmax_api_definition__full_contact_response__e e_contact_type);

ezmax_api_definition__full_contact_response__e contact_response_e_contact_type_FromString(char* e_contact_type);



typedef struct contact_response_t {
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

} contact_response_t;

contact_response_t *contact_response_create(
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

void contact_response_free(contact_response_t *contact_response);

contact_response_t *contact_response_parseFromJSON(cJSON *contact_responseJSON);

cJSON *contact_response_convertToJSON(contact_response_t *contact_response);

#endif /* _contact_response_H_ */


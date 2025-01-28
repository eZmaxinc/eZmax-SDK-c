#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_contact_type.h"


char* field_e_contact_type_field_e_contact_type_ToString(ezmax_api_definition__full_field_e_contact_type__e field_e_contact_type) {
    char *field_e_contact_typeArray[] =  { "NULL", "Agent", "Assistant", "BankAccount", "Borrower", "Buyer", "Company", "ContractCreator", "Creditcardmerchant", "Customer", "Depositreceipt", "Employee", "ExternalBroker", "EzsignSigner", "EzsignUser", "EzcomAgent", "EzcomApprover", "FinancialInstitution", "FranchiseBroker", "Franchisefranchisecontact", "Franchisefranchisesignatory", "FranchiseOfficeBroker", "FranchiseCompany", "FranchiseOwner", "Lead", "MarketingCampaignSample", "Notary", "Payer", "Petowner", "PrivateTo", "RewardMember", "RewardRepresentative", "Seller", "Shared", "Supplier", "Survey", "Inspector" };
    return field_e_contact_typeArray[field_e_contact_type];
}

ezmax_api_definition__full_field_e_contact_type__e field_e_contact_type_field_e_contact_type_FromString(char* field_e_contact_type) {
    int stringToReturn = 0;
    char *field_e_contact_typeArray[] =  { "NULL", "Agent", "Assistant", "BankAccount", "Borrower", "Buyer", "Company", "ContractCreator", "Creditcardmerchant", "Customer", "Depositreceipt", "Employee", "ExternalBroker", "EzsignSigner", "EzsignUser", "EzcomAgent", "EzcomApprover", "FinancialInstitution", "FranchiseBroker", "Franchisefranchisecontact", "Franchisefranchisesignatory", "FranchiseOfficeBroker", "FranchiseCompany", "FranchiseOwner", "Lead", "MarketingCampaignSample", "Notary", "Payer", "Petowner", "PrivateTo", "RewardMember", "RewardRepresentative", "Seller", "Shared", "Supplier", "Survey", "Inspector" };
    size_t sizeofArray = sizeof(field_e_contact_typeArray) / sizeof(field_e_contact_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_contact_type, field_e_contact_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_contact_type_convertToJSON(ezmax_api_definition__full_field_e_contact_type__e field_e_contact_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_contact_type", field_e_contact_type_field_e_contact_type_ToString(field_e_contact_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_contact_type__e field_e_contact_type_parseFromJSON(cJSON *field_e_contact_typeJSON) {
    if(!cJSON_IsString(field_e_contact_typeJSON) || (field_e_contact_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_contact_type_field_e_contact_type_FromString(field_e_contact_typeJSON->valuestring);
}

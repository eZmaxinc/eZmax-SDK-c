#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_response.h"


char* contact_response_e_contact_type_ToString(ezmax_api_definition__full_contact_response__e e_contact_type) {
    char* e_contact_typeArray[] =  { "NULL", "Agent", "Assistant", "BankAccount", "Borrower", "Buyer", "Company", "ContractCreator", "Creditcardmerchant", "Customer", "Depositreceipt", "Employee", "ExternalBroker", "EzsignSigner", "EzsignUser", "EzcomAgent", "EzcomApprover", "FinancialInstitution", "FranchiseBroker", "Franchisefranchisecontact", "Franchisefranchisesignatory", "FranchiseOfficeBroker", "FranchiseCompany", "FranchiseOwner", "Lead", "MarketingCampaignSample", "Notary", "Payer", "Petowner", "PrivateTo", "RewardMember", "RewardRepresentative", "Seller", "Shared", "Supplier", "Survey", "Inspector" };
    return e_contact_typeArray[e_contact_type];
}

ezmax_api_definition__full_contact_response__e contact_response_e_contact_type_FromString(char* e_contact_type){
    int stringToReturn = 0;
    char *e_contact_typeArray[] =  { "NULL", "Agent", "Assistant", "BankAccount", "Borrower", "Buyer", "Company", "ContractCreator", "Creditcardmerchant", "Customer", "Depositreceipt", "Employee", "ExternalBroker", "EzsignSigner", "EzsignUser", "EzcomAgent", "EzcomApprover", "FinancialInstitution", "FranchiseBroker", "Franchisefranchisecontact", "Franchisefranchisesignatory", "FranchiseOfficeBroker", "FranchiseCompany", "FranchiseOwner", "Lead", "MarketingCampaignSample", "Notary", "Payer", "Petowner", "PrivateTo", "RewardMember", "RewardRepresentative", "Seller", "Shared", "Supplier", "Survey", "Inspector" };
    size_t sizeofArray = sizeof(e_contact_typeArray) / sizeof(e_contact_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_contact_type, e_contact_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    contact_response_t *contact_response_local_var = malloc(sizeof(contact_response_t));
    if (!contact_response_local_var) {
        return NULL;
    }
    contact_response_local_var->pki_contact_id = pki_contact_id;
    contact_response_local_var->fki_language_id = fki_language_id;
    contact_response_local_var->fki_contacttitle_id = fki_contacttitle_id;
    contact_response_local_var->fki_contactinformations_id = fki_contactinformations_id;
    contact_response_local_var->dt_contact_birthdate = dt_contact_birthdate;
    contact_response_local_var->e_contact_type = e_contact_type;
    contact_response_local_var->s_contact_firstname = s_contact_firstname;
    contact_response_local_var->s_contact_lastname = s_contact_lastname;
    contact_response_local_var->s_contact_company = s_contact_company;
    contact_response_local_var->s_contact_occupation = s_contact_occupation;
    contact_response_local_var->t_contact_note = t_contact_note;
    contact_response_local_var->b_contact_isactive = b_contact_isactive;
    contact_response_local_var->obj_contactinformations = obj_contactinformations;

    return contact_response_local_var;
}


void contact_response_free(contact_response_t *contact_response) {
    if(NULL == contact_response){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_response->dt_contact_birthdate) {
        free(contact_response->dt_contact_birthdate);
        contact_response->dt_contact_birthdate = NULL;
    }
    if (contact_response->e_contact_type) {
        field_e_contact_type_free(contact_response->e_contact_type);
        contact_response->e_contact_type = NULL;
    }
    if (contact_response->s_contact_firstname) {
        free(contact_response->s_contact_firstname);
        contact_response->s_contact_firstname = NULL;
    }
    if (contact_response->s_contact_lastname) {
        free(contact_response->s_contact_lastname);
        contact_response->s_contact_lastname = NULL;
    }
    if (contact_response->s_contact_company) {
        free(contact_response->s_contact_company);
        contact_response->s_contact_company = NULL;
    }
    if (contact_response->s_contact_occupation) {
        free(contact_response->s_contact_occupation);
        contact_response->s_contact_occupation = NULL;
    }
    if (contact_response->t_contact_note) {
        free(contact_response->t_contact_note);
        contact_response->t_contact_note = NULL;
    }
    if (contact_response->obj_contactinformations) {
        contactinformations_response_compound_free(contact_response->obj_contactinformations);
        contact_response->obj_contactinformations = NULL;
    }
    free(contact_response);
}

cJSON *contact_response_convertToJSON(contact_response_t *contact_response) {
    cJSON *item = cJSON_CreateObject();

    // contact_response->pki_contact_id
    if (!contact_response->pki_contact_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiContactID", contact_response->pki_contact_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_response->fki_language_id
    if (!contact_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", contact_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_response->fki_contacttitle_id
    if (!contact_response->fki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContacttitleID", contact_response->fki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_response->fki_contactinformations_id
    if (!contact_response->fki_contactinformations_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactinformationsID", contact_response->fki_contactinformations_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_response->dt_contact_birthdate
    if(contact_response->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", contact_response->dt_contact_birthdate) == NULL) {
    goto fail; //String
    }
    }


    // contact_response->e_contact_type
    if (ezmax_api_definition__full_contact_response__NULL == contact_response->e_contact_type) {
        goto fail;
    }
    cJSON *e_contact_type_local_JSON = field_e_contact_type_convertToJSON(contact_response->e_contact_type);
    if(e_contact_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eContactType", e_contact_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // contact_response->s_contact_firstname
    if (!contact_response->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", contact_response->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // contact_response->s_contact_lastname
    if (!contact_response->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", contact_response->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // contact_response->s_contact_company
    if(contact_response->s_contact_company) {
    if(cJSON_AddStringToObject(item, "sContactCompany", contact_response->s_contact_company) == NULL) {
    goto fail; //String
    }
    }


    // contact_response->s_contact_occupation
    if(contact_response->s_contact_occupation) {
    if(cJSON_AddStringToObject(item, "sContactOccupation", contact_response->s_contact_occupation) == NULL) {
    goto fail; //String
    }
    }


    // contact_response->t_contact_note
    if(contact_response->t_contact_note) {
    if(cJSON_AddStringToObject(item, "tContactNote", contact_response->t_contact_note) == NULL) {
    goto fail; //String
    }
    }


    // contact_response->b_contact_isactive
    if (!contact_response->b_contact_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bContactIsactive", contact_response->b_contact_isactive) == NULL) {
    goto fail; //Bool
    }


    // contact_response->obj_contactinformations
    if (!contact_response->obj_contactinformations) {
        goto fail;
    }
    cJSON *obj_contactinformations_local_JSON = contactinformations_response_compound_convertToJSON(contact_response->obj_contactinformations);
    if(obj_contactinformations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactinformations", obj_contactinformations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contact_response_t *contact_response_parseFromJSON(cJSON *contact_responseJSON){

    contact_response_t *contact_response_local_var = NULL;

    // define the local variable for contact_response->e_contact_type
    field_e_contact_type_t *e_contact_type_local_nonprim = NULL;

    // define the local variable for contact_response->obj_contactinformations
    contactinformations_response_compound_t *obj_contactinformations_local_nonprim = NULL;

    // contact_response->pki_contact_id
    cJSON *pki_contact_id = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "pkiContactID");
    if (!pki_contact_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_contact_id))
    {
    goto end; //Numeric
    }

    // contact_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // contact_response->fki_contacttitle_id
    cJSON *fki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "fkiContacttitleID");
    if (!fki_contacttitle_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contacttitle_id))
    {
    goto end; //Numeric
    }

    // contact_response->fki_contactinformations_id
    cJSON *fki_contactinformations_id = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "fkiContactinformationsID");
    if (!fki_contactinformations_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contactinformations_id))
    {
    goto end; //Numeric
    }

    // contact_response->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "dtContactBirthdate");
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }

    // contact_response->e_contact_type
    cJSON *e_contact_type = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "eContactType");
    if (!e_contact_type) {
        goto end;
    }

    
    e_contact_type_local_nonprim = field_e_contact_type_parseFromJSON(e_contact_type); //custom

    // contact_response->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "sContactFirstname");
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // contact_response->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "sContactLastname");
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // contact_response->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "sContactCompany");
    if (s_contact_company) { 
    if(!cJSON_IsString(s_contact_company) && !cJSON_IsNull(s_contact_company))
    {
    goto end; //String
    }
    }

    // contact_response->s_contact_occupation
    cJSON *s_contact_occupation = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "sContactOccupation");
    if (s_contact_occupation) { 
    if(!cJSON_IsString(s_contact_occupation) && !cJSON_IsNull(s_contact_occupation))
    {
    goto end; //String
    }
    }

    // contact_response->t_contact_note
    cJSON *t_contact_note = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "tContactNote");
    if (t_contact_note) { 
    if(!cJSON_IsString(t_contact_note) && !cJSON_IsNull(t_contact_note))
    {
    goto end; //String
    }
    }

    // contact_response->b_contact_isactive
    cJSON *b_contact_isactive = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "bContactIsactive");
    if (!b_contact_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_contact_isactive))
    {
    goto end; //Bool
    }

    // contact_response->obj_contactinformations
    cJSON *obj_contactinformations = cJSON_GetObjectItemCaseSensitive(contact_responseJSON, "objContactinformations");
    if (!obj_contactinformations) {
        goto end;
    }

    
    obj_contactinformations_local_nonprim = contactinformations_response_compound_parseFromJSON(obj_contactinformations); //nonprimitive


    contact_response_local_var = contact_response_create (
        pki_contact_id->valuedouble,
        fki_language_id->valuedouble,
        fki_contacttitle_id->valuedouble,
        fki_contactinformations_id->valuedouble,
        dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate) ? strdup(dt_contact_birthdate->valuestring) : NULL,
        e_contact_type_local_nonprim,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        s_contact_company && !cJSON_IsNull(s_contact_company) ? strdup(s_contact_company->valuestring) : NULL,
        s_contact_occupation && !cJSON_IsNull(s_contact_occupation) ? strdup(s_contact_occupation->valuestring) : NULL,
        t_contact_note && !cJSON_IsNull(t_contact_note) ? strdup(t_contact_note->valuestring) : NULL,
        b_contact_isactive->valueint,
        obj_contactinformations_local_nonprim
        );

    return contact_response_local_var;
end:
    if (e_contact_type_local_nonprim) {
        field_e_contact_type_free(e_contact_type_local_nonprim);
        e_contact_type_local_nonprim = NULL;
    }
    if (obj_contactinformations_local_nonprim) {
        contactinformations_response_compound_free(obj_contactinformations_local_nonprim);
        obj_contactinformations_local_nonprim = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_request_compound_v2.h"


char* contact_request_compound_v2_e_contact_type_ToString(ezmax_api_definition__full_contact_request_compound_v2__e e_contact_type) {
    char* e_contact_typeArray[] =  { "NULL", "Agent", "Assistant", "BankAccount", "Borrower", "Buyer", "Company", "ContractCreator", "Creditcardmerchant", "Customer", "Depositreceipt", "Employee", "ExternalBroker", "EzsignSigner", "EzsignUser", "EzcomAgent", "EzcomApprover", "FinancialInstitution", "FranchiseBroker", "Franchisefranchisecontact", "Franchisefranchisesignatory", "FranchiseOfficeBroker", "FranchiseCompany", "FranchiseOwner", "Lead", "MarketingCampaignSample", "Notary", "Payer", "Petowner", "PrivateTo", "RewardMember", "RewardRepresentative", "Seller", "Shared", "Supplier", "Survey", "Inspector" };
    return e_contact_typeArray[e_contact_type];
}

ezmax_api_definition__full_contact_request_compound_v2__e contact_request_compound_v2_e_contact_type_FromString(char* e_contact_type){
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

contact_request_compound_v2_t *contact_request_compound_v2_create(
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
    contactinformations_request_compound_v2_t *obj_contactinformations
    ) {
    contact_request_compound_v2_t *contact_request_compound_v2_local_var = malloc(sizeof(contact_request_compound_v2_t));
    if (!contact_request_compound_v2_local_var) {
        return NULL;
    }
    contact_request_compound_v2_local_var->fki_contacttitle_id = fki_contacttitle_id;
    contact_request_compound_v2_local_var->fki_language_id = fki_language_id;
    contact_request_compound_v2_local_var->e_contact_type = e_contact_type;
    contact_request_compound_v2_local_var->s_contact_firstname = s_contact_firstname;
    contact_request_compound_v2_local_var->s_contact_lastname = s_contact_lastname;
    contact_request_compound_v2_local_var->s_contact_company = s_contact_company;
    contact_request_compound_v2_local_var->dt_contact_birthdate = dt_contact_birthdate;
    contact_request_compound_v2_local_var->s_contact_occupation = s_contact_occupation;
    contact_request_compound_v2_local_var->t_contact_note = t_contact_note;
    contact_request_compound_v2_local_var->b_contact_isactive = b_contact_isactive;
    contact_request_compound_v2_local_var->obj_contactinformations = obj_contactinformations;

    return contact_request_compound_v2_local_var;
}


void contact_request_compound_v2_free(contact_request_compound_v2_t *contact_request_compound_v2) {
    if(NULL == contact_request_compound_v2){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_request_compound_v2->e_contact_type) {
        field_e_contact_type_free(contact_request_compound_v2->e_contact_type);
        contact_request_compound_v2->e_contact_type = NULL;
    }
    if (contact_request_compound_v2->s_contact_firstname) {
        free(contact_request_compound_v2->s_contact_firstname);
        contact_request_compound_v2->s_contact_firstname = NULL;
    }
    if (contact_request_compound_v2->s_contact_lastname) {
        free(contact_request_compound_v2->s_contact_lastname);
        contact_request_compound_v2->s_contact_lastname = NULL;
    }
    if (contact_request_compound_v2->s_contact_company) {
        free(contact_request_compound_v2->s_contact_company);
        contact_request_compound_v2->s_contact_company = NULL;
    }
    if (contact_request_compound_v2->dt_contact_birthdate) {
        free(contact_request_compound_v2->dt_contact_birthdate);
        contact_request_compound_v2->dt_contact_birthdate = NULL;
    }
    if (contact_request_compound_v2->s_contact_occupation) {
        free(contact_request_compound_v2->s_contact_occupation);
        contact_request_compound_v2->s_contact_occupation = NULL;
    }
    if (contact_request_compound_v2->t_contact_note) {
        free(contact_request_compound_v2->t_contact_note);
        contact_request_compound_v2->t_contact_note = NULL;
    }
    if (contact_request_compound_v2->obj_contactinformations) {
        contactinformations_request_compound_v2_free(contact_request_compound_v2->obj_contactinformations);
        contact_request_compound_v2->obj_contactinformations = NULL;
    }
    free(contact_request_compound_v2);
}

cJSON *contact_request_compound_v2_convertToJSON(contact_request_compound_v2_t *contact_request_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // contact_request_compound_v2->fki_contacttitle_id
    if (!contact_request_compound_v2->fki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContacttitleID", contact_request_compound_v2->fki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request_compound_v2->fki_language_id
    if (!contact_request_compound_v2->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", contact_request_compound_v2->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request_compound_v2->e_contact_type
    if (ezmax_api_definition__full_contact_request_compound_v2__NULL == contact_request_compound_v2->e_contact_type) {
        goto fail;
    }
    cJSON *e_contact_type_local_JSON = field_e_contact_type_convertToJSON(contact_request_compound_v2->e_contact_type);
    if(e_contact_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eContactType", e_contact_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // contact_request_compound_v2->s_contact_firstname
    if (!contact_request_compound_v2->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", contact_request_compound_v2->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // contact_request_compound_v2->s_contact_lastname
    if (!contact_request_compound_v2->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", contact_request_compound_v2->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // contact_request_compound_v2->s_contact_company
    if(contact_request_compound_v2->s_contact_company) {
    if(cJSON_AddStringToObject(item, "sContactCompany", contact_request_compound_v2->s_contact_company) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->dt_contact_birthdate
    if(contact_request_compound_v2->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", contact_request_compound_v2->dt_contact_birthdate) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->s_contact_occupation
    if(contact_request_compound_v2->s_contact_occupation) {
    if(cJSON_AddStringToObject(item, "sContactOccupation", contact_request_compound_v2->s_contact_occupation) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->t_contact_note
    if(contact_request_compound_v2->t_contact_note) {
    if(cJSON_AddStringToObject(item, "tContactNote", contact_request_compound_v2->t_contact_note) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->b_contact_isactive
    if(contact_request_compound_v2->b_contact_isactive) {
    if(cJSON_AddBoolToObject(item, "bContactIsactive", contact_request_compound_v2->b_contact_isactive) == NULL) {
    goto fail; //Bool
    }
    }


    // contact_request_compound_v2->obj_contactinformations
    if (!contact_request_compound_v2->obj_contactinformations) {
        goto fail;
    }
    cJSON *obj_contactinformations_local_JSON = contactinformations_request_compound_v2_convertToJSON(contact_request_compound_v2->obj_contactinformations);
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

contact_request_compound_v2_t *contact_request_compound_v2_parseFromJSON(cJSON *contact_request_compound_v2JSON){

    contact_request_compound_v2_t *contact_request_compound_v2_local_var = NULL;

    // define the local variable for contact_request_compound_v2->e_contact_type
    field_e_contact_type_t *e_contact_type_local_nonprim = NULL;

    // define the local variable for contact_request_compound_v2->obj_contactinformations
    contactinformations_request_compound_v2_t *obj_contactinformations_local_nonprim = NULL;

    // contact_request_compound_v2->fki_contacttitle_id
    cJSON *fki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "fkiContacttitleID");
    if (!fki_contacttitle_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contacttitle_id))
    {
    goto end; //Numeric
    }

    // contact_request_compound_v2->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // contact_request_compound_v2->e_contact_type
    cJSON *e_contact_type = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "eContactType");
    if (!e_contact_type) {
        goto end;
    }

    
    e_contact_type_local_nonprim = field_e_contact_type_parseFromJSON(e_contact_type); //custom

    // contact_request_compound_v2->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactFirstname");
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // contact_request_compound_v2->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactLastname");
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // contact_request_compound_v2->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactCompany");
    if (s_contact_company) { 
    if(!cJSON_IsString(s_contact_company) && !cJSON_IsNull(s_contact_company))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "dtContactBirthdate");
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->s_contact_occupation
    cJSON *s_contact_occupation = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactOccupation");
    if (s_contact_occupation) { 
    if(!cJSON_IsString(s_contact_occupation) && !cJSON_IsNull(s_contact_occupation))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->t_contact_note
    cJSON *t_contact_note = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "tContactNote");
    if (t_contact_note) { 
    if(!cJSON_IsString(t_contact_note) && !cJSON_IsNull(t_contact_note))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->b_contact_isactive
    cJSON *b_contact_isactive = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "bContactIsactive");
    if (b_contact_isactive) { 
    if(!cJSON_IsBool(b_contact_isactive))
    {
    goto end; //Bool
    }
    }

    // contact_request_compound_v2->obj_contactinformations
    cJSON *obj_contactinformations = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "objContactinformations");
    if (!obj_contactinformations) {
        goto end;
    }

    
    obj_contactinformations_local_nonprim = contactinformations_request_compound_v2_parseFromJSON(obj_contactinformations); //nonprimitive


    contact_request_compound_v2_local_var = contact_request_compound_v2_create (
        fki_contacttitle_id->valuedouble,
        fki_language_id->valuedouble,
        e_contact_type_local_nonprim,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        s_contact_company && !cJSON_IsNull(s_contact_company) ? strdup(s_contact_company->valuestring) : NULL,
        dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate) ? strdup(dt_contact_birthdate->valuestring) : NULL,
        s_contact_occupation && !cJSON_IsNull(s_contact_occupation) ? strdup(s_contact_occupation->valuestring) : NULL,
        t_contact_note && !cJSON_IsNull(t_contact_note) ? strdup(t_contact_note->valuestring) : NULL,
        b_contact_isactive ? b_contact_isactive->valueint : 0,
        obj_contactinformations_local_nonprim
        );

    return contact_request_compound_v2_local_var;
end:
    if (e_contact_type_local_nonprim) {
        field_e_contact_type_free(e_contact_type_local_nonprim);
        e_contact_type_local_nonprim = NULL;
    }
    if (obj_contactinformations_local_nonprim) {
        contactinformations_request_compound_v2_free(obj_contactinformations_local_nonprim);
        obj_contactinformations_local_nonprim = NULL;
    }
    return NULL;

}

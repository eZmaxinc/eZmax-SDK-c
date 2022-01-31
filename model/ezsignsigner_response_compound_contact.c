#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response_compound_contact.h"



ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_create(
    int pki_contact_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int fki_language_id,
    char *s_email_address,
    char *s_phone_e164,
    char *s_phone_e164_cell
    ) {
    ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_local_var = malloc(sizeof(ezsignsigner_response_compound_contact_t));
    if (!ezsignsigner_response_compound_contact_local_var) {
        return NULL;
    }
    ezsignsigner_response_compound_contact_local_var->pki_contact_id = pki_contact_id;
    ezsignsigner_response_compound_contact_local_var->s_contact_firstname = s_contact_firstname;
    ezsignsigner_response_compound_contact_local_var->s_contact_lastname = s_contact_lastname;
    ezsignsigner_response_compound_contact_local_var->fki_language_id = fki_language_id;
    ezsignsigner_response_compound_contact_local_var->s_email_address = s_email_address;
    ezsignsigner_response_compound_contact_local_var->s_phone_e164 = s_phone_e164;
    ezsignsigner_response_compound_contact_local_var->s_phone_e164_cell = s_phone_e164_cell;

    return ezsignsigner_response_compound_contact_local_var;
}


void ezsignsigner_response_compound_contact_free(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact) {
    if(NULL == ezsignsigner_response_compound_contact){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_response_compound_contact->s_contact_firstname) {
        free(ezsignsigner_response_compound_contact->s_contact_firstname);
        ezsignsigner_response_compound_contact->s_contact_firstname = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_contact_lastname) {
        free(ezsignsigner_response_compound_contact->s_contact_lastname);
        ezsignsigner_response_compound_contact->s_contact_lastname = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_email_address) {
        free(ezsignsigner_response_compound_contact->s_email_address);
        ezsignsigner_response_compound_contact->s_email_address = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_phone_e164) {
        free(ezsignsigner_response_compound_contact->s_phone_e164);
        ezsignsigner_response_compound_contact->s_phone_e164 = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_phone_e164_cell) {
        free(ezsignsigner_response_compound_contact->s_phone_e164_cell);
        ezsignsigner_response_compound_contact->s_phone_e164_cell = NULL;
    }
    free(ezsignsigner_response_compound_contact);
}

cJSON *ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_response_compound_contact->pki_contact_id
    if (!ezsignsigner_response_compound_contact->pki_contact_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiContactID", ezsignsigner_response_compound_contact->pki_contact_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response_compound_contact->s_contact_firstname
    if (!ezsignsigner_response_compound_contact->s_contact_firstname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sContactFirstname", ezsignsigner_response_compound_contact->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // ezsignsigner_response_compound_contact->s_contact_lastname
    if (!ezsignsigner_response_compound_contact->s_contact_lastname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sContactLastname", ezsignsigner_response_compound_contact->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // ezsignsigner_response_compound_contact->fki_language_id
    if (!ezsignsigner_response_compound_contact->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignsigner_response_compound_contact->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response_compound_contact->s_email_address
    if(ezsignsigner_response_compound_contact->s_email_address) { 
    if(cJSON_AddStringToObject(item, "sEmailAddress", ezsignsigner_response_compound_contact->s_email_address) == NULL) {
    goto fail; //String
    }
     } 


    // ezsignsigner_response_compound_contact->s_phone_e164
    if(ezsignsigner_response_compound_contact->s_phone_e164) { 
    if(cJSON_AddStringToObject(item, "sPhoneE164", ezsignsigner_response_compound_contact->s_phone_e164) == NULL) {
    goto fail; //String
    }
     } 


    // ezsignsigner_response_compound_contact->s_phone_e164_cell
    if(ezsignsigner_response_compound_contact->s_phone_e164_cell) { 
    if(cJSON_AddStringToObject(item, "sPhoneE164Cell", ezsignsigner_response_compound_contact->s_phone_e164_cell) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_parseFromJSON(cJSON *ezsignsigner_response_compound_contactJSON){

    ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_local_var = NULL;

    // ezsignsigner_response_compound_contact->pki_contact_id
    cJSON *pki_contact_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "pkiContactID");
    if (!pki_contact_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_contact_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response_compound_contact->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sContactFirstname");
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // ezsignsigner_response_compound_contact->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sContactLastname");
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // ezsignsigner_response_compound_contact->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response_compound_contact->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }
    }

    // ezsignsigner_response_compound_contact->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneE164");
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164))
    {
    goto end; //String
    }
    }

    // ezsignsigner_response_compound_contact->s_phone_e164_cell
    cJSON *s_phone_e164_cell = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneE164Cell");
    if (s_phone_e164_cell) { 
    if(!cJSON_IsString(s_phone_e164_cell))
    {
    goto end; //String
    }
    }


    ezsignsigner_response_compound_contact_local_var = ezsignsigner_response_compound_contact_create (
        pki_contact_id->valuedouble,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        fki_language_id->valuedouble,
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        s_phone_e164 ? strdup(s_phone_e164->valuestring) : NULL,
        s_phone_e164_cell ? strdup(s_phone_e164_cell->valuestring) : NULL
        );

    return ezsignsigner_response_compound_contact_local_var;
end:
    return NULL;

}

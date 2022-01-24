#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response_compound_contact.h"



ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    int fki_language_id,
    char *s_email_address,
    char *s_phone_number,
    char *s_phone_number_cell
    ) {
    ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_local_var = malloc(sizeof(ezsignsigner_response_compound_contact_t));
    if (!ezsignsigner_response_compound_contact_local_var) {
        return NULL;
    }
    ezsignsigner_response_compound_contact_local_var->s_contact_firstname = s_contact_firstname;
    ezsignsigner_response_compound_contact_local_var->s_contact_lastname = s_contact_lastname;
    ezsignsigner_response_compound_contact_local_var->fki_language_id = fki_language_id;
    ezsignsigner_response_compound_contact_local_var->s_email_address = s_email_address;
    ezsignsigner_response_compound_contact_local_var->s_phone_number = s_phone_number;
    ezsignsigner_response_compound_contact_local_var->s_phone_number_cell = s_phone_number_cell;

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
    if (ezsignsigner_response_compound_contact->s_phone_number) {
        free(ezsignsigner_response_compound_contact->s_phone_number);
        ezsignsigner_response_compound_contact->s_phone_number = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_phone_number_cell) {
        free(ezsignsigner_response_compound_contact->s_phone_number_cell);
        ezsignsigner_response_compound_contact->s_phone_number_cell = NULL;
    }
    free(ezsignsigner_response_compound_contact);
}

cJSON *ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact) {
    cJSON *item = cJSON_CreateObject();

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


    // ezsignsigner_response_compound_contact->s_phone_number
    if(ezsignsigner_response_compound_contact->s_phone_number) { 
    if(cJSON_AddStringToObject(item, "sPhoneNumber", ezsignsigner_response_compound_contact->s_phone_number) == NULL) {
    goto fail; //String
    }
     } 


    // ezsignsigner_response_compound_contact->s_phone_number_cell
    if(ezsignsigner_response_compound_contact->s_phone_number_cell) { 
    if(cJSON_AddStringToObject(item, "sPhoneNumberCell", ezsignsigner_response_compound_contact->s_phone_number_cell) == NULL) {
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

    // ezsignsigner_response_compound_contact->s_phone_number
    cJSON *s_phone_number = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneNumber");
    if (s_phone_number) { 
    if(!cJSON_IsString(s_phone_number))
    {
    goto end; //String
    }
    }

    // ezsignsigner_response_compound_contact->s_phone_number_cell
    cJSON *s_phone_number_cell = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneNumberCell");
    if (s_phone_number_cell) { 
    if(!cJSON_IsString(s_phone_number_cell))
    {
    goto end; //String
    }
    }


    ezsignsigner_response_compound_contact_local_var = ezsignsigner_response_compound_contact_create (
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        fki_language_id->valuedouble,
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        s_phone_number ? strdup(s_phone_number->valuestring) : NULL,
        s_phone_number_cell ? strdup(s_phone_number_cell->valuestring) : NULL
        );

    return ezsignsigner_response_compound_contact_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_request_compound_contact.h"



ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    int fki_language_id,
    char *s_email_address,
    char *s_phone_e164,
    char *s_phone_extension,
    char *s_phone_e164_cell,
    char *s_phone_number,
    char *s_phone_number_cell
    ) {
    ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact_local_var = malloc(sizeof(ezsignsigner_request_compound_contact_t));
    if (!ezsignsigner_request_compound_contact_local_var) {
        return NULL;
    }
    ezsignsigner_request_compound_contact_local_var->s_contact_firstname = s_contact_firstname;
    ezsignsigner_request_compound_contact_local_var->s_contact_lastname = s_contact_lastname;
    ezsignsigner_request_compound_contact_local_var->fki_language_id = fki_language_id;
    ezsignsigner_request_compound_contact_local_var->s_email_address = s_email_address;
    ezsignsigner_request_compound_contact_local_var->s_phone_e164 = s_phone_e164;
    ezsignsigner_request_compound_contact_local_var->s_phone_extension = s_phone_extension;
    ezsignsigner_request_compound_contact_local_var->s_phone_e164_cell = s_phone_e164_cell;
    ezsignsigner_request_compound_contact_local_var->s_phone_number = s_phone_number;
    ezsignsigner_request_compound_contact_local_var->s_phone_number_cell = s_phone_number_cell;

    return ezsignsigner_request_compound_contact_local_var;
}


void ezsignsigner_request_compound_contact_free(ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact) {
    if(NULL == ezsignsigner_request_compound_contact){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_request_compound_contact->s_contact_firstname) {
        free(ezsignsigner_request_compound_contact->s_contact_firstname);
        ezsignsigner_request_compound_contact->s_contact_firstname = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_contact_lastname) {
        free(ezsignsigner_request_compound_contact->s_contact_lastname);
        ezsignsigner_request_compound_contact->s_contact_lastname = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_email_address) {
        free(ezsignsigner_request_compound_contact->s_email_address);
        ezsignsigner_request_compound_contact->s_email_address = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_phone_e164) {
        free(ezsignsigner_request_compound_contact->s_phone_e164);
        ezsignsigner_request_compound_contact->s_phone_e164 = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_phone_extension) {
        free(ezsignsigner_request_compound_contact->s_phone_extension);
        ezsignsigner_request_compound_contact->s_phone_extension = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_phone_e164_cell) {
        free(ezsignsigner_request_compound_contact->s_phone_e164_cell);
        ezsignsigner_request_compound_contact->s_phone_e164_cell = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_phone_number) {
        free(ezsignsigner_request_compound_contact->s_phone_number);
        ezsignsigner_request_compound_contact->s_phone_number = NULL;
    }
    if (ezsignsigner_request_compound_contact->s_phone_number_cell) {
        free(ezsignsigner_request_compound_contact->s_phone_number_cell);
        ezsignsigner_request_compound_contact->s_phone_number_cell = NULL;
    }
    free(ezsignsigner_request_compound_contact);
}

cJSON *ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_request_compound_contact->s_contact_firstname
    if (!ezsignsigner_request_compound_contact->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", ezsignsigner_request_compound_contact->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // ezsignsigner_request_compound_contact->s_contact_lastname
    if (!ezsignsigner_request_compound_contact->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", ezsignsigner_request_compound_contact->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // ezsignsigner_request_compound_contact->fki_language_id
    if (!ezsignsigner_request_compound_contact->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignsigner_request_compound_contact->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_request_compound_contact->s_email_address
    if(ezsignsigner_request_compound_contact->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", ezsignsigner_request_compound_contact->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsigner_request_compound_contact->s_phone_e164
    if(ezsignsigner_request_compound_contact->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", ezsignsigner_request_compound_contact->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsigner_request_compound_contact->s_phone_extension
    if(ezsignsigner_request_compound_contact->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", ezsignsigner_request_compound_contact->s_phone_extension) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsigner_request_compound_contact->s_phone_e164_cell
    if(ezsignsigner_request_compound_contact->s_phone_e164_cell) {
    if(cJSON_AddStringToObject(item, "sPhoneE164Cell", ezsignsigner_request_compound_contact->s_phone_e164_cell) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsigner_request_compound_contact->s_phone_number
    if(ezsignsigner_request_compound_contact->s_phone_number) {
    if(cJSON_AddStringToObject(item, "sPhoneNumber", ezsignsigner_request_compound_contact->s_phone_number) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsigner_request_compound_contact->s_phone_number_cell
    if(ezsignsigner_request_compound_contact->s_phone_number_cell) {
    if(cJSON_AddStringToObject(item, "sPhoneNumberCell", ezsignsigner_request_compound_contact->s_phone_number_cell) == NULL) {
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

ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact_parseFromJSON(cJSON *ezsignsigner_request_compound_contactJSON){

    ezsignsigner_request_compound_contact_t *ezsignsigner_request_compound_contact_local_var = NULL;

    // ezsignsigner_request_compound_contact->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sContactFirstname");
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // ezsignsigner_request_compound_contact->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sContactLastname");
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // ezsignsigner_request_compound_contact->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_request_compound_contact->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }
    }

    // ezsignsigner_request_compound_contact->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sPhoneE164");
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164))
    {
    goto end; //String
    }
    }

    // ezsignsigner_request_compound_contact->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sPhoneExtension");
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension))
    {
    goto end; //String
    }
    }

    // ezsignsigner_request_compound_contact->s_phone_e164_cell
    cJSON *s_phone_e164_cell = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sPhoneE164Cell");
    if (s_phone_e164_cell) { 
    if(!cJSON_IsString(s_phone_e164_cell))
    {
    goto end; //String
    }
    }

    // ezsignsigner_request_compound_contact->s_phone_number
    cJSON *s_phone_number = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sPhoneNumber");
    if (s_phone_number) { 
    if(!cJSON_IsString(s_phone_number))
    {
    goto end; //String
    }
    }

    // ezsignsigner_request_compound_contact->s_phone_number_cell
    cJSON *s_phone_number_cell = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compound_contactJSON, "sPhoneNumberCell");
    if (s_phone_number_cell) { 
    if(!cJSON_IsString(s_phone_number_cell))
    {
    goto end; //String
    }
    }


    ezsignsigner_request_compound_contact_local_var = ezsignsigner_request_compound_contact_create (
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        fki_language_id->valuedouble,
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        s_phone_e164 ? strdup(s_phone_e164->valuestring) : NULL,
        s_phone_extension ? strdup(s_phone_extension->valuestring) : NULL,
        s_phone_e164_cell ? strdup(s_phone_e164_cell->valuestring) : NULL,
        s_phone_number ? strdup(s_phone_number->valuestring) : NULL,
        s_phone_number_cell ? strdup(s_phone_number_cell->valuestring) : NULL
        );

    return ezsignsigner_request_compound_contact_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response_compound_contact.h"



static ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_create_internal(
    int *pki_contact_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int *fki_language_id,
    char *s_email_address,
    char *s_phone_e164,
    char *s_phone_extension,
    char *s_phone_e164_cell
    ) {
    ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_local_var = malloc(sizeof(ezsignsigner_response_compound_contact_t));
    if (!ezsignsigner_response_compound_contact_local_var) {
        return NULL;
    }
    memset(ezsignsigner_response_compound_contact_local_var, 0, sizeof(ezsignsigner_response_compound_contact_t));
    ezsignsigner_response_compound_contact_local_var->_library_owned = 1;
    ezsignsigner_response_compound_contact_local_var->pki_contact_id = pki_contact_id;
    ezsignsigner_response_compound_contact_local_var->s_contact_firstname = s_contact_firstname;
    ezsignsigner_response_compound_contact_local_var->s_contact_lastname = s_contact_lastname;
    ezsignsigner_response_compound_contact_local_var->fki_language_id = fki_language_id;
    ezsignsigner_response_compound_contact_local_var->s_email_address = s_email_address;
    ezsignsigner_response_compound_contact_local_var->s_phone_e164 = s_phone_e164;
    ezsignsigner_response_compound_contact_local_var->s_phone_extension = s_phone_extension;
    ezsignsigner_response_compound_contact_local_var->s_phone_e164_cell = s_phone_e164_cell;
    return ezsignsigner_response_compound_contact_local_var;
}

__attribute__((deprecated)) ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact_create(
    int *pki_contact_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    int *fki_language_id,
    char *s_email_address,
    char *s_phone_e164,
    char *s_phone_extension,
    char *s_phone_e164_cell
    ) {
    int *pki_contact_id_copy = NULL;
    if (pki_contact_id) {
        pki_contact_id_copy = malloc(sizeof(int));
        if (pki_contact_id_copy) *pki_contact_id_copy = *pki_contact_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    ezsignsigner_response_compound_contact_t *result = ezsignsigner_response_compound_contact_create_internal (
        pki_contact_id_copy,
        s_contact_firstname,
        s_contact_lastname,
        fki_language_id_copy,
        s_email_address,
        s_phone_e164,
        s_phone_extension,
        s_phone_e164_cell
        );
    if (!result) {
        free(pki_contact_id_copy);
        free(fki_language_id_copy);
    }
    return result;
}

void ezsignsigner_response_compound_contact_free(ezsignsigner_response_compound_contact_t *ezsignsigner_response_compound_contact) {
    if(NULL == ezsignsigner_response_compound_contact){
        return ;
    }
    if(ezsignsigner_response_compound_contact->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigner_response_compound_contact_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_response_compound_contact->pki_contact_id) {
        free(ezsignsigner_response_compound_contact->pki_contact_id);
        ezsignsigner_response_compound_contact->pki_contact_id = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_contact_firstname) {
        free(ezsignsigner_response_compound_contact->s_contact_firstname);
        ezsignsigner_response_compound_contact->s_contact_firstname = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_contact_lastname) {
        free(ezsignsigner_response_compound_contact->s_contact_lastname);
        ezsignsigner_response_compound_contact->s_contact_lastname = NULL;
    }
    if (ezsignsigner_response_compound_contact->fki_language_id) {
        free(ezsignsigner_response_compound_contact->fki_language_id);
        ezsignsigner_response_compound_contact->fki_language_id = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_email_address) {
        free(ezsignsigner_response_compound_contact->s_email_address);
        ezsignsigner_response_compound_contact->s_email_address = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_phone_e164) {
        free(ezsignsigner_response_compound_contact->s_phone_e164);
        ezsignsigner_response_compound_contact->s_phone_e164 = NULL;
    }
    if (ezsignsigner_response_compound_contact->s_phone_extension) {
        free(ezsignsigner_response_compound_contact->s_phone_extension);
        ezsignsigner_response_compound_contact->s_phone_extension = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiContactID", *ezsignsigner_response_compound_contact->pki_contact_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *ezsignsigner_response_compound_contact->fki_language_id) == NULL) {
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


    // ezsignsigner_response_compound_contact->s_phone_extension
    if(ezsignsigner_response_compound_contact->s_phone_extension) {
    if(cJSON_AddStringToObject(item, "sPhoneExtension", ezsignsigner_response_compound_contact->s_phone_extension) == NULL) {
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

    // define the local variable for ezsignsigner_response_compound_contact->pki_contact_id
    int *pki_contact_id_local_var = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    // define the local variable for ezsignsigner_response_compound_contact->fki_language_id
    int *fki_language_id_local_var = NULL;

    char *s_email_address_local_str = NULL;

    char *s_phone_e164_local_str = NULL;

    char *s_phone_extension_local_str = NULL;

    char *s_phone_e164_cell_local_str = NULL;

    // ezsignsigner_response_compound_contact->pki_contact_id
    cJSON *pki_contact_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "pkiContactID");
    if (cJSON_IsNull(pki_contact_id)) {
        pki_contact_id = NULL;
    }
    if (!pki_contact_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_contact_id))
    {
    goto end; //Numeric
    }
    pki_contact_id_local_var = malloc(sizeof(int));
    if(!pki_contact_id_local_var)
    {
        goto end;
    }
    *pki_contact_id_local_var = pki_contact_id->valuedouble;

    // ezsignsigner_response_compound_contact->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // ezsignsigner_response_compound_contact->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // ezsignsigner_response_compound_contact->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // ezsignsigner_response_compound_contact->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // ezsignsigner_response_compound_contact->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // ezsignsigner_response_compound_contact->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneExtension");
    if (cJSON_IsNull(s_phone_extension)) {
        s_phone_extension = NULL;
    }
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension) && !cJSON_IsNull(s_phone_extension))
    {
    goto end; //String
    }
    }

    // ezsignsigner_response_compound_contact->s_phone_e164_cell
    cJSON *s_phone_e164_cell = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compound_contactJSON, "sPhoneE164Cell");
    if (cJSON_IsNull(s_phone_e164_cell)) {
        s_phone_e164_cell = NULL;
    }
    if (s_phone_e164_cell) { 
    if(!cJSON_IsString(s_phone_e164_cell) && !cJSON_IsNull(s_phone_e164_cell))
    {
    goto end; //String
    }
    }


    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_phone_e164 && !cJSON_IsNull(s_phone_e164)) s_phone_e164_local_str = strdup(s_phone_e164->valuestring);
    if (s_phone_extension && !cJSON_IsNull(s_phone_extension)) s_phone_extension_local_str = strdup(s_phone_extension->valuestring);
    if (s_phone_e164_cell && !cJSON_IsNull(s_phone_e164_cell)) s_phone_e164_cell_local_str = strdup(s_phone_e164_cell->valuestring);

    ezsignsigner_response_compound_contact_local_var = ezsignsigner_response_compound_contact_create_internal (
        pki_contact_id_local_var,
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        fki_language_id_local_var,
        s_email_address_local_str,
        s_phone_e164_local_str,
        s_phone_extension_local_str,
        s_phone_e164_cell_local_str
        );

    if (!ezsignsigner_response_compound_contact_local_var) {
        goto end;
    }

    return ezsignsigner_response_compound_contact_local_var;
end:
    if (pki_contact_id_local_var) {
        free(pki_contact_id_local_var);
        pki_contact_id_local_var = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (s_phone_e164_local_str) {
        free(s_phone_e164_local_str);
        s_phone_e164_local_str = NULL;
    }
    if (s_phone_extension_local_str) {
        free(s_phone_extension_local_str);
        s_phone_extension_local_str = NULL;
    }
    if (s_phone_e164_cell_local_str) {
        free(s_phone_e164_cell_local_str);
        s_phone_e164_cell_local_str = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response_compound_user.h"



ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user_create(
    int pki_user_id,
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address
    ) {
    ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_compound_user_t));
    if (!ezsignfoldersignerassociation_response_compound_user_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_compound_user_local_var->pki_user_id = pki_user_id;
    ezsignfoldersignerassociation_response_compound_user_local_var->fki_language_id = fki_language_id;
    ezsignfoldersignerassociation_response_compound_user_local_var->s_user_firstname = s_user_firstname;
    ezsignfoldersignerassociation_response_compound_user_local_var->s_user_lastname = s_user_lastname;
    ezsignfoldersignerassociation_response_compound_user_local_var->s_email_address = s_email_address;

    return ezsignfoldersignerassociation_response_compound_user_local_var;
}


void ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user) {
    if(NULL == ezsignfoldersignerassociation_response_compound_user){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response_compound_user->s_user_firstname) {
        free(ezsignfoldersignerassociation_response_compound_user->s_user_firstname);
        ezsignfoldersignerassociation_response_compound_user->s_user_firstname = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_user->s_user_lastname) {
        free(ezsignfoldersignerassociation_response_compound_user->s_user_lastname);
        ezsignfoldersignerassociation_response_compound_user->s_user_lastname = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_user->s_email_address) {
        free(ezsignfoldersignerassociation_response_compound_user->s_email_address);
        ezsignfoldersignerassociation_response_compound_user->s_email_address = NULL;
    }
    free(ezsignfoldersignerassociation_response_compound_user);
}

cJSON *ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response_compound_user->pki_user_id
    if (!ezsignfoldersignerassociation_response_compound_user->pki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiUserID", ezsignfoldersignerassociation_response_compound_user->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound_user->fki_language_id
    if (!ezsignfoldersignerassociation_response_compound_user->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignfoldersignerassociation_response_compound_user->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound_user->s_user_firstname
    if (!ezsignfoldersignerassociation_response_compound_user->s_user_firstname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sUserFirstname", ezsignfoldersignerassociation_response_compound_user->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // ezsignfoldersignerassociation_response_compound_user->s_user_lastname
    if (!ezsignfoldersignerassociation_response_compound_user->s_user_lastname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sUserLastname", ezsignfoldersignerassociation_response_compound_user->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // ezsignfoldersignerassociation_response_compound_user->s_email_address
    if (!ezsignfoldersignerassociation_response_compound_user->s_email_address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEmailAddress", ezsignfoldersignerassociation_response_compound_user->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compound_userJSON){

    ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user_local_var = NULL;

    // ezsignfoldersignerassociation_response_compound_user->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_userJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound_user->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_userJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound_user->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_userJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // ezsignfoldersignerassociation_response_compound_user->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_userJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // ezsignfoldersignerassociation_response_compound_user->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_userJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }


    ezsignfoldersignerassociation_response_compound_user_local_var = ezsignfoldersignerassociation_response_compound_user_create (
        pki_user_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_email_address->valuestring)
        );

    return ezsignfoldersignerassociation_response_compound_user_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_user.h"



activesession_response_compound_user_t *activesession_response_compound_user_create(
    int pki_user_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address
    ) {
    activesession_response_compound_user_t *activesession_response_compound_user_local_var = malloc(sizeof(activesession_response_compound_user_t));
    if (!activesession_response_compound_user_local_var) {
        return NULL;
    }
    activesession_response_compound_user_local_var->pki_user_id = pki_user_id;
    activesession_response_compound_user_local_var->s_avatar_url = s_avatar_url;
    activesession_response_compound_user_local_var->s_user_firstname = s_user_firstname;
    activesession_response_compound_user_local_var->s_user_lastname = s_user_lastname;
    activesession_response_compound_user_local_var->s_email_address = s_email_address;

    return activesession_response_compound_user_local_var;
}


void activesession_response_compound_user_free(activesession_response_compound_user_t *activesession_response_compound_user) {
    if(NULL == activesession_response_compound_user){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response_compound_user->s_avatar_url) {
        free(activesession_response_compound_user->s_avatar_url);
        activesession_response_compound_user->s_avatar_url = NULL;
    }
    if (activesession_response_compound_user->s_user_firstname) {
        free(activesession_response_compound_user->s_user_firstname);
        activesession_response_compound_user->s_user_firstname = NULL;
    }
    if (activesession_response_compound_user->s_user_lastname) {
        free(activesession_response_compound_user->s_user_lastname);
        activesession_response_compound_user->s_user_lastname = NULL;
    }
    if (activesession_response_compound_user->s_email_address) {
        free(activesession_response_compound_user->s_email_address);
        activesession_response_compound_user->s_email_address = NULL;
    }
    free(activesession_response_compound_user);
}

cJSON *activesession_response_compound_user_convertToJSON(activesession_response_compound_user_t *activesession_response_compound_user) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response_compound_user->pki_user_id
    if (!activesession_response_compound_user->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", activesession_response_compound_user->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_user->s_avatar_url
    if (!activesession_response_compound_user->s_avatar_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAvatarUrl", activesession_response_compound_user->s_avatar_url) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound_user->s_user_firstname
    if (!activesession_response_compound_user->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", activesession_response_compound_user->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound_user->s_user_lastname
    if (!activesession_response_compound_user->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", activesession_response_compound_user->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound_user->s_email_address
    if (!activesession_response_compound_user->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", activesession_response_compound_user->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_response_compound_user_t *activesession_response_compound_user_parseFromJSON(cJSON *activesession_response_compound_userJSON){

    activesession_response_compound_user_t *activesession_response_compound_user_local_var = NULL;

    // activesession_response_compound_user->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // activesession_response_compound_user->s_avatar_url
    cJSON *s_avatar_url = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sAvatarUrl");
    if (!s_avatar_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_avatar_url))
    {
    goto end; //String
    }

    // activesession_response_compound_user->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // activesession_response_compound_user->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // activesession_response_compound_user->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }


    activesession_response_compound_user_local_var = activesession_response_compound_user_create (
        pki_user_id->valuedouble,
        strdup(s_avatar_url->valuestring),
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_email_address->valuestring)
        );

    return activesession_response_compound_user_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_user_response.h"



custom_user_response_t *custom_user_response_create(
    int pki_user_id,
    char *s_user_lastname,
    char *s_user_firstname,
    char *s_email_address
    ) {
    custom_user_response_t *custom_user_response_local_var = malloc(sizeof(custom_user_response_t));
    if (!custom_user_response_local_var) {
        return NULL;
    }
    custom_user_response_local_var->pki_user_id = pki_user_id;
    custom_user_response_local_var->s_user_lastname = s_user_lastname;
    custom_user_response_local_var->s_user_firstname = s_user_firstname;
    custom_user_response_local_var->s_email_address = s_email_address;

    return custom_user_response_local_var;
}


void custom_user_response_free(custom_user_response_t *custom_user_response) {
    if(NULL == custom_user_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_user_response->s_user_lastname) {
        free(custom_user_response->s_user_lastname);
        custom_user_response->s_user_lastname = NULL;
    }
    if (custom_user_response->s_user_firstname) {
        free(custom_user_response->s_user_firstname);
        custom_user_response->s_user_firstname = NULL;
    }
    if (custom_user_response->s_email_address) {
        free(custom_user_response->s_email_address);
        custom_user_response->s_email_address = NULL;
    }
    free(custom_user_response);
}

cJSON *custom_user_response_convertToJSON(custom_user_response_t *custom_user_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_user_response->pki_user_id
    if (!custom_user_response->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", custom_user_response->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_user_response->s_user_lastname
    if (!custom_user_response->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", custom_user_response->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // custom_user_response->s_user_firstname
    if (!custom_user_response->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", custom_user_response->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // custom_user_response->s_email_address
    if (!custom_user_response->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", custom_user_response->s_email_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_user_response_t *custom_user_response_parseFromJSON(cJSON *custom_user_responseJSON){

    custom_user_response_t *custom_user_response_local_var = NULL;

    // custom_user_response->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(custom_user_responseJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // custom_user_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(custom_user_responseJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // custom_user_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(custom_user_responseJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // custom_user_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(custom_user_responseJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }


    custom_user_response_local_var = custom_user_response_create (
        pki_user_id->valuedouble,
        strdup(s_user_lastname->valuestring),
        strdup(s_user_firstname->valuestring),
        strdup(s_email_address->valuestring)
        );

    return custom_user_response_local_var;
end:
    return NULL;

}

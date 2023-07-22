#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_response.h"



usergroupmembership_response_t *usergroupmembership_response_create(
    int pki_usergroupmembership_id,
    int fki_usergroup_id,
    int fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x
    ) {
    usergroupmembership_response_t *usergroupmembership_response_local_var = malloc(sizeof(usergroupmembership_response_t));
    if (!usergroupmembership_response_local_var) {
        return NULL;
    }
    usergroupmembership_response_local_var->pki_usergroupmembership_id = pki_usergroupmembership_id;
    usergroupmembership_response_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupmembership_response_local_var->fki_user_id = fki_user_id;
    usergroupmembership_response_local_var->s_user_firstname = s_user_firstname;
    usergroupmembership_response_local_var->s_user_lastname = s_user_lastname;
    usergroupmembership_response_local_var->s_user_loginname = s_user_loginname;
    usergroupmembership_response_local_var->s_email_address = s_email_address;
    usergroupmembership_response_local_var->s_usergroup_name_x = s_usergroup_name_x;

    return usergroupmembership_response_local_var;
}


void usergroupmembership_response_free(usergroupmembership_response_t *usergroupmembership_response) {
    if(NULL == usergroupmembership_response){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_response->s_user_firstname) {
        free(usergroupmembership_response->s_user_firstname);
        usergroupmembership_response->s_user_firstname = NULL;
    }
    if (usergroupmembership_response->s_user_lastname) {
        free(usergroupmembership_response->s_user_lastname);
        usergroupmembership_response->s_user_lastname = NULL;
    }
    if (usergroupmembership_response->s_user_loginname) {
        free(usergroupmembership_response->s_user_loginname);
        usergroupmembership_response->s_user_loginname = NULL;
    }
    if (usergroupmembership_response->s_email_address) {
        free(usergroupmembership_response->s_email_address);
        usergroupmembership_response->s_email_address = NULL;
    }
    if (usergroupmembership_response->s_usergroup_name_x) {
        free(usergroupmembership_response->s_usergroup_name_x);
        usergroupmembership_response->s_usergroup_name_x = NULL;
    }
    free(usergroupmembership_response);
}

cJSON *usergroupmembership_response_convertToJSON(usergroupmembership_response_t *usergroupmembership_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_response->pki_usergroupmembership_id
    if (!usergroupmembership_response->pki_usergroupmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupmembershipID", usergroupmembership_response->pki_usergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response->fki_usergroup_id
    if (!usergroupmembership_response->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", usergroupmembership_response->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response->fki_user_id
    if (!usergroupmembership_response->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupmembership_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response->s_user_firstname
    if (!usergroupmembership_response->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", usergroupmembership_response->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // usergroupmembership_response->s_user_lastname
    if (!usergroupmembership_response->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", usergroupmembership_response->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // usergroupmembership_response->s_user_loginname
    if (!usergroupmembership_response->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", usergroupmembership_response->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // usergroupmembership_response->s_email_address
    if(usergroupmembership_response->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", usergroupmembership_response->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response->s_usergroup_name_x
    if (!usergroupmembership_response->s_usergroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroupmembership_response->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupmembership_response_t *usergroupmembership_response_parseFromJSON(cJSON *usergroupmembership_responseJSON){

    usergroupmembership_response_t *usergroupmembership_response_local_var = NULL;

    // usergroupmembership_response->pki_usergroupmembership_id
    cJSON *pki_usergroupmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "pkiUsergroupmembershipID");
    if (!pki_usergroupmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupmembership_id))
    {
    goto end; //Numeric
    }

    // usergroupmembership_response->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "fkiUsergroupID");
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroupmembership_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // usergroupmembership_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // usergroupmembership_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // usergroupmembership_response->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // usergroupmembership_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUsergroupNameX");
    if (!s_usergroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }


    usergroupmembership_response_local_var = usergroupmembership_response_create (
        pki_usergroupmembership_id->valuedouble,
        fki_usergroup_id->valuedouble,
        fki_user_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        strdup(s_usergroup_name_x->valuestring)
        );

    return usergroupmembership_response_local_var;
end:
    return NULL;

}

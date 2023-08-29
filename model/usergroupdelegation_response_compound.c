#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_response_compound.h"



usergroupdelegation_response_compound_t *usergroupdelegation_response_compound_create(
    int pki_usergroupdelegation_id,
    int fki_usergroup_id,
    int fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x
    ) {
    usergroupdelegation_response_compound_t *usergroupdelegation_response_compound_local_var = malloc(sizeof(usergroupdelegation_response_compound_t));
    if (!usergroupdelegation_response_compound_local_var) {
        return NULL;
    }
    usergroupdelegation_response_compound_local_var->pki_usergroupdelegation_id = pki_usergroupdelegation_id;
    usergroupdelegation_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupdelegation_response_compound_local_var->fki_user_id = fki_user_id;
    usergroupdelegation_response_compound_local_var->s_user_firstname = s_user_firstname;
    usergroupdelegation_response_compound_local_var->s_user_lastname = s_user_lastname;
    usergroupdelegation_response_compound_local_var->s_user_loginname = s_user_loginname;
    usergroupdelegation_response_compound_local_var->s_email_address = s_email_address;
    usergroupdelegation_response_compound_local_var->s_usergroup_name_x = s_usergroup_name_x;

    return usergroupdelegation_response_compound_local_var;
}


void usergroupdelegation_response_compound_free(usergroupdelegation_response_compound_t *usergroupdelegation_response_compound) {
    if(NULL == usergroupdelegation_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupdelegation_response_compound->s_user_firstname) {
        free(usergroupdelegation_response_compound->s_user_firstname);
        usergroupdelegation_response_compound->s_user_firstname = NULL;
    }
    if (usergroupdelegation_response_compound->s_user_lastname) {
        free(usergroupdelegation_response_compound->s_user_lastname);
        usergroupdelegation_response_compound->s_user_lastname = NULL;
    }
    if (usergroupdelegation_response_compound->s_user_loginname) {
        free(usergroupdelegation_response_compound->s_user_loginname);
        usergroupdelegation_response_compound->s_user_loginname = NULL;
    }
    if (usergroupdelegation_response_compound->s_email_address) {
        free(usergroupdelegation_response_compound->s_email_address);
        usergroupdelegation_response_compound->s_email_address = NULL;
    }
    if (usergroupdelegation_response_compound->s_usergroup_name_x) {
        free(usergroupdelegation_response_compound->s_usergroup_name_x);
        usergroupdelegation_response_compound->s_usergroup_name_x = NULL;
    }
    free(usergroupdelegation_response_compound);
}

cJSON *usergroupdelegation_response_compound_convertToJSON(usergroupdelegation_response_compound_t *usergroupdelegation_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_response_compound->pki_usergroupdelegation_id
    if (!usergroupdelegation_response_compound->pki_usergroupdelegation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupdelegationID", usergroupdelegation_response_compound->pki_usergroupdelegation_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupdelegation_response_compound->fki_usergroup_id
    if (!usergroupdelegation_response_compound->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", usergroupdelegation_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupdelegation_response_compound->fki_user_id
    if (!usergroupdelegation_response_compound->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupdelegation_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupdelegation_response_compound->s_user_firstname
    if (!usergroupdelegation_response_compound->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", usergroupdelegation_response_compound->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // usergroupdelegation_response_compound->s_user_lastname
    if (!usergroupdelegation_response_compound->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", usergroupdelegation_response_compound->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // usergroupdelegation_response_compound->s_user_loginname
    if (!usergroupdelegation_response_compound->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", usergroupdelegation_response_compound->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // usergroupdelegation_response_compound->s_email_address
    if(usergroupdelegation_response_compound->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", usergroupdelegation_response_compound->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // usergroupdelegation_response_compound->s_usergroup_name_x
    if (!usergroupdelegation_response_compound->s_usergroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroupdelegation_response_compound->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupdelegation_response_compound_t *usergroupdelegation_response_compound_parseFromJSON(cJSON *usergroupdelegation_response_compoundJSON){

    usergroupdelegation_response_compound_t *usergroupdelegation_response_compound_local_var = NULL;

    // usergroupdelegation_response_compound->pki_usergroupdelegation_id
    cJSON *pki_usergroupdelegation_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "pkiUsergroupdelegationID");
    if (!pki_usergroupdelegation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupdelegation_id))
    {
    goto end; //Numeric
    }

    // usergroupdelegation_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "fkiUsergroupID");
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroupdelegation_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // usergroupdelegation_response_compound->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // usergroupdelegation_response_compound->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // usergroupdelegation_response_compound->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // usergroupdelegation_response_compound->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // usergroupdelegation_response_compound->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_response_compoundJSON, "sUsergroupNameX");
    if (!s_usergroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }


    usergroupdelegation_response_compound_local_var = usergroupdelegation_response_compound_create (
        pki_usergroupdelegation_id->valuedouble,
        fki_usergroup_id->valuedouble,
        fki_user_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        strdup(s_usergroup_name_x->valuestring)
        );

    return usergroupdelegation_response_compound_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_response_compound.h"



usergroupmembership_response_compound_t *usergroupmembership_response_compound_create(
    int pki_usergroupmembership_id,
    int fki_usergroup_id,
    int fki_user_id,
    int fki_usergroupexternal_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x,
    char *s_usergroupexternal_name
    ) {
    usergroupmembership_response_compound_t *usergroupmembership_response_compound_local_var = malloc(sizeof(usergroupmembership_response_compound_t));
    if (!usergroupmembership_response_compound_local_var) {
        return NULL;
    }
    usergroupmembership_response_compound_local_var->pki_usergroupmembership_id = pki_usergroupmembership_id;
    usergroupmembership_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupmembership_response_compound_local_var->fki_user_id = fki_user_id;
    usergroupmembership_response_compound_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;
    usergroupmembership_response_compound_local_var->s_user_firstname = s_user_firstname;
    usergroupmembership_response_compound_local_var->s_user_lastname = s_user_lastname;
    usergroupmembership_response_compound_local_var->s_user_loginname = s_user_loginname;
    usergroupmembership_response_compound_local_var->s_email_address = s_email_address;
    usergroupmembership_response_compound_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroupmembership_response_compound_local_var->s_usergroupexternal_name = s_usergroupexternal_name;

    return usergroupmembership_response_compound_local_var;
}


void usergroupmembership_response_compound_free(usergroupmembership_response_compound_t *usergroupmembership_response_compound) {
    if(NULL == usergroupmembership_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_response_compound->s_user_firstname) {
        free(usergroupmembership_response_compound->s_user_firstname);
        usergroupmembership_response_compound->s_user_firstname = NULL;
    }
    if (usergroupmembership_response_compound->s_user_lastname) {
        free(usergroupmembership_response_compound->s_user_lastname);
        usergroupmembership_response_compound->s_user_lastname = NULL;
    }
    if (usergroupmembership_response_compound->s_user_loginname) {
        free(usergroupmembership_response_compound->s_user_loginname);
        usergroupmembership_response_compound->s_user_loginname = NULL;
    }
    if (usergroupmembership_response_compound->s_email_address) {
        free(usergroupmembership_response_compound->s_email_address);
        usergroupmembership_response_compound->s_email_address = NULL;
    }
    if (usergroupmembership_response_compound->s_usergroup_name_x) {
        free(usergroupmembership_response_compound->s_usergroup_name_x);
        usergroupmembership_response_compound->s_usergroup_name_x = NULL;
    }
    if (usergroupmembership_response_compound->s_usergroupexternal_name) {
        free(usergroupmembership_response_compound->s_usergroupexternal_name);
        usergroupmembership_response_compound->s_usergroupexternal_name = NULL;
    }
    free(usergroupmembership_response_compound);
}

cJSON *usergroupmembership_response_compound_convertToJSON(usergroupmembership_response_compound_t *usergroupmembership_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_response_compound->pki_usergroupmembership_id
    if (!usergroupmembership_response_compound->pki_usergroupmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupmembershipID", usergroupmembership_response_compound->pki_usergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response_compound->fki_usergroup_id
    if (!usergroupmembership_response_compound->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", usergroupmembership_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response_compound->fki_user_id
    if(usergroupmembership_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupmembership_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_response_compound->fki_usergroupexternal_id
    if(usergroupmembership_response_compound->fki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", usergroupmembership_response_compound->fki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_response_compound->s_user_firstname
    if(usergroupmembership_response_compound->s_user_firstname) {
    if(cJSON_AddStringToObject(item, "sUserFirstname", usergroupmembership_response_compound->s_user_firstname) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response_compound->s_user_lastname
    if(usergroupmembership_response_compound->s_user_lastname) {
    if(cJSON_AddStringToObject(item, "sUserLastname", usergroupmembership_response_compound->s_user_lastname) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response_compound->s_user_loginname
    if(usergroupmembership_response_compound->s_user_loginname) {
    if(cJSON_AddStringToObject(item, "sUserLoginname", usergroupmembership_response_compound->s_user_loginname) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response_compound->s_email_address
    if(usergroupmembership_response_compound->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", usergroupmembership_response_compound->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response_compound->s_usergroup_name_x
    if (!usergroupmembership_response_compound->s_usergroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroupmembership_response_compound->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }


    // usergroupmembership_response_compound->s_usergroupexternal_name
    if(usergroupmembership_response_compound->s_usergroupexternal_name) {
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupmembership_response_compound->s_usergroupexternal_name) == NULL) {
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

usergroupmembership_response_compound_t *usergroupmembership_response_compound_parseFromJSON(cJSON *usergroupmembership_response_compoundJSON){

    usergroupmembership_response_compound_t *usergroupmembership_response_compound_local_var = NULL;

    // usergroupmembership_response_compound->pki_usergroupmembership_id
    cJSON *pki_usergroupmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "pkiUsergroupmembershipID");
    if (!pki_usergroupmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupmembership_id))
    {
    goto end; //Numeric
    }

    // usergroupmembership_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "fkiUsergroupID");
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroupmembership_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // usergroupmembership_response_compound->fki_usergroupexternal_id
    cJSON *fki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "fkiUsergroupexternalID");
    if (fki_usergroupexternal_id) { 
    if(!cJSON_IsNumber(fki_usergroupexternal_id))
    {
    goto end; //Numeric
    }
    }

    // usergroupmembership_response_compound->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "sUserFirstname");
    if (s_user_firstname) { 
    if(!cJSON_IsString(s_user_firstname) && !cJSON_IsNull(s_user_firstname))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response_compound->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "sUserLastname");
    if (s_user_lastname) { 
    if(!cJSON_IsString(s_user_lastname) && !cJSON_IsNull(s_user_lastname))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response_compound->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "sUserLoginname");
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname) && !cJSON_IsNull(s_user_loginname))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response_compound->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response_compound->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "sUsergroupNameX");
    if (!s_usergroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }

    // usergroupmembership_response_compound->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupmembership_response_compoundJSON, "sUsergroupexternalName");
    if (s_usergroupexternal_name) { 
    if(!cJSON_IsString(s_usergroupexternal_name) && !cJSON_IsNull(s_usergroupexternal_name))
    {
    goto end; //String
    }
    }


    usergroupmembership_response_compound_local_var = usergroupmembership_response_compound_create (
        pki_usergroupmembership_id->valuedouble,
        fki_usergroup_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroupexternal_id ? fki_usergroupexternal_id->valuedouble : 0,
        s_user_firstname && !cJSON_IsNull(s_user_firstname) ? strdup(s_user_firstname->valuestring) : NULL,
        s_user_lastname && !cJSON_IsNull(s_user_lastname) ? strdup(s_user_lastname->valuestring) : NULL,
        s_user_loginname && !cJSON_IsNull(s_user_loginname) ? strdup(s_user_loginname->valuestring) : NULL,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        strdup(s_usergroup_name_x->valuestring),
        s_usergroupexternal_name && !cJSON_IsNull(s_usergroupexternal_name) ? strdup(s_usergroupexternal_name->valuestring) : NULL
        );

    return usergroupmembership_response_compound_local_var;
end:
    return NULL;

}

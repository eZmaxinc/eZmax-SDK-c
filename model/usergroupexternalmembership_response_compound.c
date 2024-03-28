#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternalmembership_response_compound.h"



usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound_create(
    int pki_usergroupexternalmembership_id,
    int fki_usergroupexternal_id,
    int fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroupexternal_name
    ) {
    usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound_local_var = malloc(sizeof(usergroupexternalmembership_response_compound_t));
    if (!usergroupexternalmembership_response_compound_local_var) {
        return NULL;
    }
    usergroupexternalmembership_response_compound_local_var->pki_usergroupexternalmembership_id = pki_usergroupexternalmembership_id;
    usergroupexternalmembership_response_compound_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;
    usergroupexternalmembership_response_compound_local_var->fki_user_id = fki_user_id;
    usergroupexternalmembership_response_compound_local_var->s_user_firstname = s_user_firstname;
    usergroupexternalmembership_response_compound_local_var->s_user_lastname = s_user_lastname;
    usergroupexternalmembership_response_compound_local_var->s_user_loginname = s_user_loginname;
    usergroupexternalmembership_response_compound_local_var->s_email_address = s_email_address;
    usergroupexternalmembership_response_compound_local_var->s_usergroupexternal_name = s_usergroupexternal_name;

    return usergroupexternalmembership_response_compound_local_var;
}


void usergroupexternalmembership_response_compound_free(usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound) {
    if(NULL == usergroupexternalmembership_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternalmembership_response_compound->s_user_firstname) {
        free(usergroupexternalmembership_response_compound->s_user_firstname);
        usergroupexternalmembership_response_compound->s_user_firstname = NULL;
    }
    if (usergroupexternalmembership_response_compound->s_user_lastname) {
        free(usergroupexternalmembership_response_compound->s_user_lastname);
        usergroupexternalmembership_response_compound->s_user_lastname = NULL;
    }
    if (usergroupexternalmembership_response_compound->s_user_loginname) {
        free(usergroupexternalmembership_response_compound->s_user_loginname);
        usergroupexternalmembership_response_compound->s_user_loginname = NULL;
    }
    if (usergroupexternalmembership_response_compound->s_email_address) {
        free(usergroupexternalmembership_response_compound->s_email_address);
        usergroupexternalmembership_response_compound->s_email_address = NULL;
    }
    if (usergroupexternalmembership_response_compound->s_usergroupexternal_name) {
        free(usergroupexternalmembership_response_compound->s_usergroupexternal_name);
        usergroupexternalmembership_response_compound->s_usergroupexternal_name = NULL;
    }
    free(usergroupexternalmembership_response_compound);
}

cJSON *usergroupexternalmembership_response_compound_convertToJSON(usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternalmembership_response_compound->pki_usergroupexternalmembership_id
    if (!usergroupexternalmembership_response_compound->pki_usergroupexternalmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalmembershipID", usergroupexternalmembership_response_compound->pki_usergroupexternalmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternalmembership_response_compound->fki_usergroupexternal_id
    if (!usergroupexternalmembership_response_compound->fki_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", usergroupexternalmembership_response_compound->fki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternalmembership_response_compound->fki_user_id
    if (!usergroupexternalmembership_response_compound->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupexternalmembership_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternalmembership_response_compound->s_user_firstname
    if (!usergroupexternalmembership_response_compound->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", usergroupexternalmembership_response_compound->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response_compound->s_user_lastname
    if (!usergroupexternalmembership_response_compound->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", usergroupexternalmembership_response_compound->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response_compound->s_user_loginname
    if (!usergroupexternalmembership_response_compound->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", usergroupexternalmembership_response_compound->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response_compound->s_email_address
    if (!usergroupexternalmembership_response_compound->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", usergroupexternalmembership_response_compound->s_email_address) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response_compound->s_usergroupexternal_name
    if (!usergroupexternalmembership_response_compound->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternalmembership_response_compound->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound_parseFromJSON(cJSON *usergroupexternalmembership_response_compoundJSON){

    usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound_local_var = NULL;

    // usergroupexternalmembership_response_compound->pki_usergroupexternalmembership_id
    cJSON *pki_usergroupexternalmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "pkiUsergroupexternalmembershipID");
    if (!pki_usergroupexternalmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupexternalmembership_id))
    {
    goto end; //Numeric
    }

    // usergroupexternalmembership_response_compound->fki_usergroupexternal_id
    cJSON *fki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "fkiUsergroupexternalID");
    if (!fki_usergroupexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroupexternal_id))
    {
    goto end; //Numeric
    }

    // usergroupexternalmembership_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // usergroupexternalmembership_response_compound->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response_compound->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response_compound->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response_compound->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response_compound->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_response_compoundJSON, "sUsergroupexternalName");
    if (!s_usergroupexternal_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_name))
    {
    goto end; //String
    }


    usergroupexternalmembership_response_compound_local_var = usergroupexternalmembership_response_compound_create (
        pki_usergroupexternalmembership_id->valuedouble,
        fki_usergroupexternal_id->valuedouble,
        fki_user_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        strdup(s_email_address->valuestring),
        strdup(s_usergroupexternal_name->valuestring)
        );

    return usergroupexternalmembership_response_compound_local_var;
end:
    return NULL;

}

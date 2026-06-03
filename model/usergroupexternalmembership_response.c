#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternalmembership_response.h"



static usergroupexternalmembership_response_t *usergroupexternalmembership_response_create_internal(
    int *pki_usergroupexternalmembership_id,
    int *fki_usergroupexternal_id,
    int *fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroupexternal_name
    ) {
    usergroupexternalmembership_response_t *usergroupexternalmembership_response_local_var = malloc(sizeof(usergroupexternalmembership_response_t));
    if (!usergroupexternalmembership_response_local_var) {
        return NULL;
    }
    memset(usergroupexternalmembership_response_local_var, 0, sizeof(usergroupexternalmembership_response_t));
    usergroupexternalmembership_response_local_var->_library_owned = 1;
    usergroupexternalmembership_response_local_var->pki_usergroupexternalmembership_id = pki_usergroupexternalmembership_id;
    usergroupexternalmembership_response_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;
    usergroupexternalmembership_response_local_var->fki_user_id = fki_user_id;
    usergroupexternalmembership_response_local_var->s_user_firstname = s_user_firstname;
    usergroupexternalmembership_response_local_var->s_user_lastname = s_user_lastname;
    usergroupexternalmembership_response_local_var->s_user_loginname = s_user_loginname;
    usergroupexternalmembership_response_local_var->s_email_address = s_email_address;
    usergroupexternalmembership_response_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    return usergroupexternalmembership_response_local_var;
}

__attribute__((deprecated)) usergroupexternalmembership_response_t *usergroupexternalmembership_response_create(
    int *pki_usergroupexternalmembership_id,
    int *fki_usergroupexternal_id,
    int *fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroupexternal_name
    ) {
    int *pki_usergroupexternalmembership_id_copy = NULL;
    if (pki_usergroupexternalmembership_id) {
        pki_usergroupexternalmembership_id_copy = malloc(sizeof(int));
        if (pki_usergroupexternalmembership_id_copy) *pki_usergroupexternalmembership_id_copy = *pki_usergroupexternalmembership_id;
    }
    int *fki_usergroupexternal_id_copy = NULL;
    if (fki_usergroupexternal_id) {
        fki_usergroupexternal_id_copy = malloc(sizeof(int));
        if (fki_usergroupexternal_id_copy) *fki_usergroupexternal_id_copy = *fki_usergroupexternal_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    usergroupexternalmembership_response_t *result = usergroupexternalmembership_response_create_internal (
        pki_usergroupexternalmembership_id_copy,
        fki_usergroupexternal_id_copy,
        fki_user_id_copy,
        s_user_firstname,
        s_user_lastname,
        s_user_loginname,
        s_email_address,
        s_usergroupexternal_name
        );
    if (!result) {
        free(pki_usergroupexternalmembership_id_copy);
        free(fki_usergroupexternal_id_copy);
        free(fki_user_id_copy);
    }
    return result;
}

void usergroupexternalmembership_response_free(usergroupexternalmembership_response_t *usergroupexternalmembership_response) {
    if(NULL == usergroupexternalmembership_response){
        return ;
    }
    if(usergroupexternalmembership_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternalmembership_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternalmembership_response->pki_usergroupexternalmembership_id) {
        free(usergroupexternalmembership_response->pki_usergroupexternalmembership_id);
        usergroupexternalmembership_response->pki_usergroupexternalmembership_id = NULL;
    }
    if (usergroupexternalmembership_response->fki_usergroupexternal_id) {
        free(usergroupexternalmembership_response->fki_usergroupexternal_id);
        usergroupexternalmembership_response->fki_usergroupexternal_id = NULL;
    }
    if (usergroupexternalmembership_response->fki_user_id) {
        free(usergroupexternalmembership_response->fki_user_id);
        usergroupexternalmembership_response->fki_user_id = NULL;
    }
    if (usergroupexternalmembership_response->s_user_firstname) {
        free(usergroupexternalmembership_response->s_user_firstname);
        usergroupexternalmembership_response->s_user_firstname = NULL;
    }
    if (usergroupexternalmembership_response->s_user_lastname) {
        free(usergroupexternalmembership_response->s_user_lastname);
        usergroupexternalmembership_response->s_user_lastname = NULL;
    }
    if (usergroupexternalmembership_response->s_user_loginname) {
        free(usergroupexternalmembership_response->s_user_loginname);
        usergroupexternalmembership_response->s_user_loginname = NULL;
    }
    if (usergroupexternalmembership_response->s_email_address) {
        free(usergroupexternalmembership_response->s_email_address);
        usergroupexternalmembership_response->s_email_address = NULL;
    }
    if (usergroupexternalmembership_response->s_usergroupexternal_name) {
        free(usergroupexternalmembership_response->s_usergroupexternal_name);
        usergroupexternalmembership_response->s_usergroupexternal_name = NULL;
    }
    free(usergroupexternalmembership_response);
}

cJSON *usergroupexternalmembership_response_convertToJSON(usergroupexternalmembership_response_t *usergroupexternalmembership_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternalmembership_response->pki_usergroupexternalmembership_id
    if (!usergroupexternalmembership_response->pki_usergroupexternalmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupexternalmembershipID", *usergroupexternalmembership_response->pki_usergroupexternalmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternalmembership_response->fki_usergroupexternal_id
    if (!usergroupexternalmembership_response->fki_usergroupexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", *usergroupexternalmembership_response->fki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternalmembership_response->fki_user_id
    if (!usergroupexternalmembership_response->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", *usergroupexternalmembership_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupexternalmembership_response->s_user_firstname
    if (!usergroupexternalmembership_response->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", usergroupexternalmembership_response->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response->s_user_lastname
    if (!usergroupexternalmembership_response->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", usergroupexternalmembership_response->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response->s_user_loginname
    if (!usergroupexternalmembership_response->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", usergroupexternalmembership_response->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response->s_email_address
    if (!usergroupexternalmembership_response->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", usergroupexternalmembership_response->s_email_address) == NULL) {
    goto fail; //String
    }


    // usergroupexternalmembership_response->s_usergroupexternal_name
    if (!usergroupexternalmembership_response->s_usergroupexternal_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupexternalmembership_response->s_usergroupexternal_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternalmembership_response_t *usergroupexternalmembership_response_parseFromJSON(cJSON *usergroupexternalmembership_responseJSON){

    usergroupexternalmembership_response_t *usergroupexternalmembership_response_local_var = NULL;

    // define the local variable for usergroupexternalmembership_response->pki_usergroupexternalmembership_id
    int *pki_usergroupexternalmembership_id_local_var = NULL;

    // define the local variable for usergroupexternalmembership_response->fki_usergroupexternal_id
    int *fki_usergroupexternal_id_local_var = NULL;

    // define the local variable for usergroupexternalmembership_response->fki_user_id
    int *fki_user_id_local_var = NULL;

    char *s_user_firstname_local_str = NULL;

    char *s_user_lastname_local_str = NULL;

    char *s_user_loginname_local_str = NULL;

    char *s_email_address_local_str = NULL;

    char *s_usergroupexternal_name_local_str = NULL;

    // usergroupexternalmembership_response->pki_usergroupexternalmembership_id
    cJSON *pki_usergroupexternalmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "pkiUsergroupexternalmembershipID");
    if (cJSON_IsNull(pki_usergroupexternalmembership_id)) {
        pki_usergroupexternalmembership_id = NULL;
    }
    if (!pki_usergroupexternalmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupexternalmembership_id))
    {
    goto end; //Numeric
    }
    pki_usergroupexternalmembership_id_local_var = malloc(sizeof(int));
    if(!pki_usergroupexternalmembership_id_local_var)
    {
        goto end;
    }
    *pki_usergroupexternalmembership_id_local_var = pki_usergroupexternalmembership_id->valuedouble;

    // usergroupexternalmembership_response->fki_usergroupexternal_id
    cJSON *fki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "fkiUsergroupexternalID");
    if (cJSON_IsNull(fki_usergroupexternal_id)) {
        fki_usergroupexternal_id = NULL;
    }
    if (!fki_usergroupexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroupexternal_id))
    {
    goto end; //Numeric
    }
    fki_usergroupexternal_id_local_var = malloc(sizeof(int));
    if(!fki_usergroupexternal_id_local_var)
    {
        goto end;
    }
    *fki_usergroupexternal_id_local_var = fki_usergroupexternal_id->valuedouble;

    // usergroupexternalmembership_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;

    // usergroupexternalmembership_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "sUserFirstname");
    if (cJSON_IsNull(s_user_firstname)) {
        s_user_firstname = NULL;
    }
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "sUserLastname");
    if (cJSON_IsNull(s_user_lastname)) {
        s_user_lastname = NULL;
    }
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }

    // usergroupexternalmembership_response->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupexternalmembership_responseJSON, "sUsergroupexternalName");
    if (cJSON_IsNull(s_usergroupexternal_name)) {
        s_usergroupexternal_name = NULL;
    }
    if (!s_usergroupexternal_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroupexternal_name))
    {
    goto end; //String
    }


    if (s_user_firstname && !cJSON_IsNull(s_user_firstname)) s_user_firstname_local_str = strdup(s_user_firstname->valuestring);
    if (s_user_lastname && !cJSON_IsNull(s_user_lastname)) s_user_lastname_local_str = strdup(s_user_lastname->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_usergroupexternal_name && !cJSON_IsNull(s_usergroupexternal_name)) s_usergroupexternal_name_local_str = strdup(s_usergroupexternal_name->valuestring);

    usergroupexternalmembership_response_local_var = usergroupexternalmembership_response_create_internal (
        pki_usergroupexternalmembership_id_local_var,
        fki_usergroupexternal_id_local_var,
        fki_user_id_local_var,
        s_user_firstname_local_str,
        s_user_lastname_local_str,
        s_user_loginname_local_str,
        s_email_address_local_str,
        s_usergroupexternal_name_local_str
        );

    if (!usergroupexternalmembership_response_local_var) {
        goto end;
    }

    return usergroupexternalmembership_response_local_var;
end:
    if (pki_usergroupexternalmembership_id_local_var) {
        free(pki_usergroupexternalmembership_id_local_var);
        pki_usergroupexternalmembership_id_local_var = NULL;
    }
    if (fki_usergroupexternal_id_local_var) {
        free(fki_usergroupexternal_id_local_var);
        fki_usergroupexternal_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (s_user_firstname_local_str) {
        free(s_user_firstname_local_str);
        s_user_firstname_local_str = NULL;
    }
    if (s_user_lastname_local_str) {
        free(s_user_lastname_local_str);
        s_user_lastname_local_str = NULL;
    }
    if (s_user_loginname_local_str) {
        free(s_user_loginname_local_str);
        s_user_loginname_local_str = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (s_usergroupexternal_name_local_str) {
        free(s_usergroupexternal_name_local_str);
        s_usergroupexternal_name_local_str = NULL;
    }
    return NULL;

}

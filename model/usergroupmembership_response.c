#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_response.h"



static usergroupmembership_response_t *usergroupmembership_response_create_internal(
    int *pki_usergroupmembership_id,
    int *fki_usergroup_id,
    int *fki_user_id,
    int *fki_usergroupexternal_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x,
    int *b_user_isactive,
    char *s_usergroupexternal_name
    ) {
    usergroupmembership_response_t *usergroupmembership_response_local_var = malloc(sizeof(usergroupmembership_response_t));
    if (!usergroupmembership_response_local_var) {
        return NULL;
    }
    memset(usergroupmembership_response_local_var, 0, sizeof(usergroupmembership_response_t));
    usergroupmembership_response_local_var->_library_owned = 1;
    usergroupmembership_response_local_var->pki_usergroupmembership_id = pki_usergroupmembership_id;
    usergroupmembership_response_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupmembership_response_local_var->fki_user_id = fki_user_id;
    usergroupmembership_response_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;
    usergroupmembership_response_local_var->s_user_firstname = s_user_firstname;
    usergroupmembership_response_local_var->s_user_lastname = s_user_lastname;
    usergroupmembership_response_local_var->s_user_loginname = s_user_loginname;
    usergroupmembership_response_local_var->s_email_address = s_email_address;
    usergroupmembership_response_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroupmembership_response_local_var->b_user_isactive = b_user_isactive;
    usergroupmembership_response_local_var->s_usergroupexternal_name = s_usergroupexternal_name;
    return usergroupmembership_response_local_var;
}

__attribute__((deprecated)) usergroupmembership_response_t *usergroupmembership_response_create(
    int *pki_usergroupmembership_id,
    int *fki_usergroup_id,
    int *fki_user_id,
    int *fki_usergroupexternal_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x,
    int *b_user_isactive,
    char *s_usergroupexternal_name
    ) {
    int *pki_usergroupmembership_id_copy = NULL;
    if (pki_usergroupmembership_id) {
        pki_usergroupmembership_id_copy = malloc(sizeof(int));
        if (pki_usergroupmembership_id_copy) *pki_usergroupmembership_id_copy = *pki_usergroupmembership_id;
    }
    int *fki_usergroup_id_copy = NULL;
    if (fki_usergroup_id) {
        fki_usergroup_id_copy = malloc(sizeof(int));
        if (fki_usergroup_id_copy) *fki_usergroup_id_copy = *fki_usergroup_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_usergroupexternal_id_copy = NULL;
    if (fki_usergroupexternal_id) {
        fki_usergroupexternal_id_copy = malloc(sizeof(int));
        if (fki_usergroupexternal_id_copy) *fki_usergroupexternal_id_copy = *fki_usergroupexternal_id;
    }
    int *b_user_isactive_copy = NULL;
    if (b_user_isactive) {
        b_user_isactive_copy = malloc(sizeof(int));
        if (b_user_isactive_copy) *b_user_isactive_copy = *b_user_isactive;
    }
    usergroupmembership_response_t *result = usergroupmembership_response_create_internal (
        pki_usergroupmembership_id_copy,
        fki_usergroup_id_copy,
        fki_user_id_copy,
        fki_usergroupexternal_id_copy,
        s_user_firstname,
        s_user_lastname,
        s_user_loginname,
        s_email_address,
        s_usergroup_name_x,
        b_user_isactive_copy,
        s_usergroupexternal_name
        );
    if (!result) {
        free(pki_usergroupmembership_id_copy);
        free(fki_usergroup_id_copy);
        free(fki_user_id_copy);
        free(fki_usergroupexternal_id_copy);
        free(b_user_isactive_copy);
    }
    return result;
}

void usergroupmembership_response_free(usergroupmembership_response_t *usergroupmembership_response) {
    if(NULL == usergroupmembership_response){
        return ;
    }
    if(usergroupmembership_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupmembership_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_response->pki_usergroupmembership_id) {
        free(usergroupmembership_response->pki_usergroupmembership_id);
        usergroupmembership_response->pki_usergroupmembership_id = NULL;
    }
    if (usergroupmembership_response->fki_usergroup_id) {
        free(usergroupmembership_response->fki_usergroup_id);
        usergroupmembership_response->fki_usergroup_id = NULL;
    }
    if (usergroupmembership_response->fki_user_id) {
        free(usergroupmembership_response->fki_user_id);
        usergroupmembership_response->fki_user_id = NULL;
    }
    if (usergroupmembership_response->fki_usergroupexternal_id) {
        free(usergroupmembership_response->fki_usergroupexternal_id);
        usergroupmembership_response->fki_usergroupexternal_id = NULL;
    }
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
    if (usergroupmembership_response->b_user_isactive) {
        free(usergroupmembership_response->b_user_isactive);
        usergroupmembership_response->b_user_isactive = NULL;
    }
    if (usergroupmembership_response->s_usergroupexternal_name) {
        free(usergroupmembership_response->s_usergroupexternal_name);
        usergroupmembership_response->s_usergroupexternal_name = NULL;
    }
    free(usergroupmembership_response);
}

cJSON *usergroupmembership_response_convertToJSON(usergroupmembership_response_t *usergroupmembership_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_response->pki_usergroupmembership_id
    if (!usergroupmembership_response->pki_usergroupmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupmembershipID", *usergroupmembership_response->pki_usergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response->fki_usergroup_id
    if (!usergroupmembership_response->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *usergroupmembership_response->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_response->fki_user_id
    if(usergroupmembership_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *usergroupmembership_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_response->fki_usergroupexternal_id
    if(usergroupmembership_response->fki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", *usergroupmembership_response->fki_usergroupexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_response->s_user_firstname
    if(usergroupmembership_response->s_user_firstname) {
    if(cJSON_AddStringToObject(item, "sUserFirstname", usergroupmembership_response->s_user_firstname) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response->s_user_lastname
    if(usergroupmembership_response->s_user_lastname) {
    if(cJSON_AddStringToObject(item, "sUserLastname", usergroupmembership_response->s_user_lastname) == NULL) {
    goto fail; //String
    }
    }


    // usergroupmembership_response->s_user_loginname
    if(usergroupmembership_response->s_user_loginname) {
    if(cJSON_AddStringToObject(item, "sUserLoginname", usergroupmembership_response->s_user_loginname) == NULL) {
    goto fail; //String
    }
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


    // usergroupmembership_response->b_user_isactive
    if(usergroupmembership_response->b_user_isactive) {
    if(cJSON_AddBoolToObject(item, "bUserIsactive", *usergroupmembership_response->b_user_isactive) == NULL) {
    goto fail; //Bool
    }
    }


    // usergroupmembership_response->s_usergroupexternal_name
    if(usergroupmembership_response->s_usergroupexternal_name) {
    if(cJSON_AddStringToObject(item, "sUsergroupexternalName", usergroupmembership_response->s_usergroupexternal_name) == NULL) {
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

usergroupmembership_response_t *usergroupmembership_response_parseFromJSON(cJSON *usergroupmembership_responseJSON){

    usergroupmembership_response_t *usergroupmembership_response_local_var = NULL;

    // define the local variable for usergroupmembership_response->pki_usergroupmembership_id
    int *pki_usergroupmembership_id_local_var = NULL;

    // define the local variable for usergroupmembership_response->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for usergroupmembership_response->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for usergroupmembership_response->fki_usergroupexternal_id
    int *fki_usergroupexternal_id_local_var = NULL;

    char *s_user_firstname_local_str = NULL;

    char *s_user_lastname_local_str = NULL;

    char *s_user_loginname_local_str = NULL;

    char *s_email_address_local_str = NULL;

    char *s_usergroup_name_x_local_str = NULL;

    // define the local variable for usergroupmembership_response->b_user_isactive
    int *b_user_isactive_local_var = NULL;

    char *s_usergroupexternal_name_local_str = NULL;

    // usergroupmembership_response->pki_usergroupmembership_id
    cJSON *pki_usergroupmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "pkiUsergroupmembershipID");
    if (cJSON_IsNull(pki_usergroupmembership_id)) {
        pki_usergroupmembership_id = NULL;
    }
    if (!pki_usergroupmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroupmembership_id))
    {
    goto end; //Numeric
    }
    pki_usergroupmembership_id_local_var = malloc(sizeof(int));
    if(!pki_usergroupmembership_id_local_var)
    {
        goto end;
    }
    *pki_usergroupmembership_id_local_var = pki_usergroupmembership_id->valuedouble;

    // usergroupmembership_response->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (!fki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    fki_usergroup_id_local_var = malloc(sizeof(int));
    if(!fki_usergroup_id_local_var)
    {
        goto end;
    }
    *fki_usergroup_id_local_var = fki_usergroup_id->valuedouble;

    // usergroupmembership_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
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
    }

    // usergroupmembership_response->fki_usergroupexternal_id
    cJSON *fki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "fkiUsergroupexternalID");
    if (cJSON_IsNull(fki_usergroupexternal_id)) {
        fki_usergroupexternal_id = NULL;
    }
    if (fki_usergroupexternal_id) { 
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
    }

    // usergroupmembership_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUserFirstname");
    if (cJSON_IsNull(s_user_firstname)) {
        s_user_firstname = NULL;
    }
    if (s_user_firstname) { 
    if(!cJSON_IsString(s_user_firstname) && !cJSON_IsNull(s_user_firstname))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUserLastname");
    if (cJSON_IsNull(s_user_lastname)) {
        s_user_lastname = NULL;
    }
    if (s_user_lastname) { 
    if(!cJSON_IsString(s_user_lastname) && !cJSON_IsNull(s_user_lastname))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname) && !cJSON_IsNull(s_user_loginname))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // usergroupmembership_response->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUsergroupNameX");
    if (cJSON_IsNull(s_usergroup_name_x)) {
        s_usergroup_name_x = NULL;
    }
    if (!s_usergroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }

    // usergroupmembership_response->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "bUserIsactive");
    if (cJSON_IsNull(b_user_isactive)) {
        b_user_isactive = NULL;
    }
    if (b_user_isactive) { 
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }
    b_user_isactive_local_var = malloc(sizeof(int));
    if(!b_user_isactive_local_var)
    {
        goto end;
    }
    *b_user_isactive_local_var = b_user_isactive->valueint;
    }

    // usergroupmembership_response->s_usergroupexternal_name
    cJSON *s_usergroupexternal_name = cJSON_GetObjectItemCaseSensitive(usergroupmembership_responseJSON, "sUsergroupexternalName");
    if (cJSON_IsNull(s_usergroupexternal_name)) {
        s_usergroupexternal_name = NULL;
    }
    if (s_usergroupexternal_name) { 
    if(!cJSON_IsString(s_usergroupexternal_name) && !cJSON_IsNull(s_usergroupexternal_name))
    {
    goto end; //String
    }
    }


    if (s_user_firstname && !cJSON_IsNull(s_user_firstname)) s_user_firstname_local_str = strdup(s_user_firstname->valuestring);
    if (s_user_lastname && !cJSON_IsNull(s_user_lastname)) s_user_lastname_local_str = strdup(s_user_lastname->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x)) s_usergroup_name_x_local_str = strdup(s_usergroup_name_x->valuestring);
    if (s_usergroupexternal_name && !cJSON_IsNull(s_usergroupexternal_name)) s_usergroupexternal_name_local_str = strdup(s_usergroupexternal_name->valuestring);

    usergroupmembership_response_local_var = usergroupmembership_response_create_internal (
        pki_usergroupmembership_id_local_var,
        fki_usergroup_id_local_var,
        fki_user_id_local_var,
        fki_usergroupexternal_id_local_var,
        s_user_firstname_local_str,
        s_user_lastname_local_str,
        s_user_loginname_local_str,
        s_email_address_local_str,
        s_usergroup_name_x_local_str,
        b_user_isactive_local_var,
        s_usergroupexternal_name_local_str
        );

    if (!usergroupmembership_response_local_var) {
        goto end;
    }

    return usergroupmembership_response_local_var;
end:
    if (pki_usergroupmembership_id_local_var) {
        free(pki_usergroupmembership_id_local_var);
        pki_usergroupmembership_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_usergroupexternal_id_local_var) {
        free(fki_usergroupexternal_id_local_var);
        fki_usergroupexternal_id_local_var = NULL;
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
    if (s_usergroup_name_x_local_str) {
        free(s_usergroup_name_x_local_str);
        s_usergroup_name_x_local_str = NULL;
    }
    if (b_user_isactive_local_var) {
        free(b_user_isactive_local_var);
        b_user_isactive_local_var = NULL;
    }
    if (s_usergroupexternal_name_local_str) {
        free(s_usergroupexternal_name_local_str);
        s_usergroupexternal_name_local_str = NULL;
    }
    return NULL;

}

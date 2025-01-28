#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_response.h"



static usergroupmembership_response_t *usergroupmembership_response_create_internal(
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
    usergroupmembership_response_t *usergroupmembership_response_local_var = malloc(sizeof(usergroupmembership_response_t));
    if (!usergroupmembership_response_local_var) {
        return NULL;
    }
    usergroupmembership_response_local_var->pki_usergroupmembership_id = pki_usergroupmembership_id;
    usergroupmembership_response_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupmembership_response_local_var->fki_user_id = fki_user_id;
    usergroupmembership_response_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;
    usergroupmembership_response_local_var->s_user_firstname = s_user_firstname;
    usergroupmembership_response_local_var->s_user_lastname = s_user_lastname;
    usergroupmembership_response_local_var->s_user_loginname = s_user_loginname;
    usergroupmembership_response_local_var->s_email_address = s_email_address;
    usergroupmembership_response_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroupmembership_response_local_var->s_usergroupexternal_name = s_usergroupexternal_name;

    usergroupmembership_response_local_var->_library_owned = 1;
    return usergroupmembership_response_local_var;
}

__attribute__((deprecated)) usergroupmembership_response_t *usergroupmembership_response_create(
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
    return usergroupmembership_response_create_internal (
        pki_usergroupmembership_id,
        fki_usergroup_id,
        fki_user_id,
        fki_usergroupexternal_id,
        s_user_firstname,
        s_user_lastname,
        s_user_loginname,
        s_email_address,
        s_usergroup_name_x,
        s_usergroupexternal_name
        );
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
    if(usergroupmembership_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", usergroupmembership_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_response->fki_usergroupexternal_id
    if(usergroupmembership_response->fki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", usergroupmembership_response->fki_usergroupexternal_id) == NULL) {
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


    usergroupmembership_response_local_var = usergroupmembership_response_create_internal (
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

    return usergroupmembership_response_local_var;
end:
    return NULL;

}

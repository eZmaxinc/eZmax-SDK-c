#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_user.h"



static activesession_response_compound_user_t *activesession_response_compound_user_create_internal(
    int *pki_user_id,
    int *fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    int *b_user_addmeinezsignfolder,
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency,
    int *i_user_interfacecolor,
    int *b_user_interfacedark,
    int *i_user_listresult,
    int *i_user_frontendgoal
    ) {
    activesession_response_compound_user_t *activesession_response_compound_user_local_var = malloc(sizeof(activesession_response_compound_user_t));
    if (!activesession_response_compound_user_local_var) {
        return NULL;
    }
    memset(activesession_response_compound_user_local_var, 0, sizeof(activesession_response_compound_user_t));
    activesession_response_compound_user_local_var->_library_owned = 1;
    activesession_response_compound_user_local_var->pki_user_id = pki_user_id;
    activesession_response_compound_user_local_var->fki_timezone_id = fki_timezone_id;
    activesession_response_compound_user_local_var->s_avatar_url = s_avatar_url;
    activesession_response_compound_user_local_var->s_user_firstname = s_user_firstname;
    activesession_response_compound_user_local_var->s_user_lastname = s_user_lastname;
    activesession_response_compound_user_local_var->s_email_address = s_email_address;
    activesession_response_compound_user_local_var->b_user_addmeinezsignfolder = b_user_addmeinezsignfolder;
    activesession_response_compound_user_local_var->e_user_ezsignsendreminderfrequency = e_user_ezsignsendreminderfrequency;
    activesession_response_compound_user_local_var->i_user_interfacecolor = i_user_interfacecolor;
    activesession_response_compound_user_local_var->b_user_interfacedark = b_user_interfacedark;
    activesession_response_compound_user_local_var->i_user_listresult = i_user_listresult;
    activesession_response_compound_user_local_var->i_user_frontendgoal = i_user_frontendgoal;
    return activesession_response_compound_user_local_var;
}

__attribute__((deprecated)) activesession_response_compound_user_t *activesession_response_compound_user_create(
    int *pki_user_id,
    int *fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    int *b_user_addmeinezsignfolder,
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency,
    int *i_user_interfacecolor,
    int *b_user_interfacedark,
    int *i_user_listresult,
    int *i_user_frontendgoal
    ) {
    int *pki_user_id_copy = NULL;
    if (pki_user_id) {
        pki_user_id_copy = malloc(sizeof(int));
        if (pki_user_id_copy) *pki_user_id_copy = *pki_user_id;
    }
    int *fki_timezone_id_copy = NULL;
    if (fki_timezone_id) {
        fki_timezone_id_copy = malloc(sizeof(int));
        if (fki_timezone_id_copy) *fki_timezone_id_copy = *fki_timezone_id;
    }
    int *b_user_addmeinezsignfolder_copy = NULL;
    if (b_user_addmeinezsignfolder) {
        b_user_addmeinezsignfolder_copy = malloc(sizeof(int));
        if (b_user_addmeinezsignfolder_copy) *b_user_addmeinezsignfolder_copy = *b_user_addmeinezsignfolder;
    }
    int *i_user_interfacecolor_copy = NULL;
    if (i_user_interfacecolor) {
        i_user_interfacecolor_copy = malloc(sizeof(int));
        if (i_user_interfacecolor_copy) *i_user_interfacecolor_copy = *i_user_interfacecolor;
    }
    int *b_user_interfacedark_copy = NULL;
    if (b_user_interfacedark) {
        b_user_interfacedark_copy = malloc(sizeof(int));
        if (b_user_interfacedark_copy) *b_user_interfacedark_copy = *b_user_interfacedark;
    }
    int *i_user_listresult_copy = NULL;
    if (i_user_listresult) {
        i_user_listresult_copy = malloc(sizeof(int));
        if (i_user_listresult_copy) *i_user_listresult_copy = *i_user_listresult;
    }
    int *i_user_frontendgoal_copy = NULL;
    if (i_user_frontendgoal) {
        i_user_frontendgoal_copy = malloc(sizeof(int));
        if (i_user_frontendgoal_copy) *i_user_frontendgoal_copy = *i_user_frontendgoal;
    }
    activesession_response_compound_user_t *result = activesession_response_compound_user_create_internal (
        pki_user_id_copy,
        fki_timezone_id_copy,
        s_avatar_url,
        s_user_firstname,
        s_user_lastname,
        s_email_address,
        b_user_addmeinezsignfolder_copy,
        e_user_ezsignsendreminderfrequency,
        i_user_interfacecolor_copy,
        b_user_interfacedark_copy,
        i_user_listresult_copy,
        i_user_frontendgoal_copy
        );
    if (!result) {
        free(pki_user_id_copy);
        free(fki_timezone_id_copy);
        free(b_user_addmeinezsignfolder_copy);
        free(i_user_interfacecolor_copy);
        free(b_user_interfacedark_copy);
        free(i_user_listresult_copy);
        free(i_user_frontendgoal_copy);
    }
    return result;
}

void activesession_response_compound_user_free(activesession_response_compound_user_t *activesession_response_compound_user) {
    if(NULL == activesession_response_compound_user){
        return ;
    }
    if(activesession_response_compound_user->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_response_compound_user_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response_compound_user->pki_user_id) {
        free(activesession_response_compound_user->pki_user_id);
        activesession_response_compound_user->pki_user_id = NULL;
    }
    if (activesession_response_compound_user->fki_timezone_id) {
        free(activesession_response_compound_user->fki_timezone_id);
        activesession_response_compound_user->fki_timezone_id = NULL;
    }
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
    if (activesession_response_compound_user->b_user_addmeinezsignfolder) {
        free(activesession_response_compound_user->b_user_addmeinezsignfolder);
        activesession_response_compound_user->b_user_addmeinezsignfolder = NULL;
    }
    if (activesession_response_compound_user->i_user_interfacecolor) {
        free(activesession_response_compound_user->i_user_interfacecolor);
        activesession_response_compound_user->i_user_interfacecolor = NULL;
    }
    if (activesession_response_compound_user->b_user_interfacedark) {
        free(activesession_response_compound_user->b_user_interfacedark);
        activesession_response_compound_user->b_user_interfacedark = NULL;
    }
    if (activesession_response_compound_user->i_user_listresult) {
        free(activesession_response_compound_user->i_user_listresult);
        activesession_response_compound_user->i_user_listresult = NULL;
    }
    if (activesession_response_compound_user->i_user_frontendgoal) {
        free(activesession_response_compound_user->i_user_frontendgoal);
        activesession_response_compound_user->i_user_frontendgoal = NULL;
    }
    free(activesession_response_compound_user);
}

cJSON *activesession_response_compound_user_convertToJSON(activesession_response_compound_user_t *activesession_response_compound_user) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response_compound_user->pki_user_id
    if (!activesession_response_compound_user->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", *activesession_response_compound_user->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_user->fki_timezone_id
    if (!activesession_response_compound_user->fki_timezone_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", *activesession_response_compound_user->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_user->s_avatar_url
    if(activesession_response_compound_user->s_avatar_url) {
    if(cJSON_AddStringToObject(item, "sAvatarUrl", activesession_response_compound_user->s_avatar_url) == NULL) {
    goto fail; //String
    }
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
    if(activesession_response_compound_user->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", activesession_response_compound_user->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // activesession_response_compound_user->b_user_addmeinezsignfolder
    if (!activesession_response_compound_user->b_user_addmeinezsignfolder) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserAddmeinezsignfolder", *activesession_response_compound_user->b_user_addmeinezsignfolder) == NULL) {
    goto fail; //Bool
    }


    // activesession_response_compound_user->e_user_ezsignsendreminderfrequency
    if (ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__NULL == activesession_response_compound_user->e_user_ezsignsendreminderfrequency) {
        goto fail;
    }
    cJSON *e_user_ezsignsendreminderfrequency_local_JSON = field_e_user_ezsignsendreminderfrequency_convertToJSON(activesession_response_compound_user->e_user_ezsignsendreminderfrequency);
    if(e_user_ezsignsendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserEzsignsendreminderfrequency", e_user_ezsignsendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response_compound_user->i_user_interfacecolor
    if (!activesession_response_compound_user->i_user_interfacecolor) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iUserInterfacecolor", *activesession_response_compound_user->i_user_interfacecolor) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_user->b_user_interfacedark
    if (!activesession_response_compound_user->b_user_interfacedark) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserInterfacedark", *activesession_response_compound_user->b_user_interfacedark) == NULL) {
    goto fail; //Bool
    }


    // activesession_response_compound_user->i_user_listresult
    if (!activesession_response_compound_user->i_user_listresult) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iUserListresult", *activesession_response_compound_user->i_user_listresult) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_user->i_user_frontendgoal
    if (!activesession_response_compound_user->i_user_frontendgoal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iUserFrontendgoal", *activesession_response_compound_user->i_user_frontendgoal) == NULL) {
    goto fail; //Numeric
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

    // define the local variable for activesession_response_compound_user->pki_user_id
    int *pki_user_id_local_var = NULL;

    // define the local variable for activesession_response_compound_user->fki_timezone_id
    int *fki_timezone_id_local_var = NULL;

    char *s_avatar_url_local_str = NULL;

    char *s_user_firstname_local_str = NULL;

    char *s_user_lastname_local_str = NULL;

    char *s_email_address_local_str = NULL;

    // define the local variable for activesession_response_compound_user->b_user_addmeinezsignfolder
    int *b_user_addmeinezsignfolder_local_var = NULL;

    // define the local variable for activesession_response_compound_user->e_user_ezsignsendreminderfrequency
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency_local_nonprim = 0;

    // define the local variable for activesession_response_compound_user->i_user_interfacecolor
    int *i_user_interfacecolor_local_var = NULL;

    // define the local variable for activesession_response_compound_user->b_user_interfacedark
    int *b_user_interfacedark_local_var = NULL;

    // define the local variable for activesession_response_compound_user->i_user_listresult
    int *i_user_listresult_local_var = NULL;

    // define the local variable for activesession_response_compound_user->i_user_frontendgoal
    int *i_user_frontendgoal_local_var = NULL;

    // activesession_response_compound_user->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "pkiUserID");
    if (cJSON_IsNull(pki_user_id)) {
        pki_user_id = NULL;
    }
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }
    pki_user_id_local_var = malloc(sizeof(int));
    if(!pki_user_id_local_var)
    {
        goto end;
    }
    *pki_user_id_local_var = pki_user_id->valuedouble;

    // activesession_response_compound_user->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "fkiTimezoneID");
    if (cJSON_IsNull(fki_timezone_id)) {
        fki_timezone_id = NULL;
    }
    if (!fki_timezone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }
    fki_timezone_id_local_var = malloc(sizeof(int));
    if(!fki_timezone_id_local_var)
    {
        goto end;
    }
    *fki_timezone_id_local_var = fki_timezone_id->valuedouble;

    // activesession_response_compound_user->s_avatar_url
    cJSON *s_avatar_url = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sAvatarUrl");
    if (cJSON_IsNull(s_avatar_url)) {
        s_avatar_url = NULL;
    }
    if (s_avatar_url) { 
    if(!cJSON_IsString(s_avatar_url) && !cJSON_IsNull(s_avatar_url))
    {
    goto end; //String
    }
    }

    // activesession_response_compound_user->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sUserFirstname");
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

    // activesession_response_compound_user->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sUserLastname");
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

    // activesession_response_compound_user->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // activesession_response_compound_user->b_user_addmeinezsignfolder
    cJSON *b_user_addmeinezsignfolder = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "bUserAddmeinezsignfolder");
    if (cJSON_IsNull(b_user_addmeinezsignfolder)) {
        b_user_addmeinezsignfolder = NULL;
    }
    if (!b_user_addmeinezsignfolder) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_addmeinezsignfolder))
    {
    goto end; //Bool
    }
    b_user_addmeinezsignfolder_local_var = malloc(sizeof(int));
    if(!b_user_addmeinezsignfolder_local_var)
    {
        goto end;
    }
    *b_user_addmeinezsignfolder_local_var = b_user_addmeinezsignfolder->valueint;

    // activesession_response_compound_user->e_user_ezsignsendreminderfrequency
    cJSON *e_user_ezsignsendreminderfrequency = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "eUserEzsignsendreminderfrequency");
    if (cJSON_IsNull(e_user_ezsignsendreminderfrequency)) {
        e_user_ezsignsendreminderfrequency = NULL;
    }
    if (!e_user_ezsignsendreminderfrequency) {
        goto end;
    }

    
    e_user_ezsignsendreminderfrequency_local_nonprim = field_e_user_ezsignsendreminderfrequency_parseFromJSON(e_user_ezsignsendreminderfrequency); //custom

    // activesession_response_compound_user->i_user_interfacecolor
    cJSON *i_user_interfacecolor = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "iUserInterfacecolor");
    if (cJSON_IsNull(i_user_interfacecolor)) {
        i_user_interfacecolor = NULL;
    }
    if (!i_user_interfacecolor) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_user_interfacecolor))
    {
    goto end; //Numeric
    }
    i_user_interfacecolor_local_var = malloc(sizeof(int));
    if(!i_user_interfacecolor_local_var)
    {
        goto end;
    }
    *i_user_interfacecolor_local_var = i_user_interfacecolor->valuedouble;

    // activesession_response_compound_user->b_user_interfacedark
    cJSON *b_user_interfacedark = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "bUserInterfacedark");
    if (cJSON_IsNull(b_user_interfacedark)) {
        b_user_interfacedark = NULL;
    }
    if (!b_user_interfacedark) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_interfacedark))
    {
    goto end; //Bool
    }
    b_user_interfacedark_local_var = malloc(sizeof(int));
    if(!b_user_interfacedark_local_var)
    {
        goto end;
    }
    *b_user_interfacedark_local_var = b_user_interfacedark->valueint;

    // activesession_response_compound_user->i_user_listresult
    cJSON *i_user_listresult = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "iUserListresult");
    if (cJSON_IsNull(i_user_listresult)) {
        i_user_listresult = NULL;
    }
    if (!i_user_listresult) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_user_listresult))
    {
    goto end; //Numeric
    }
    i_user_listresult_local_var = malloc(sizeof(int));
    if(!i_user_listresult_local_var)
    {
        goto end;
    }
    *i_user_listresult_local_var = i_user_listresult->valuedouble;

    // activesession_response_compound_user->i_user_frontendgoal
    cJSON *i_user_frontendgoal = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "iUserFrontendgoal");
    if (cJSON_IsNull(i_user_frontendgoal)) {
        i_user_frontendgoal = NULL;
    }
    if (!i_user_frontendgoal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_user_frontendgoal))
    {
    goto end; //Numeric
    }
    i_user_frontendgoal_local_var = malloc(sizeof(int));
    if(!i_user_frontendgoal_local_var)
    {
        goto end;
    }
    *i_user_frontendgoal_local_var = i_user_frontendgoal->valuedouble;


    if (s_avatar_url && !cJSON_IsNull(s_avatar_url)) s_avatar_url_local_str = strdup(s_avatar_url->valuestring);
    if (s_user_firstname && !cJSON_IsNull(s_user_firstname)) s_user_firstname_local_str = strdup(s_user_firstname->valuestring);
    if (s_user_lastname && !cJSON_IsNull(s_user_lastname)) s_user_lastname_local_str = strdup(s_user_lastname->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);

    activesession_response_compound_user_local_var = activesession_response_compound_user_create_internal (
        pki_user_id_local_var,
        fki_timezone_id_local_var,
        s_avatar_url_local_str,
        s_user_firstname_local_str,
        s_user_lastname_local_str,
        s_email_address_local_str,
        b_user_addmeinezsignfolder_local_var,
        e_user_ezsignsendreminderfrequency_local_nonprim,
        i_user_interfacecolor_local_var,
        b_user_interfacedark_local_var,
        i_user_listresult_local_var,
        i_user_frontendgoal_local_var
        );

    if (!activesession_response_compound_user_local_var) {
        goto end;
    }

    return activesession_response_compound_user_local_var;
end:
    if (pki_user_id_local_var) {
        free(pki_user_id_local_var);
        pki_user_id_local_var = NULL;
    }
    if (fki_timezone_id_local_var) {
        free(fki_timezone_id_local_var);
        fki_timezone_id_local_var = NULL;
    }
    if (s_avatar_url_local_str) {
        free(s_avatar_url_local_str);
        s_avatar_url_local_str = NULL;
    }
    if (s_user_firstname_local_str) {
        free(s_user_firstname_local_str);
        s_user_firstname_local_str = NULL;
    }
    if (s_user_lastname_local_str) {
        free(s_user_lastname_local_str);
        s_user_lastname_local_str = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (b_user_addmeinezsignfolder_local_var) {
        free(b_user_addmeinezsignfolder_local_var);
        b_user_addmeinezsignfolder_local_var = NULL;
    }
    if (e_user_ezsignsendreminderfrequency_local_nonprim) {
        e_user_ezsignsendreminderfrequency_local_nonprim = 0;
    }
    if (i_user_interfacecolor_local_var) {
        free(i_user_interfacecolor_local_var);
        i_user_interfacecolor_local_var = NULL;
    }
    if (b_user_interfacedark_local_var) {
        free(b_user_interfacedark_local_var);
        b_user_interfacedark_local_var = NULL;
    }
    if (i_user_listresult_local_var) {
        free(i_user_listresult_local_var);
        i_user_listresult_local_var = NULL;
    }
    if (i_user_frontendgoal_local_var) {
        free(i_user_frontendgoal_local_var);
        i_user_frontendgoal_local_var = NULL;
    }
    return NULL;

}

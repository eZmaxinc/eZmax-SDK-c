#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_user.h"



static activesession_response_compound_user_t *activesession_response_compound_user_create_internal(
    int pki_user_id,
    int fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency,
    int i_user_interfacecolor,
    int b_user_interfacedark,
    int i_user_listresult
    ) {
    activesession_response_compound_user_t *activesession_response_compound_user_local_var = malloc(sizeof(activesession_response_compound_user_t));
    if (!activesession_response_compound_user_local_var) {
        return NULL;
    }
    activesession_response_compound_user_local_var->pki_user_id = pki_user_id;
    activesession_response_compound_user_local_var->fki_timezone_id = fki_timezone_id;
    activesession_response_compound_user_local_var->s_avatar_url = s_avatar_url;
    activesession_response_compound_user_local_var->s_user_firstname = s_user_firstname;
    activesession_response_compound_user_local_var->s_user_lastname = s_user_lastname;
    activesession_response_compound_user_local_var->s_email_address = s_email_address;
    activesession_response_compound_user_local_var->e_user_ezsignsendreminderfrequency = e_user_ezsignsendreminderfrequency;
    activesession_response_compound_user_local_var->i_user_interfacecolor = i_user_interfacecolor;
    activesession_response_compound_user_local_var->b_user_interfacedark = b_user_interfacedark;
    activesession_response_compound_user_local_var->i_user_listresult = i_user_listresult;

    activesession_response_compound_user_local_var->_library_owned = 1;
    return activesession_response_compound_user_local_var;
}

__attribute__((deprecated)) activesession_response_compound_user_t *activesession_response_compound_user_create(
    int pki_user_id,
    int fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency,
    int i_user_interfacecolor,
    int b_user_interfacedark,
    int i_user_listresult
    ) {
    return activesession_response_compound_user_create_internal (
        pki_user_id,
        fki_timezone_id,
        s_avatar_url,
        s_user_firstname,
        s_user_lastname,
        s_email_address,
        e_user_ezsignsendreminderfrequency,
        i_user_interfacecolor,
        b_user_interfacedark,
        i_user_listresult
        );
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


    // activesession_response_compound_user->fki_timezone_id
    if (!activesession_response_compound_user->fki_timezone_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", activesession_response_compound_user->fki_timezone_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iUserInterfacecolor", activesession_response_compound_user->i_user_interfacecolor) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound_user->b_user_interfacedark
    if (!activesession_response_compound_user->b_user_interfacedark) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserInterfacedark", activesession_response_compound_user->b_user_interfacedark) == NULL) {
    goto fail; //Bool
    }


    // activesession_response_compound_user->i_user_listresult
    if (!activesession_response_compound_user->i_user_listresult) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iUserListresult", activesession_response_compound_user->i_user_listresult) == NULL) {
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

    // define the local variable for activesession_response_compound_user->e_user_ezsignsendreminderfrequency
    ezmax_api_definition__full_field_e_user_ezsignsendreminderfrequency__e e_user_ezsignsendreminderfrequency_local_nonprim = 0;

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


    activesession_response_compound_user_local_var = activesession_response_compound_user_create_internal (
        pki_user_id->valuedouble,
        fki_timezone_id->valuedouble,
        s_avatar_url && !cJSON_IsNull(s_avatar_url) ? strdup(s_avatar_url->valuestring) : NULL,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        e_user_ezsignsendreminderfrequency_local_nonprim,
        i_user_interfacecolor->valuedouble,
        b_user_interfacedark->valueint,
        i_user_listresult->valuedouble
        );

    return activesession_response_compound_user_local_var;
end:
    if (e_user_ezsignsendreminderfrequency_local_nonprim) {
        e_user_ezsignsendreminderfrequency_local_nonprim = 0;
    }
    return NULL;

}

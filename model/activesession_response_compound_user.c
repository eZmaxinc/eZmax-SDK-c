#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound_user.h"


char* e_user_ezsignsendreminderfrequencyactivesession_response_compound_user_ToString(ezmax_api_definition__full_activesession_response_compound_user__e e_user_ezsignsendreminderfrequency) {
    char* e_user_ezsignsendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_user_ezsignsendreminderfrequencyArray[e_user_ezsignsendreminderfrequency];
}

ezmax_api_definition__full_activesession_response_compound_user__e e_user_ezsignsendreminderfrequencyactivesession_response_compound_user_FromString(char* e_user_ezsignsendreminderfrequency){
    int stringToReturn = 0;
    char *e_user_ezsignsendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(e_user_ezsignsendreminderfrequencyArray) / sizeof(e_user_ezsignsendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_ezsignsendreminderfrequency, e_user_ezsignsendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

activesession_response_compound_user_t *activesession_response_compound_user_create(
    int pki_user_id,
    int fki_timezone_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    field_e_user_ezsignsendreminderfrequency_t *e_user_ezsignsendreminderfrequency,
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

    return activesession_response_compound_user_local_var;
}


void activesession_response_compound_user_free(activesession_response_compound_user_t *activesession_response_compound_user) {
    if(NULL == activesession_response_compound_user){
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
    if (activesession_response_compound_user->e_user_ezsignsendreminderfrequency) {
        field_e_user_ezsignsendreminderfrequency_free(activesession_response_compound_user->e_user_ezsignsendreminderfrequency);
        activesession_response_compound_user->e_user_ezsignsendreminderfrequency = NULL;
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
    if (!activesession_response_compound_user->s_avatar_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAvatarUrl", activesession_response_compound_user->s_avatar_url) == NULL) {
    goto fail; //String
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
    if (!activesession_response_compound_user->s_email_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailAddress", activesession_response_compound_user->s_email_address) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound_user->e_user_ezsignsendreminderfrequency
    if (ezmax_api_definition__full_activesession_response_compound_user__NULL == activesession_response_compound_user->e_user_ezsignsendreminderfrequency) {
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
    field_e_user_ezsignsendreminderfrequency_t *e_user_ezsignsendreminderfrequency_local_nonprim = NULL;

    // activesession_response_compound_user->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // activesession_response_compound_user->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "fkiTimezoneID");
    if (!fki_timezone_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }

    // activesession_response_compound_user->s_avatar_url
    cJSON *s_avatar_url = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sAvatarUrl");
    if (!s_avatar_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_avatar_url))
    {
    goto end; //String
    }

    // activesession_response_compound_user->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // activesession_response_compound_user->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // activesession_response_compound_user->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "sEmailAddress");
    if (!s_email_address) {
        goto end;
    }

    
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }

    // activesession_response_compound_user->e_user_ezsignsendreminderfrequency
    cJSON *e_user_ezsignsendreminderfrequency = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "eUserEzsignsendreminderfrequency");
    if (!e_user_ezsignsendreminderfrequency) {
        goto end;
    }

    
    e_user_ezsignsendreminderfrequency_local_nonprim = field_e_user_ezsignsendreminderfrequency_parseFromJSON(e_user_ezsignsendreminderfrequency); //custom

    // activesession_response_compound_user->i_user_interfacecolor
    cJSON *i_user_interfacecolor = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "iUserInterfacecolor");
    if (!i_user_interfacecolor) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_user_interfacecolor))
    {
    goto end; //Numeric
    }

    // activesession_response_compound_user->b_user_interfacedark
    cJSON *b_user_interfacedark = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "bUserInterfacedark");
    if (!b_user_interfacedark) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_interfacedark))
    {
    goto end; //Bool
    }

    // activesession_response_compound_user->i_user_listresult
    cJSON *i_user_listresult = cJSON_GetObjectItemCaseSensitive(activesession_response_compound_userJSON, "iUserListresult");
    if (!i_user_listresult) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_user_listresult))
    {
    goto end; //Numeric
    }


    activesession_response_compound_user_local_var = activesession_response_compound_user_create (
        pki_user_id->valuedouble,
        fki_timezone_id->valuedouble,
        strdup(s_avatar_url->valuestring),
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_email_address->valuestring),
        e_user_ezsignsendreminderfrequency_local_nonprim,
        i_user_interfacecolor->valuedouble,
        b_user_interfacedark->valueint,
        i_user_listresult->valuedouble
        );

    return activesession_response_compound_user_local_var;
end:
    if (e_user_ezsignsendreminderfrequency_local_nonprim) {
        field_e_user_ezsignsendreminderfrequency_free(e_user_ezsignsendreminderfrequency_local_nonprim);
        e_user_ezsignsendreminderfrequency_local_nonprim = NULL;
    }
    return NULL;

}

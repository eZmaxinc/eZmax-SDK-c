#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_user_name_response.h"



custom_user_name_response_t *custom_user_name_response_create(
    char *s_user_lastname,
    char *s_user_firstname
    ) {
    custom_user_name_response_t *custom_user_name_response_local_var = malloc(sizeof(custom_user_name_response_t));
    if (!custom_user_name_response_local_var) {
        return NULL;
    }
    custom_user_name_response_local_var->s_user_lastname = s_user_lastname;
    custom_user_name_response_local_var->s_user_firstname = s_user_firstname;

    return custom_user_name_response_local_var;
}


void custom_user_name_response_free(custom_user_name_response_t *custom_user_name_response) {
    if(NULL == custom_user_name_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_user_name_response->s_user_lastname) {
        free(custom_user_name_response->s_user_lastname);
        custom_user_name_response->s_user_lastname = NULL;
    }
    if (custom_user_name_response->s_user_firstname) {
        free(custom_user_name_response->s_user_firstname);
        custom_user_name_response->s_user_firstname = NULL;
    }
    free(custom_user_name_response);
}

cJSON *custom_user_name_response_convertToJSON(custom_user_name_response_t *custom_user_name_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_user_name_response->s_user_lastname
    if (!custom_user_name_response->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", custom_user_name_response->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // custom_user_name_response->s_user_firstname
    if (!custom_user_name_response->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", custom_user_name_response->s_user_firstname) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_user_name_response_t *custom_user_name_response_parseFromJSON(cJSON *custom_user_name_responseJSON){

    custom_user_name_response_t *custom_user_name_response_local_var = NULL;

    // custom_user_name_response->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(custom_user_name_responseJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // custom_user_name_response->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(custom_user_name_responseJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }


    custom_user_name_response_local_var = custom_user_name_response_create (
        strdup(s_user_lastname->valuestring),
        strdup(s_user_firstname->valuestring)
        );

    return custom_user_name_response_local_var;
end:
    return NULL;

}

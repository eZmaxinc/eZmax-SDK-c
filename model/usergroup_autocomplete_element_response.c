#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_autocomplete_element_response.h"



usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_create(
    char *s_usergroup_name_x,
    int pki_usergroup_id,
    int b_usergroup_isactive
    ) {
    usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_local_var = malloc(sizeof(usergroup_autocomplete_element_response_t));
    if (!usergroup_autocomplete_element_response_local_var) {
        return NULL;
    }
    usergroup_autocomplete_element_response_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroup_autocomplete_element_response_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_autocomplete_element_response_local_var->b_usergroup_isactive = b_usergroup_isactive;

    return usergroup_autocomplete_element_response_local_var;
}


void usergroup_autocomplete_element_response_free(usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response) {
    if(NULL == usergroup_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_autocomplete_element_response->s_usergroup_name_x) {
        free(usergroup_autocomplete_element_response->s_usergroup_name_x);
        usergroup_autocomplete_element_response->s_usergroup_name_x = NULL;
    }
    free(usergroup_autocomplete_element_response);
}

cJSON *usergroup_autocomplete_element_response_convertToJSON(usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_autocomplete_element_response->s_usergroup_name_x
    if (!usergroup_autocomplete_element_response->s_usergroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroup_autocomplete_element_response->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }


    // usergroup_autocomplete_element_response->pki_usergroup_id
    if (!usergroup_autocomplete_element_response->pki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", usergroup_autocomplete_element_response->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_autocomplete_element_response->b_usergroup_isactive
    if (!usergroup_autocomplete_element_response->b_usergroup_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUsergroupIsactive", usergroup_autocomplete_element_response->b_usergroup_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_parseFromJSON(cJSON *usergroup_autocomplete_element_responseJSON){

    usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_local_var = NULL;

    // usergroup_autocomplete_element_response->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroup_autocomplete_element_responseJSON, "sUsergroupNameX");
    if (!s_usergroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }

    // usergroup_autocomplete_element_response->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_autocomplete_element_responseJSON, "pkiUsergroupID");
    if (!pki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroup_autocomplete_element_response->b_usergroup_isactive
    cJSON *b_usergroup_isactive = cJSON_GetObjectItemCaseSensitive(usergroup_autocomplete_element_responseJSON, "bUsergroupIsactive");
    if (!b_usergroup_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_usergroup_isactive))
    {
    goto end; //Bool
    }


    usergroup_autocomplete_element_response_local_var = usergroup_autocomplete_element_response_create (
        strdup(s_usergroup_name_x->valuestring),
        pki_usergroup_id->valuedouble,
        b_usergroup_isactive->valueint
        );

    return usergroup_autocomplete_element_response_local_var;
end:
    return NULL;

}

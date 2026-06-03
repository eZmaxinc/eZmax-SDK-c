#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_autocomplete_element_response.h"



static usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_create_internal(
    char *s_usergroup_name_x,
    int *pki_usergroup_id,
    int *b_usergroup_isactive
    ) {
    usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_local_var = malloc(sizeof(usergroup_autocomplete_element_response_t));
    if (!usergroup_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(usergroup_autocomplete_element_response_local_var, 0, sizeof(usergroup_autocomplete_element_response_t));
    usergroup_autocomplete_element_response_local_var->_library_owned = 1;
    usergroup_autocomplete_element_response_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroup_autocomplete_element_response_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_autocomplete_element_response_local_var->b_usergroup_isactive = b_usergroup_isactive;
    return usergroup_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_create(
    char *s_usergroup_name_x,
    int *pki_usergroup_id,
    int *b_usergroup_isactive
    ) {
    int *pki_usergroup_id_copy = NULL;
    if (pki_usergroup_id) {
        pki_usergroup_id_copy = malloc(sizeof(int));
        if (pki_usergroup_id_copy) *pki_usergroup_id_copy = *pki_usergroup_id;
    }
    int *b_usergroup_isactive_copy = NULL;
    if (b_usergroup_isactive) {
        b_usergroup_isactive_copy = malloc(sizeof(int));
        if (b_usergroup_isactive_copy) *b_usergroup_isactive_copy = *b_usergroup_isactive;
    }
    usergroup_autocomplete_element_response_t *result = usergroup_autocomplete_element_response_create_internal (
        s_usergroup_name_x,
        pki_usergroup_id_copy,
        b_usergroup_isactive_copy
        );
    if (!result) {
        free(pki_usergroup_id_copy);
        free(b_usergroup_isactive_copy);
    }
    return result;
}

void usergroup_autocomplete_element_response_free(usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response) {
    if(NULL == usergroup_autocomplete_element_response){
        return ;
    }
    if(usergroup_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_autocomplete_element_response->s_usergroup_name_x) {
        free(usergroup_autocomplete_element_response->s_usergroup_name_x);
        usergroup_autocomplete_element_response->s_usergroup_name_x = NULL;
    }
    if (usergroup_autocomplete_element_response->pki_usergroup_id) {
        free(usergroup_autocomplete_element_response->pki_usergroup_id);
        usergroup_autocomplete_element_response->pki_usergroup_id = NULL;
    }
    if (usergroup_autocomplete_element_response->b_usergroup_isactive) {
        free(usergroup_autocomplete_element_response->b_usergroup_isactive);
        usergroup_autocomplete_element_response->b_usergroup_isactive = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", *usergroup_autocomplete_element_response->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_autocomplete_element_response->b_usergroup_isactive
    if (!usergroup_autocomplete_element_response->b_usergroup_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUsergroupIsactive", *usergroup_autocomplete_element_response->b_usergroup_isactive) == NULL) {
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

    char *s_usergroup_name_x_local_str = NULL;

    // define the local variable for usergroup_autocomplete_element_response->pki_usergroup_id
    int *pki_usergroup_id_local_var = NULL;

    // define the local variable for usergroup_autocomplete_element_response->b_usergroup_isactive
    int *b_usergroup_isactive_local_var = NULL;

    // usergroup_autocomplete_element_response->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroup_autocomplete_element_responseJSON, "sUsergroupNameX");
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

    // usergroup_autocomplete_element_response->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_autocomplete_element_responseJSON, "pkiUsergroupID");
    if (cJSON_IsNull(pki_usergroup_id)) {
        pki_usergroup_id = NULL;
    }
    if (!pki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroup_id))
    {
    goto end; //Numeric
    }
    pki_usergroup_id_local_var = malloc(sizeof(int));
    if(!pki_usergroup_id_local_var)
    {
        goto end;
    }
    *pki_usergroup_id_local_var = pki_usergroup_id->valuedouble;

    // usergroup_autocomplete_element_response->b_usergroup_isactive
    cJSON *b_usergroup_isactive = cJSON_GetObjectItemCaseSensitive(usergroup_autocomplete_element_responseJSON, "bUsergroupIsactive");
    if (cJSON_IsNull(b_usergroup_isactive)) {
        b_usergroup_isactive = NULL;
    }
    if (!b_usergroup_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_usergroup_isactive))
    {
    goto end; //Bool
    }
    b_usergroup_isactive_local_var = malloc(sizeof(int));
    if(!b_usergroup_isactive_local_var)
    {
        goto end;
    }
    *b_usergroup_isactive_local_var = b_usergroup_isactive->valueint;


    if (s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x)) s_usergroup_name_x_local_str = strdup(s_usergroup_name_x->valuestring);

    usergroup_autocomplete_element_response_local_var = usergroup_autocomplete_element_response_create_internal (
        s_usergroup_name_x_local_str,
        pki_usergroup_id_local_var,
        b_usergroup_isactive_local_var
        );

    if (!usergroup_autocomplete_element_response_local_var) {
        goto end;
    }

    return usergroup_autocomplete_element_response_local_var;
end:
    if (s_usergroup_name_x_local_str) {
        free(s_usergroup_name_x_local_str);
        s_usergroup_name_x_local_str = NULL;
    }
    if (pki_usergroup_id_local_var) {
        free(pki_usergroup_id_local_var);
        pki_usergroup_id_local_var = NULL;
    }
    if (b_usergroup_isactive_local_var) {
        free(b_usergroup_isactive_local_var);
        b_usergroup_isactive_local_var = NULL;
    }
    return NULL;

}

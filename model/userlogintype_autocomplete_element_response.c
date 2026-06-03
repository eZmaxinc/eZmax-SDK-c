#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userlogintype_autocomplete_element_response.h"



static userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_create_internal(
    int *pki_userlogintype_id,
    char *s_userlogintype_description_x,
    int *b_userlogintype_isactive
    ) {
    userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_local_var = malloc(sizeof(userlogintype_autocomplete_element_response_t));
    if (!userlogintype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(userlogintype_autocomplete_element_response_local_var, 0, sizeof(userlogintype_autocomplete_element_response_t));
    userlogintype_autocomplete_element_response_local_var->_library_owned = 1;
    userlogintype_autocomplete_element_response_local_var->pki_userlogintype_id = pki_userlogintype_id;
    userlogintype_autocomplete_element_response_local_var->s_userlogintype_description_x = s_userlogintype_description_x;
    userlogintype_autocomplete_element_response_local_var->b_userlogintype_isactive = b_userlogintype_isactive;
    return userlogintype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_create(
    int *pki_userlogintype_id,
    char *s_userlogintype_description_x,
    int *b_userlogintype_isactive
    ) {
    int *pki_userlogintype_id_copy = NULL;
    if (pki_userlogintype_id) {
        pki_userlogintype_id_copy = malloc(sizeof(int));
        if (pki_userlogintype_id_copy) *pki_userlogintype_id_copy = *pki_userlogintype_id;
    }
    int *b_userlogintype_isactive_copy = NULL;
    if (b_userlogintype_isactive) {
        b_userlogintype_isactive_copy = malloc(sizeof(int));
        if (b_userlogintype_isactive_copy) *b_userlogintype_isactive_copy = *b_userlogintype_isactive;
    }
    userlogintype_autocomplete_element_response_t *result = userlogintype_autocomplete_element_response_create_internal (
        pki_userlogintype_id_copy,
        s_userlogintype_description_x,
        b_userlogintype_isactive_copy
        );
    if (!result) {
        free(pki_userlogintype_id_copy);
        free(b_userlogintype_isactive_copy);
    }
    return result;
}

void userlogintype_autocomplete_element_response_free(userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response) {
    if(NULL == userlogintype_autocomplete_element_response){
        return ;
    }
    if(userlogintype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userlogintype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userlogintype_autocomplete_element_response->pki_userlogintype_id) {
        free(userlogintype_autocomplete_element_response->pki_userlogintype_id);
        userlogintype_autocomplete_element_response->pki_userlogintype_id = NULL;
    }
    if (userlogintype_autocomplete_element_response->s_userlogintype_description_x) {
        free(userlogintype_autocomplete_element_response->s_userlogintype_description_x);
        userlogintype_autocomplete_element_response->s_userlogintype_description_x = NULL;
    }
    if (userlogintype_autocomplete_element_response->b_userlogintype_isactive) {
        free(userlogintype_autocomplete_element_response->b_userlogintype_isactive);
        userlogintype_autocomplete_element_response->b_userlogintype_isactive = NULL;
    }
    free(userlogintype_autocomplete_element_response);
}

cJSON *userlogintype_autocomplete_element_response_convertToJSON(userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // userlogintype_autocomplete_element_response->pki_userlogintype_id
    if (!userlogintype_autocomplete_element_response->pki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserlogintypeID", *userlogintype_autocomplete_element_response->pki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // userlogintype_autocomplete_element_response->s_userlogintype_description_x
    if (!userlogintype_autocomplete_element_response->s_userlogintype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescriptionX", userlogintype_autocomplete_element_response->s_userlogintype_description_x) == NULL) {
    goto fail; //String
    }


    // userlogintype_autocomplete_element_response->b_userlogintype_isactive
    if (!userlogintype_autocomplete_element_response->b_userlogintype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserlogintypeIsactive", *userlogintype_autocomplete_element_response->b_userlogintype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_parseFromJSON(cJSON *userlogintype_autocomplete_element_responseJSON){

    userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_local_var = NULL;

    // define the local variable for userlogintype_autocomplete_element_response->pki_userlogintype_id
    int *pki_userlogintype_id_local_var = NULL;

    char *s_userlogintype_description_x_local_str = NULL;

    // define the local variable for userlogintype_autocomplete_element_response->b_userlogintype_isactive
    int *b_userlogintype_isactive_local_var = NULL;

    // userlogintype_autocomplete_element_response->pki_userlogintype_id
    cJSON *pki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(userlogintype_autocomplete_element_responseJSON, "pkiUserlogintypeID");
    if (cJSON_IsNull(pki_userlogintype_id)) {
        pki_userlogintype_id = NULL;
    }
    if (!pki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_userlogintype_id))
    {
    goto end; //Numeric
    }
    pki_userlogintype_id_local_var = malloc(sizeof(int));
    if(!pki_userlogintype_id_local_var)
    {
        goto end;
    }
    *pki_userlogintype_id_local_var = pki_userlogintype_id->valuedouble;

    // userlogintype_autocomplete_element_response->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(userlogintype_autocomplete_element_responseJSON, "sUserlogintypeDescriptionX");
    if (cJSON_IsNull(s_userlogintype_description_x)) {
        s_userlogintype_description_x = NULL;
    }
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }

    // userlogintype_autocomplete_element_response->b_userlogintype_isactive
    cJSON *b_userlogintype_isactive = cJSON_GetObjectItemCaseSensitive(userlogintype_autocomplete_element_responseJSON, "bUserlogintypeIsactive");
    if (cJSON_IsNull(b_userlogintype_isactive)) {
        b_userlogintype_isactive = NULL;
    }
    if (!b_userlogintype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_userlogintype_isactive))
    {
    goto end; //Bool
    }
    b_userlogintype_isactive_local_var = malloc(sizeof(int));
    if(!b_userlogintype_isactive_local_var)
    {
        goto end;
    }
    *b_userlogintype_isactive_local_var = b_userlogintype_isactive->valueint;


    if (s_userlogintype_description_x && !cJSON_IsNull(s_userlogintype_description_x)) s_userlogintype_description_x_local_str = strdup(s_userlogintype_description_x->valuestring);

    userlogintype_autocomplete_element_response_local_var = userlogintype_autocomplete_element_response_create_internal (
        pki_userlogintype_id_local_var,
        s_userlogintype_description_x_local_str,
        b_userlogintype_isactive_local_var
        );

    if (!userlogintype_autocomplete_element_response_local_var) {
        goto end;
    }

    return userlogintype_autocomplete_element_response_local_var;
end:
    if (pki_userlogintype_id_local_var) {
        free(pki_userlogintype_id_local_var);
        pki_userlogintype_id_local_var = NULL;
    }
    if (s_userlogintype_description_x_local_str) {
        free(s_userlogintype_description_x_local_str);
        s_userlogintype_description_x_local_str = NULL;
    }
    if (b_userlogintype_isactive_local_var) {
        free(b_userlogintype_isactive_local_var);
        b_userlogintype_isactive_local_var = NULL;
    }
    return NULL;

}

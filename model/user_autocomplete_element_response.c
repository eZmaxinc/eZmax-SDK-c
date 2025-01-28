#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_autocomplete_element_response.h"



static user_autocomplete_element_response_t *user_autocomplete_element_response_create_internal(
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    char *s_user_name,
    int pki_user_id,
    int b_user_isactive
    ) {
    user_autocomplete_element_response_t *user_autocomplete_element_response_local_var = malloc(sizeof(user_autocomplete_element_response_t));
    if (!user_autocomplete_element_response_local_var) {
        return NULL;
    }
    user_autocomplete_element_response_local_var->e_user_type = e_user_type;
    user_autocomplete_element_response_local_var->s_user_name = s_user_name;
    user_autocomplete_element_response_local_var->pki_user_id = pki_user_id;
    user_autocomplete_element_response_local_var->b_user_isactive = b_user_isactive;

    user_autocomplete_element_response_local_var->_library_owned = 1;
    return user_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) user_autocomplete_element_response_t *user_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    char *s_user_name,
    int pki_user_id,
    int b_user_isactive
    ) {
    return user_autocomplete_element_response_create_internal (
        e_user_type,
        s_user_name,
        pki_user_id,
        b_user_isactive
        );
}

void user_autocomplete_element_response_free(user_autocomplete_element_response_t *user_autocomplete_element_response) {
    if(NULL == user_autocomplete_element_response){
        return ;
    }
    if(user_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_autocomplete_element_response->s_user_name) {
        free(user_autocomplete_element_response->s_user_name);
        user_autocomplete_element_response->s_user_name = NULL;
    }
    free(user_autocomplete_element_response);
}

cJSON *user_autocomplete_element_response_convertToJSON(user_autocomplete_element_response_t *user_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // user_autocomplete_element_response->e_user_type
    if (ezmax_api_definition__full_field_e_user_type__NULL == user_autocomplete_element_response->e_user_type) {
        goto fail;
    }
    cJSON *e_user_type_local_JSON = field_e_user_type_convertToJSON(user_autocomplete_element_response->e_user_type);
    if(e_user_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserType", e_user_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_autocomplete_element_response->s_user_name
    if (!user_autocomplete_element_response->s_user_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserName", user_autocomplete_element_response->s_user_name) == NULL) {
    goto fail; //String
    }


    // user_autocomplete_element_response->pki_user_id
    if (!user_autocomplete_element_response->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", user_autocomplete_element_response->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // user_autocomplete_element_response->b_user_isactive
    if (!user_autocomplete_element_response->b_user_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bUserIsactive", user_autocomplete_element_response->b_user_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_autocomplete_element_response_t *user_autocomplete_element_response_parseFromJSON(cJSON *user_autocomplete_element_responseJSON){

    user_autocomplete_element_response_t *user_autocomplete_element_response_local_var = NULL;

    // define the local variable for user_autocomplete_element_response->e_user_type
    ezmax_api_definition__full_field_e_user_type__e e_user_type_local_nonprim = 0;

    // user_autocomplete_element_response->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "eUserType");
    if (cJSON_IsNull(e_user_type)) {
        e_user_type = NULL;
    }
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_autocomplete_element_response->s_user_name
    cJSON *s_user_name = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "sUserName");
    if (cJSON_IsNull(s_user_name)) {
        s_user_name = NULL;
    }
    if (!s_user_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_name))
    {
    goto end; //String
    }

    // user_autocomplete_element_response->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "pkiUserID");
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

    // user_autocomplete_element_response->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "bUserIsactive");
    if (cJSON_IsNull(b_user_isactive)) {
        b_user_isactive = NULL;
    }
    if (!b_user_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }


    user_autocomplete_element_response_local_var = user_autocomplete_element_response_create_internal (
        e_user_type_local_nonprim,
        strdup(s_user_name->valuestring),
        pki_user_id->valuedouble,
        b_user_isactive->valueint
        );

    return user_autocomplete_element_response_local_var;
end:
    if (e_user_type_local_nonprim) {
        e_user_type_local_nonprim = 0;
    }
    return NULL;

}

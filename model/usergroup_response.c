#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_response.h"



static usergroup_response_t *usergroup_response_create_internal(
    int *pki_usergroup_id,
    multilingual_usergroup_name_t *obj_usergroup_name,
    char *s_usergroup_name_x,
    email_request_t *obj_email
    ) {
    usergroup_response_t *usergroup_response_local_var = malloc(sizeof(usergroup_response_t));
    if (!usergroup_response_local_var) {
        return NULL;
    }
    memset(usergroup_response_local_var, 0, sizeof(usergroup_response_t));
    usergroup_response_local_var->_library_owned = 1;
    usergroup_response_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_response_local_var->obj_usergroup_name = obj_usergroup_name;
    usergroup_response_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroup_response_local_var->obj_email = obj_email;
    return usergroup_response_local_var;
}

__attribute__((deprecated)) usergroup_response_t *usergroup_response_create(
    int *pki_usergroup_id,
    multilingual_usergroup_name_t *obj_usergroup_name,
    char *s_usergroup_name_x,
    email_request_t *obj_email
    ) {
    int *pki_usergroup_id_copy = NULL;
    if (pki_usergroup_id) {
        pki_usergroup_id_copy = malloc(sizeof(int));
        if (pki_usergroup_id_copy) *pki_usergroup_id_copy = *pki_usergroup_id;
    }
    usergroup_response_t *result = usergroup_response_create_internal (
        pki_usergroup_id_copy,
        obj_usergroup_name,
        s_usergroup_name_x,
        obj_email
        );
    if (!result) {
        free(pki_usergroup_id_copy);
    }
    return result;
}

void usergroup_response_free(usergroup_response_t *usergroup_response) {
    if(NULL == usergroup_response){
        return ;
    }
    if(usergroup_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_response->pki_usergroup_id) {
        free(usergroup_response->pki_usergroup_id);
        usergroup_response->pki_usergroup_id = NULL;
    }
    if (usergroup_response->obj_usergroup_name) {
        multilingual_usergroup_name_free(usergroup_response->obj_usergroup_name);
        usergroup_response->obj_usergroup_name = NULL;
    }
    if (usergroup_response->s_usergroup_name_x) {
        free(usergroup_response->s_usergroup_name_x);
        usergroup_response->s_usergroup_name_x = NULL;
    }
    if (usergroup_response->obj_email) {
        email_request_free(usergroup_response->obj_email);
        usergroup_response->obj_email = NULL;
    }
    free(usergroup_response);
}

cJSON *usergroup_response_convertToJSON(usergroup_response_t *usergroup_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_response->pki_usergroup_id
    if (!usergroup_response->pki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", *usergroup_response->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_response->obj_usergroup_name
    if (!usergroup_response->obj_usergroup_name) {
        goto fail;
    }
    cJSON *obj_usergroup_name_local_JSON = multilingual_usergroup_name_convertToJSON(usergroup_response->obj_usergroup_name);
    if(obj_usergroup_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupName", obj_usergroup_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // usergroup_response->s_usergroup_name_x
    if(usergroup_response->s_usergroup_name_x) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroup_response->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }
    }


    // usergroup_response->obj_email
    if(usergroup_response->obj_email) {
    cJSON *obj_email_local_JSON = email_request_convertToJSON(usergroup_response->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_response_t *usergroup_response_parseFromJSON(cJSON *usergroup_responseJSON){

    usergroup_response_t *usergroup_response_local_var = NULL;

    // define the local variable for usergroup_response->pki_usergroup_id
    int *pki_usergroup_id_local_var = NULL;

    // define the local variable for usergroup_response->obj_usergroup_name
    multilingual_usergroup_name_t *obj_usergroup_name_local_nonprim = NULL;

    char *s_usergroup_name_x_local_str = NULL;

    // define the local variable for usergroup_response->obj_email
    email_request_t *obj_email_local_nonprim = NULL;

    // usergroup_response->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_responseJSON, "pkiUsergroupID");
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

    // usergroup_response->obj_usergroup_name
    cJSON *obj_usergroup_name = cJSON_GetObjectItemCaseSensitive(usergroup_responseJSON, "objUsergroupName");
    if (cJSON_IsNull(obj_usergroup_name)) {
        obj_usergroup_name = NULL;
    }
    if (!obj_usergroup_name) {
        goto end;
    }

    
    obj_usergroup_name_local_nonprim = multilingual_usergroup_name_parseFromJSON(obj_usergroup_name); //nonprimitive

    // usergroup_response->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroup_responseJSON, "sUsergroupNameX");
    if (cJSON_IsNull(s_usergroup_name_x)) {
        s_usergroup_name_x = NULL;
    }
    if (s_usergroup_name_x) { 
    if(!cJSON_IsString(s_usergroup_name_x) && !cJSON_IsNull(s_usergroup_name_x))
    {
    goto end; //String
    }
    }

    // usergroup_response->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(usergroup_responseJSON, "objEmail");
    if (cJSON_IsNull(obj_email)) {
        obj_email = NULL;
    }
    if (obj_email) { 
    obj_email_local_nonprim = email_request_parseFromJSON(obj_email); //nonprimitive
    }


    if (s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x)) s_usergroup_name_x_local_str = strdup(s_usergroup_name_x->valuestring);

    usergroup_response_local_var = usergroup_response_create_internal (
        pki_usergroup_id_local_var,
        obj_usergroup_name_local_nonprim,
        s_usergroup_name_x_local_str,
        obj_email ? obj_email_local_nonprim : NULL
        );

    if (!usergroup_response_local_var) {
        goto end;
    }

    return usergroup_response_local_var;
end:
    if (pki_usergroup_id_local_var) {
        free(pki_usergroup_id_local_var);
        pki_usergroup_id_local_var = NULL;
    }
    if (obj_usergroup_name_local_nonprim) {
        multilingual_usergroup_name_free(obj_usergroup_name_local_nonprim);
        obj_usergroup_name_local_nonprim = NULL;
    }
    if (s_usergroup_name_x_local_str) {
        free(s_usergroup_name_x_local_str);
        s_usergroup_name_x_local_str = NULL;
    }
    if (obj_email_local_nonprim) {
        email_request_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    return NULL;

}

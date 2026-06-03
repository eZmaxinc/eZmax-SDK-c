#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_list_element.h"



static usergroup_list_element_t *usergroup_list_element_create_internal(
    int *pki_usergroup_id,
    char *s_usergroup_name_x,
    int *i_count_user,
    int *i_count_inactiveuser
    ) {
    usergroup_list_element_t *usergroup_list_element_local_var = malloc(sizeof(usergroup_list_element_t));
    if (!usergroup_list_element_local_var) {
        return NULL;
    }
    memset(usergroup_list_element_local_var, 0, sizeof(usergroup_list_element_t));
    usergroup_list_element_local_var->_library_owned = 1;
    usergroup_list_element_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_list_element_local_var->s_usergroup_name_x = s_usergroup_name_x;
    usergroup_list_element_local_var->i_count_user = i_count_user;
    usergroup_list_element_local_var->i_count_inactiveuser = i_count_inactiveuser;
    return usergroup_list_element_local_var;
}

__attribute__((deprecated)) usergroup_list_element_t *usergroup_list_element_create(
    int *pki_usergroup_id,
    char *s_usergroup_name_x,
    int *i_count_user,
    int *i_count_inactiveuser
    ) {
    int *pki_usergroup_id_copy = NULL;
    if (pki_usergroup_id) {
        pki_usergroup_id_copy = malloc(sizeof(int));
        if (pki_usergroup_id_copy) *pki_usergroup_id_copy = *pki_usergroup_id;
    }
    int *i_count_user_copy = NULL;
    if (i_count_user) {
        i_count_user_copy = malloc(sizeof(int));
        if (i_count_user_copy) *i_count_user_copy = *i_count_user;
    }
    int *i_count_inactiveuser_copy = NULL;
    if (i_count_inactiveuser) {
        i_count_inactiveuser_copy = malloc(sizeof(int));
        if (i_count_inactiveuser_copy) *i_count_inactiveuser_copy = *i_count_inactiveuser;
    }
    usergroup_list_element_t *result = usergroup_list_element_create_internal (
        pki_usergroup_id_copy,
        s_usergroup_name_x,
        i_count_user_copy,
        i_count_inactiveuser_copy
        );
    if (!result) {
        free(pki_usergroup_id_copy);
        free(i_count_user_copy);
        free(i_count_inactiveuser_copy);
    }
    return result;
}

void usergroup_list_element_free(usergroup_list_element_t *usergroup_list_element) {
    if(NULL == usergroup_list_element){
        return ;
    }
    if(usergroup_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_list_element->pki_usergroup_id) {
        free(usergroup_list_element->pki_usergroup_id);
        usergroup_list_element->pki_usergroup_id = NULL;
    }
    if (usergroup_list_element->s_usergroup_name_x) {
        free(usergroup_list_element->s_usergroup_name_x);
        usergroup_list_element->s_usergroup_name_x = NULL;
    }
    if (usergroup_list_element->i_count_user) {
        free(usergroup_list_element->i_count_user);
        usergroup_list_element->i_count_user = NULL;
    }
    if (usergroup_list_element->i_count_inactiveuser) {
        free(usergroup_list_element->i_count_inactiveuser);
        usergroup_list_element->i_count_inactiveuser = NULL;
    }
    free(usergroup_list_element);
}

cJSON *usergroup_list_element_convertToJSON(usergroup_list_element_t *usergroup_list_element) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_list_element->pki_usergroup_id
    if (!usergroup_list_element->pki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", *usergroup_list_element->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_list_element->s_usergroup_name_x
    if (!usergroup_list_element->s_usergroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroup_list_element->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }


    // usergroup_list_element->i_count_user
    if (!usergroup_list_element->i_count_user) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCountUser", *usergroup_list_element->i_count_user) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_list_element->i_count_inactiveuser
    if (!usergroup_list_element->i_count_inactiveuser) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCountInactiveuser", *usergroup_list_element->i_count_inactiveuser) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_list_element_t *usergroup_list_element_parseFromJSON(cJSON *usergroup_list_elementJSON){

    usergroup_list_element_t *usergroup_list_element_local_var = NULL;

    // define the local variable for usergroup_list_element->pki_usergroup_id
    int *pki_usergroup_id_local_var = NULL;

    char *s_usergroup_name_x_local_str = NULL;

    // define the local variable for usergroup_list_element->i_count_user
    int *i_count_user_local_var = NULL;

    // define the local variable for usergroup_list_element->i_count_inactiveuser
    int *i_count_inactiveuser_local_var = NULL;

    // usergroup_list_element->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_list_elementJSON, "pkiUsergroupID");
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

    // usergroup_list_element->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroup_list_elementJSON, "sUsergroupNameX");
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

    // usergroup_list_element->i_count_user
    cJSON *i_count_user = cJSON_GetObjectItemCaseSensitive(usergroup_list_elementJSON, "iCountUser");
    if (cJSON_IsNull(i_count_user)) {
        i_count_user = NULL;
    }
    if (!i_count_user) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_count_user))
    {
    goto end; //Numeric
    }
    i_count_user_local_var = malloc(sizeof(int));
    if(!i_count_user_local_var)
    {
        goto end;
    }
    *i_count_user_local_var = i_count_user->valuedouble;

    // usergroup_list_element->i_count_inactiveuser
    cJSON *i_count_inactiveuser = cJSON_GetObjectItemCaseSensitive(usergroup_list_elementJSON, "iCountInactiveuser");
    if (cJSON_IsNull(i_count_inactiveuser)) {
        i_count_inactiveuser = NULL;
    }
    if (!i_count_inactiveuser) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_count_inactiveuser))
    {
    goto end; //Numeric
    }
    i_count_inactiveuser_local_var = malloc(sizeof(int));
    if(!i_count_inactiveuser_local_var)
    {
        goto end;
    }
    *i_count_inactiveuser_local_var = i_count_inactiveuser->valuedouble;


    if (s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x)) s_usergroup_name_x_local_str = strdup(s_usergroup_name_x->valuestring);

    usergroup_list_element_local_var = usergroup_list_element_create_internal (
        pki_usergroup_id_local_var,
        s_usergroup_name_x_local_str,
        i_count_user_local_var,
        i_count_inactiveuser_local_var
        );

    if (!usergroup_list_element_local_var) {
        goto end;
    }

    return usergroup_list_element_local_var;
end:
    if (pki_usergroup_id_local_var) {
        free(pki_usergroup_id_local_var);
        pki_usergroup_id_local_var = NULL;
    }
    if (s_usergroup_name_x_local_str) {
        free(s_usergroup_name_x_local_str);
        s_usergroup_name_x_local_str = NULL;
    }
    if (i_count_user_local_var) {
        free(i_count_user_local_var);
        i_count_user_local_var = NULL;
    }
    if (i_count_inactiveuser_local_var) {
        free(i_count_inactiveuser_local_var);
        i_count_inactiveuser_local_var = NULL;
    }
    return NULL;

}

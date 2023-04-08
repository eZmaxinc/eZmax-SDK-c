#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_list_element.h"



usergroup_list_element_t *usergroup_list_element_create(
    int pki_usergroup_id,
    char *s_usergroup_name_x
    ) {
    usergroup_list_element_t *usergroup_list_element_local_var = malloc(sizeof(usergroup_list_element_t));
    if (!usergroup_list_element_local_var) {
        return NULL;
    }
    usergroup_list_element_local_var->pki_usergroup_id = pki_usergroup_id;
    usergroup_list_element_local_var->s_usergroup_name_x = s_usergroup_name_x;

    return usergroup_list_element_local_var;
}


void usergroup_list_element_free(usergroup_list_element_t *usergroup_list_element) {
    if(NULL == usergroup_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_list_element->s_usergroup_name_x) {
        free(usergroup_list_element->s_usergroup_name_x);
        usergroup_list_element->s_usergroup_name_x = NULL;
    }
    free(usergroup_list_element);
}

cJSON *usergroup_list_element_convertToJSON(usergroup_list_element_t *usergroup_list_element) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_list_element->pki_usergroup_id
    if (!usergroup_list_element->pki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUsergroupID", usergroup_list_element->pki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_list_element->s_usergroup_name_x
    if (!usergroup_list_element->s_usergroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", usergroup_list_element->s_usergroup_name_x) == NULL) {
    goto fail; //String
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

    // usergroup_list_element->pki_usergroup_id
    cJSON *pki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroup_list_elementJSON, "pkiUsergroupID");
    if (!pki_usergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_usergroup_id))
    {
    goto end; //Numeric
    }

    // usergroup_list_element->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(usergroup_list_elementJSON, "sUsergroupNameX");
    if (!s_usergroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }


    usergroup_list_element_local_var = usergroup_list_element_create (
        pki_usergroup_id->valuedouble,
        strdup(s_usergroup_name_x->valuestring)
        );

    return usergroup_list_element_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_autocomplete_element_response.h"


char* e_user_typeuser_autocomplete_element_response_ToString(ezmax_api_definition__full_user_autocomplete_element_response__e e_user_type) {
    char* e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
    return e_user_typeArray[e_user_type];
}

ezmax_api_definition__full_user_autocomplete_element_response__e e_user_typeuser_autocomplete_element_response_FromString(char* e_user_type){
    int stringToReturn = 0;
    char *e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Employee", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(e_user_typeArray) / sizeof(e_user_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_type, e_user_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_autocomplete_element_response_t *user_autocomplete_element_response_create(
    field_e_user_type_t *e_user_type,
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

    return user_autocomplete_element_response_local_var;
}


void user_autocomplete_element_response_free(user_autocomplete_element_response_t *user_autocomplete_element_response) {
    if(NULL == user_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (user_autocomplete_element_response->e_user_type) {
        field_e_user_type_free(user_autocomplete_element_response->e_user_type);
        user_autocomplete_element_response->e_user_type = NULL;
    }
    if (user_autocomplete_element_response->s_user_name) {
        free(user_autocomplete_element_response->s_user_name);
        user_autocomplete_element_response->s_user_name = NULL;
    }
    free(user_autocomplete_element_response);
}

cJSON *user_autocomplete_element_response_convertToJSON(user_autocomplete_element_response_t *user_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // user_autocomplete_element_response->e_user_type
    if (ezmax_api_definition__full_user_autocomplete_element_response__NULL == user_autocomplete_element_response->e_user_type) {
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
    field_e_user_type_t *e_user_type_local_nonprim = NULL;

    // user_autocomplete_element_response->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "eUserType");
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_autocomplete_element_response->s_user_name
    cJSON *s_user_name = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "sUserName");
    if (!s_user_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_name))
    {
    goto end; //String
    }

    // user_autocomplete_element_response->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // user_autocomplete_element_response->b_user_isactive
    cJSON *b_user_isactive = cJSON_GetObjectItemCaseSensitive(user_autocomplete_element_responseJSON, "bUserIsactive");
    if (!b_user_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_user_isactive))
    {
    goto end; //Bool
    }


    user_autocomplete_element_response_local_var = user_autocomplete_element_response_create (
        e_user_type_local_nonprim,
        strdup(s_user_name->valuestring),
        pki_user_id->valuedouble,
        b_user_isactive->valueint
        );

    return user_autocomplete_element_response_local_var;
end:
    if (e_user_type_local_nonprim) {
        field_e_user_type_free(e_user_type_local_nonprim);
        e_user_type_local_nonprim = NULL;
    }
    return NULL;

}

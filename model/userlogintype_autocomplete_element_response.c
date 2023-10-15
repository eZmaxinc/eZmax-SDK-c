#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userlogintype_autocomplete_element_response.h"



userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_create(
    int pki_userlogintype_id,
    char *s_userlogintype_description_x,
    int b_userlogintype_isactive
    ) {
    userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_local_var = malloc(sizeof(userlogintype_autocomplete_element_response_t));
    if (!userlogintype_autocomplete_element_response_local_var) {
        return NULL;
    }
    userlogintype_autocomplete_element_response_local_var->pki_userlogintype_id = pki_userlogintype_id;
    userlogintype_autocomplete_element_response_local_var->s_userlogintype_description_x = s_userlogintype_description_x;
    userlogintype_autocomplete_element_response_local_var->b_userlogintype_isactive = b_userlogintype_isactive;

    return userlogintype_autocomplete_element_response_local_var;
}


void userlogintype_autocomplete_element_response_free(userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response) {
    if(NULL == userlogintype_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (userlogintype_autocomplete_element_response->s_userlogintype_description_x) {
        free(userlogintype_autocomplete_element_response->s_userlogintype_description_x);
        userlogintype_autocomplete_element_response->s_userlogintype_description_x = NULL;
    }
    free(userlogintype_autocomplete_element_response);
}

cJSON *userlogintype_autocomplete_element_response_convertToJSON(userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // userlogintype_autocomplete_element_response->pki_userlogintype_id
    if (!userlogintype_autocomplete_element_response->pki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserlogintypeID", userlogintype_autocomplete_element_response->pki_userlogintype_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bUserlogintypeIsactive", userlogintype_autocomplete_element_response->b_userlogintype_isactive) == NULL) {
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

    // userlogintype_autocomplete_element_response->pki_userlogintype_id
    cJSON *pki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(userlogintype_autocomplete_element_responseJSON, "pkiUserlogintypeID");
    if (!pki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // userlogintype_autocomplete_element_response->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(userlogintype_autocomplete_element_responseJSON, "sUserlogintypeDescriptionX");
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }

    // userlogintype_autocomplete_element_response->b_userlogintype_isactive
    cJSON *b_userlogintype_isactive = cJSON_GetObjectItemCaseSensitive(userlogintype_autocomplete_element_responseJSON, "bUserlogintypeIsactive");
    if (!b_userlogintype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_userlogintype_isactive))
    {
    goto end; //Bool
    }


    userlogintype_autocomplete_element_response_local_var = userlogintype_autocomplete_element_response_create (
        pki_userlogintype_id->valuedouble,
        strdup(s_userlogintype_description_x->valuestring),
        b_userlogintype_isactive->valueint
        );

    return userlogintype_autocomplete_element_response_local_var;
end:
    return NULL;

}

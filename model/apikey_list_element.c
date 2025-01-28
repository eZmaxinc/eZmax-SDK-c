#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_list_element.h"



static apikey_list_element_t *apikey_list_element_create_internal(
    int pki_apikey_id,
    char *s_apikey_description_x,
    char *s_user_firstname,
    char *s_user_lastname,
    int b_apikey_isactive,
    int b_apikey_issigned
    ) {
    apikey_list_element_t *apikey_list_element_local_var = malloc(sizeof(apikey_list_element_t));
    if (!apikey_list_element_local_var) {
        return NULL;
    }
    apikey_list_element_local_var->pki_apikey_id = pki_apikey_id;
    apikey_list_element_local_var->s_apikey_description_x = s_apikey_description_x;
    apikey_list_element_local_var->s_user_firstname = s_user_firstname;
    apikey_list_element_local_var->s_user_lastname = s_user_lastname;
    apikey_list_element_local_var->b_apikey_isactive = b_apikey_isactive;
    apikey_list_element_local_var->b_apikey_issigned = b_apikey_issigned;

    apikey_list_element_local_var->_library_owned = 1;
    return apikey_list_element_local_var;
}

__attribute__((deprecated)) apikey_list_element_t *apikey_list_element_create(
    int pki_apikey_id,
    char *s_apikey_description_x,
    char *s_user_firstname,
    char *s_user_lastname,
    int b_apikey_isactive,
    int b_apikey_issigned
    ) {
    return apikey_list_element_create_internal (
        pki_apikey_id,
        s_apikey_description_x,
        s_user_firstname,
        s_user_lastname,
        b_apikey_isactive,
        b_apikey_issigned
        );
}

void apikey_list_element_free(apikey_list_element_t *apikey_list_element) {
    if(NULL == apikey_list_element){
        return ;
    }
    if(apikey_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_list_element->s_apikey_description_x) {
        free(apikey_list_element->s_apikey_description_x);
        apikey_list_element->s_apikey_description_x = NULL;
    }
    if (apikey_list_element->s_user_firstname) {
        free(apikey_list_element->s_user_firstname);
        apikey_list_element->s_user_firstname = NULL;
    }
    if (apikey_list_element->s_user_lastname) {
        free(apikey_list_element->s_user_lastname);
        apikey_list_element->s_user_lastname = NULL;
    }
    free(apikey_list_element);
}

cJSON *apikey_list_element_convertToJSON(apikey_list_element_t *apikey_list_element) {
    cJSON *item = cJSON_CreateObject();

    // apikey_list_element->pki_apikey_id
    if (!apikey_list_element->pki_apikey_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiApikeyID", apikey_list_element->pki_apikey_id) == NULL) {
    goto fail; //Numeric
    }


    // apikey_list_element->s_apikey_description_x
    if (!apikey_list_element->s_apikey_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sApikeyDescriptionX", apikey_list_element->s_apikey_description_x) == NULL) {
    goto fail; //String
    }


    // apikey_list_element->s_user_firstname
    if (!apikey_list_element->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", apikey_list_element->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // apikey_list_element->s_user_lastname
    if (!apikey_list_element->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", apikey_list_element->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // apikey_list_element->b_apikey_isactive
    if (!apikey_list_element->b_apikey_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bApikeyIsactive", apikey_list_element->b_apikey_isactive) == NULL) {
    goto fail; //Bool
    }


    // apikey_list_element->b_apikey_issigned
    if (!apikey_list_element->b_apikey_issigned) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bApikeyIssigned", apikey_list_element->b_apikey_issigned) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_list_element_t *apikey_list_element_parseFromJSON(cJSON *apikey_list_elementJSON){

    apikey_list_element_t *apikey_list_element_local_var = NULL;

    // apikey_list_element->pki_apikey_id
    cJSON *pki_apikey_id = cJSON_GetObjectItemCaseSensitive(apikey_list_elementJSON, "pkiApikeyID");
    if (cJSON_IsNull(pki_apikey_id)) {
        pki_apikey_id = NULL;
    }
    if (!pki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_apikey_id))
    {
    goto end; //Numeric
    }

    // apikey_list_element->s_apikey_description_x
    cJSON *s_apikey_description_x = cJSON_GetObjectItemCaseSensitive(apikey_list_elementJSON, "sApikeyDescriptionX");
    if (cJSON_IsNull(s_apikey_description_x)) {
        s_apikey_description_x = NULL;
    }
    if (!s_apikey_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_apikey_description_x))
    {
    goto end; //String
    }

    // apikey_list_element->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(apikey_list_elementJSON, "sUserFirstname");
    if (cJSON_IsNull(s_user_firstname)) {
        s_user_firstname = NULL;
    }
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // apikey_list_element->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(apikey_list_elementJSON, "sUserLastname");
    if (cJSON_IsNull(s_user_lastname)) {
        s_user_lastname = NULL;
    }
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // apikey_list_element->b_apikey_isactive
    cJSON *b_apikey_isactive = cJSON_GetObjectItemCaseSensitive(apikey_list_elementJSON, "bApikeyIsactive");
    if (cJSON_IsNull(b_apikey_isactive)) {
        b_apikey_isactive = NULL;
    }
    if (!b_apikey_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_apikey_isactive))
    {
    goto end; //Bool
    }

    // apikey_list_element->b_apikey_issigned
    cJSON *b_apikey_issigned = cJSON_GetObjectItemCaseSensitive(apikey_list_elementJSON, "bApikeyIssigned");
    if (cJSON_IsNull(b_apikey_issigned)) {
        b_apikey_issigned = NULL;
    }
    if (!b_apikey_issigned) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_apikey_issigned))
    {
    goto end; //Bool
    }


    apikey_list_element_local_var = apikey_list_element_create_internal (
        pki_apikey_id->valuedouble,
        strdup(s_apikey_description_x->valuestring),
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        b_apikey_isactive->valueint,
        b_apikey_issigned->valueint
        );

    return apikey_list_element_local_var;
end:
    return NULL;

}

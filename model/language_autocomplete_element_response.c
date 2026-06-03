#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "language_autocomplete_element_response.h"



static language_autocomplete_element_response_t *language_autocomplete_element_response_create_internal(
    int *pki_language_id,
    char *s_language_name_x,
    int *b_language_isactive
    ) {
    language_autocomplete_element_response_t *language_autocomplete_element_response_local_var = malloc(sizeof(language_autocomplete_element_response_t));
    if (!language_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(language_autocomplete_element_response_local_var, 0, sizeof(language_autocomplete_element_response_t));
    language_autocomplete_element_response_local_var->_library_owned = 1;
    language_autocomplete_element_response_local_var->pki_language_id = pki_language_id;
    language_autocomplete_element_response_local_var->s_language_name_x = s_language_name_x;
    language_autocomplete_element_response_local_var->b_language_isactive = b_language_isactive;
    return language_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) language_autocomplete_element_response_t *language_autocomplete_element_response_create(
    int *pki_language_id,
    char *s_language_name_x,
    int *b_language_isactive
    ) {
    int *pki_language_id_copy = NULL;
    if (pki_language_id) {
        pki_language_id_copy = malloc(sizeof(int));
        if (pki_language_id_copy) *pki_language_id_copy = *pki_language_id;
    }
    int *b_language_isactive_copy = NULL;
    if (b_language_isactive) {
        b_language_isactive_copy = malloc(sizeof(int));
        if (b_language_isactive_copy) *b_language_isactive_copy = *b_language_isactive;
    }
    language_autocomplete_element_response_t *result = language_autocomplete_element_response_create_internal (
        pki_language_id_copy,
        s_language_name_x,
        b_language_isactive_copy
        );
    if (!result) {
        free(pki_language_id_copy);
        free(b_language_isactive_copy);
    }
    return result;
}

void language_autocomplete_element_response_free(language_autocomplete_element_response_t *language_autocomplete_element_response) {
    if(NULL == language_autocomplete_element_response){
        return ;
    }
    if(language_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "language_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (language_autocomplete_element_response->pki_language_id) {
        free(language_autocomplete_element_response->pki_language_id);
        language_autocomplete_element_response->pki_language_id = NULL;
    }
    if (language_autocomplete_element_response->s_language_name_x) {
        free(language_autocomplete_element_response->s_language_name_x);
        language_autocomplete_element_response->s_language_name_x = NULL;
    }
    if (language_autocomplete_element_response->b_language_isactive) {
        free(language_autocomplete_element_response->b_language_isactive);
        language_autocomplete_element_response->b_language_isactive = NULL;
    }
    free(language_autocomplete_element_response);
}

cJSON *language_autocomplete_element_response_convertToJSON(language_autocomplete_element_response_t *language_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // language_autocomplete_element_response->pki_language_id
    if (!language_autocomplete_element_response->pki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiLanguageID", *language_autocomplete_element_response->pki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // language_autocomplete_element_response->s_language_name_x
    if (!language_autocomplete_element_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", language_autocomplete_element_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // language_autocomplete_element_response->b_language_isactive
    if (!language_autocomplete_element_response->b_language_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bLanguageIsactive", *language_autocomplete_element_response->b_language_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

language_autocomplete_element_response_t *language_autocomplete_element_response_parseFromJSON(cJSON *language_autocomplete_element_responseJSON){

    language_autocomplete_element_response_t *language_autocomplete_element_response_local_var = NULL;

    // define the local variable for language_autocomplete_element_response->pki_language_id
    int *pki_language_id_local_var = NULL;

    char *s_language_name_x_local_str = NULL;

    // define the local variable for language_autocomplete_element_response->b_language_isactive
    int *b_language_isactive_local_var = NULL;

    // language_autocomplete_element_response->pki_language_id
    cJSON *pki_language_id = cJSON_GetObjectItemCaseSensitive(language_autocomplete_element_responseJSON, "pkiLanguageID");
    if (cJSON_IsNull(pki_language_id)) {
        pki_language_id = NULL;
    }
    if (!pki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_language_id))
    {
    goto end; //Numeric
    }
    pki_language_id_local_var = malloc(sizeof(int));
    if(!pki_language_id_local_var)
    {
        goto end;
    }
    *pki_language_id_local_var = pki_language_id->valuedouble;

    // language_autocomplete_element_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(language_autocomplete_element_responseJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // language_autocomplete_element_response->b_language_isactive
    cJSON *b_language_isactive = cJSON_GetObjectItemCaseSensitive(language_autocomplete_element_responseJSON, "bLanguageIsactive");
    if (cJSON_IsNull(b_language_isactive)) {
        b_language_isactive = NULL;
    }
    if (!b_language_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_language_isactive))
    {
    goto end; //Bool
    }
    b_language_isactive_local_var = malloc(sizeof(int));
    if(!b_language_isactive_local_var)
    {
        goto end;
    }
    *b_language_isactive_local_var = b_language_isactive->valueint;


    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);

    language_autocomplete_element_response_local_var = language_autocomplete_element_response_create_internal (
        pki_language_id_local_var,
        s_language_name_x_local_str,
        b_language_isactive_local_var
        );

    if (!language_autocomplete_element_response_local_var) {
        goto end;
    }

    return language_autocomplete_element_response_local_var;
end:
    if (pki_language_id_local_var) {
        free(pki_language_id_local_var);
        pki_language_id_local_var = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (b_language_isactive_local_var) {
        free(b_language_isactive_local_var);
        b_language_isactive_local_var = NULL;
    }
    return NULL;

}

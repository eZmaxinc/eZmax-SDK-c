#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "language_autocomplete_element_response.h"



static language_autocomplete_element_response_t *language_autocomplete_element_response_create_internal(
    int pki_language_id,
    char *s_language_name_x,
    int b_language_isactive
    ) {
    language_autocomplete_element_response_t *language_autocomplete_element_response_local_var = malloc(sizeof(language_autocomplete_element_response_t));
    if (!language_autocomplete_element_response_local_var) {
        return NULL;
    }
    language_autocomplete_element_response_local_var->pki_language_id = pki_language_id;
    language_autocomplete_element_response_local_var->s_language_name_x = s_language_name_x;
    language_autocomplete_element_response_local_var->b_language_isactive = b_language_isactive;

    language_autocomplete_element_response_local_var->_library_owned = 1;
    return language_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) language_autocomplete_element_response_t *language_autocomplete_element_response_create(
    int pki_language_id,
    char *s_language_name_x,
    int b_language_isactive
    ) {
    return language_autocomplete_element_response_create_internal (
        pki_language_id,
        s_language_name_x,
        b_language_isactive
        );
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
    if (language_autocomplete_element_response->s_language_name_x) {
        free(language_autocomplete_element_response->s_language_name_x);
        language_autocomplete_element_response->s_language_name_x = NULL;
    }
    free(language_autocomplete_element_response);
}

cJSON *language_autocomplete_element_response_convertToJSON(language_autocomplete_element_response_t *language_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // language_autocomplete_element_response->pki_language_id
    if (!language_autocomplete_element_response->pki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiLanguageID", language_autocomplete_element_response->pki_language_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bLanguageIsactive", language_autocomplete_element_response->b_language_isactive) == NULL) {
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


    language_autocomplete_element_response_local_var = language_autocomplete_element_response_create_internal (
        pki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        b_language_isactive->valueint
        );

    return language_autocomplete_element_response_local_var;
end:
    return NULL;

}

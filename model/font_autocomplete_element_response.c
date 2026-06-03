#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "font_autocomplete_element_response.h"



static font_autocomplete_element_response_t *font_autocomplete_element_response_create_internal(
    char *s_font_name,
    int *pki_font_id,
    int *b_font_isactive
    ) {
    font_autocomplete_element_response_t *font_autocomplete_element_response_local_var = malloc(sizeof(font_autocomplete_element_response_t));
    if (!font_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(font_autocomplete_element_response_local_var, 0, sizeof(font_autocomplete_element_response_t));
    font_autocomplete_element_response_local_var->_library_owned = 1;
    font_autocomplete_element_response_local_var->s_font_name = s_font_name;
    font_autocomplete_element_response_local_var->pki_font_id = pki_font_id;
    font_autocomplete_element_response_local_var->b_font_isactive = b_font_isactive;
    return font_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) font_autocomplete_element_response_t *font_autocomplete_element_response_create(
    char *s_font_name,
    int *pki_font_id,
    int *b_font_isactive
    ) {
    int *pki_font_id_copy = NULL;
    if (pki_font_id) {
        pki_font_id_copy = malloc(sizeof(int));
        if (pki_font_id_copy) *pki_font_id_copy = *pki_font_id;
    }
    int *b_font_isactive_copy = NULL;
    if (b_font_isactive) {
        b_font_isactive_copy = malloc(sizeof(int));
        if (b_font_isactive_copy) *b_font_isactive_copy = *b_font_isactive;
    }
    font_autocomplete_element_response_t *result = font_autocomplete_element_response_create_internal (
        s_font_name,
        pki_font_id_copy,
        b_font_isactive_copy
        );
    if (!result) {
        free(pki_font_id_copy);
        free(b_font_isactive_copy);
    }
    return result;
}

void font_autocomplete_element_response_free(font_autocomplete_element_response_t *font_autocomplete_element_response) {
    if(NULL == font_autocomplete_element_response){
        return ;
    }
    if(font_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "font_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (font_autocomplete_element_response->s_font_name) {
        free(font_autocomplete_element_response->s_font_name);
        font_autocomplete_element_response->s_font_name = NULL;
    }
    if (font_autocomplete_element_response->pki_font_id) {
        free(font_autocomplete_element_response->pki_font_id);
        font_autocomplete_element_response->pki_font_id = NULL;
    }
    if (font_autocomplete_element_response->b_font_isactive) {
        free(font_autocomplete_element_response->b_font_isactive);
        font_autocomplete_element_response->b_font_isactive = NULL;
    }
    free(font_autocomplete_element_response);
}

cJSON *font_autocomplete_element_response_convertToJSON(font_autocomplete_element_response_t *font_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // font_autocomplete_element_response->s_font_name
    if (!font_autocomplete_element_response->s_font_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFontName", font_autocomplete_element_response->s_font_name) == NULL) {
    goto fail; //String
    }


    // font_autocomplete_element_response->pki_font_id
    if (!font_autocomplete_element_response->pki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiFontID", *font_autocomplete_element_response->pki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // font_autocomplete_element_response->b_font_isactive
    if (!font_autocomplete_element_response->b_font_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bFontIsactive", *font_autocomplete_element_response->b_font_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

font_autocomplete_element_response_t *font_autocomplete_element_response_parseFromJSON(cJSON *font_autocomplete_element_responseJSON){

    font_autocomplete_element_response_t *font_autocomplete_element_response_local_var = NULL;

    char *s_font_name_local_str = NULL;

    // define the local variable for font_autocomplete_element_response->pki_font_id
    int *pki_font_id_local_var = NULL;

    // define the local variable for font_autocomplete_element_response->b_font_isactive
    int *b_font_isactive_local_var = NULL;

    // font_autocomplete_element_response->s_font_name
    cJSON *s_font_name = cJSON_GetObjectItemCaseSensitive(font_autocomplete_element_responseJSON, "sFontName");
    if (cJSON_IsNull(s_font_name)) {
        s_font_name = NULL;
    }
    if (!s_font_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_font_name))
    {
    goto end; //String
    }

    // font_autocomplete_element_response->pki_font_id
    cJSON *pki_font_id = cJSON_GetObjectItemCaseSensitive(font_autocomplete_element_responseJSON, "pkiFontID");
    if (cJSON_IsNull(pki_font_id)) {
        pki_font_id = NULL;
    }
    if (!pki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_font_id))
    {
    goto end; //Numeric
    }
    pki_font_id_local_var = malloc(sizeof(int));
    if(!pki_font_id_local_var)
    {
        goto end;
    }
    *pki_font_id_local_var = pki_font_id->valuedouble;

    // font_autocomplete_element_response->b_font_isactive
    cJSON *b_font_isactive = cJSON_GetObjectItemCaseSensitive(font_autocomplete_element_responseJSON, "bFontIsactive");
    if (cJSON_IsNull(b_font_isactive)) {
        b_font_isactive = NULL;
    }
    if (!b_font_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_font_isactive))
    {
    goto end; //Bool
    }
    b_font_isactive_local_var = malloc(sizeof(int));
    if(!b_font_isactive_local_var)
    {
        goto end;
    }
    *b_font_isactive_local_var = b_font_isactive->valueint;


    if (s_font_name && !cJSON_IsNull(s_font_name)) s_font_name_local_str = strdup(s_font_name->valuestring);

    font_autocomplete_element_response_local_var = font_autocomplete_element_response_create_internal (
        s_font_name_local_str,
        pki_font_id_local_var,
        b_font_isactive_local_var
        );

    if (!font_autocomplete_element_response_local_var) {
        goto end;
    }

    return font_autocomplete_element_response_local_var;
end:
    if (s_font_name_local_str) {
        free(s_font_name_local_str);
        s_font_name_local_str = NULL;
    }
    if (pki_font_id_local_var) {
        free(pki_font_id_local_var);
        pki_font_id_local_var = NULL;
    }
    if (b_font_isactive_local_var) {
        free(b_font_isactive_local_var);
        b_font_isactive_local_var = NULL;
    }
    return NULL;

}

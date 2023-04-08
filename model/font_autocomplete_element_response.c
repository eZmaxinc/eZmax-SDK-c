#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "font_autocomplete_element_response.h"



font_autocomplete_element_response_t *font_autocomplete_element_response_create(
    char *s_font_name,
    int pki_font_id,
    int b_font_isactive
    ) {
    font_autocomplete_element_response_t *font_autocomplete_element_response_local_var = malloc(sizeof(font_autocomplete_element_response_t));
    if (!font_autocomplete_element_response_local_var) {
        return NULL;
    }
    font_autocomplete_element_response_local_var->s_font_name = s_font_name;
    font_autocomplete_element_response_local_var->pki_font_id = pki_font_id;
    font_autocomplete_element_response_local_var->b_font_isactive = b_font_isactive;

    return font_autocomplete_element_response_local_var;
}


void font_autocomplete_element_response_free(font_autocomplete_element_response_t *font_autocomplete_element_response) {
    if(NULL == font_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (font_autocomplete_element_response->s_font_name) {
        free(font_autocomplete_element_response->s_font_name);
        font_autocomplete_element_response->s_font_name = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiFontID", font_autocomplete_element_response->pki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // font_autocomplete_element_response->b_font_isactive
    if (!font_autocomplete_element_response->b_font_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bFontIsactive", font_autocomplete_element_response->b_font_isactive) == NULL) {
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

    // font_autocomplete_element_response->s_font_name
    cJSON *s_font_name = cJSON_GetObjectItemCaseSensitive(font_autocomplete_element_responseJSON, "sFontName");
    if (!s_font_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_font_name))
    {
    goto end; //String
    }

    // font_autocomplete_element_response->pki_font_id
    cJSON *pki_font_id = cJSON_GetObjectItemCaseSensitive(font_autocomplete_element_responseJSON, "pkiFontID");
    if (!pki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_font_id))
    {
    goto end; //Numeric
    }

    // font_autocomplete_element_response->b_font_isactive
    cJSON *b_font_isactive = cJSON_GetObjectItemCaseSensitive(font_autocomplete_element_responseJSON, "bFontIsactive");
    if (!b_font_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_font_isactive))
    {
    goto end; //Bool
    }


    font_autocomplete_element_response_local_var = font_autocomplete_element_response_create (
        strdup(s_font_name->valuestring),
        pki_font_id->valuedouble,
        b_font_isactive->valueint
        );

    return font_autocomplete_element_response_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "realestateboard_autocomplete_element_response.h"



static realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_create_internal(
    int *pki_realestateboard_id,
    char *s_province_name_x,
    char *s_realestateboard_name_x,
    int *b_realestateboard_isactive
    ) {
    realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_local_var = malloc(sizeof(realestateboard_autocomplete_element_response_t));
    if (!realestateboard_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(realestateboard_autocomplete_element_response_local_var, 0, sizeof(realestateboard_autocomplete_element_response_t));
    realestateboard_autocomplete_element_response_local_var->_library_owned = 1;
    realestateboard_autocomplete_element_response_local_var->pki_realestateboard_id = pki_realestateboard_id;
    realestateboard_autocomplete_element_response_local_var->s_province_name_x = s_province_name_x;
    realestateboard_autocomplete_element_response_local_var->s_realestateboard_name_x = s_realestateboard_name_x;
    realestateboard_autocomplete_element_response_local_var->b_realestateboard_isactive = b_realestateboard_isactive;
    return realestateboard_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_create(
    int *pki_realestateboard_id,
    char *s_province_name_x,
    char *s_realestateboard_name_x,
    int *b_realestateboard_isactive
    ) {
    int *pki_realestateboard_id_copy = NULL;
    if (pki_realestateboard_id) {
        pki_realestateboard_id_copy = malloc(sizeof(int));
        if (pki_realestateboard_id_copy) *pki_realestateboard_id_copy = *pki_realestateboard_id;
    }
    int *b_realestateboard_isactive_copy = NULL;
    if (b_realestateboard_isactive) {
        b_realestateboard_isactive_copy = malloc(sizeof(int));
        if (b_realestateboard_isactive_copy) *b_realestateboard_isactive_copy = *b_realestateboard_isactive;
    }
    realestateboard_autocomplete_element_response_t *result = realestateboard_autocomplete_element_response_create_internal (
        pki_realestateboard_id_copy,
        s_province_name_x,
        s_realestateboard_name_x,
        b_realestateboard_isactive_copy
        );
    if (!result) {
        free(pki_realestateboard_id_copy);
        free(b_realestateboard_isactive_copy);
    }
    return result;
}

void realestateboard_autocomplete_element_response_free(realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response) {
    if(NULL == realestateboard_autocomplete_element_response){
        return ;
    }
    if(realestateboard_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "realestateboard_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (realestateboard_autocomplete_element_response->pki_realestateboard_id) {
        free(realestateboard_autocomplete_element_response->pki_realestateboard_id);
        realestateboard_autocomplete_element_response->pki_realestateboard_id = NULL;
    }
    if (realestateboard_autocomplete_element_response->s_province_name_x) {
        free(realestateboard_autocomplete_element_response->s_province_name_x);
        realestateboard_autocomplete_element_response->s_province_name_x = NULL;
    }
    if (realestateboard_autocomplete_element_response->s_realestateboard_name_x) {
        free(realestateboard_autocomplete_element_response->s_realestateboard_name_x);
        realestateboard_autocomplete_element_response->s_realestateboard_name_x = NULL;
    }
    if (realestateboard_autocomplete_element_response->b_realestateboard_isactive) {
        free(realestateboard_autocomplete_element_response->b_realestateboard_isactive);
        realestateboard_autocomplete_element_response->b_realestateboard_isactive = NULL;
    }
    free(realestateboard_autocomplete_element_response);
}

cJSON *realestateboard_autocomplete_element_response_convertToJSON(realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // realestateboard_autocomplete_element_response->pki_realestateboard_id
    if (!realestateboard_autocomplete_element_response->pki_realestateboard_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiRealestateboardID", *realestateboard_autocomplete_element_response->pki_realestateboard_id) == NULL) {
    goto fail; //Numeric
    }


    // realestateboard_autocomplete_element_response->s_province_name_x
    if (!realestateboard_autocomplete_element_response->s_province_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sProvinceNameX", realestateboard_autocomplete_element_response->s_province_name_x) == NULL) {
    goto fail; //String
    }


    // realestateboard_autocomplete_element_response->s_realestateboard_name_x
    if (!realestateboard_autocomplete_element_response->s_realestateboard_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sRealestateboardNameX", realestateboard_autocomplete_element_response->s_realestateboard_name_x) == NULL) {
    goto fail; //String
    }


    // realestateboard_autocomplete_element_response->b_realestateboard_isactive
    if (!realestateboard_autocomplete_element_response->b_realestateboard_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bRealestateboardIsactive", *realestateboard_autocomplete_element_response->b_realestateboard_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_parseFromJSON(cJSON *realestateboard_autocomplete_element_responseJSON){

    realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_local_var = NULL;

    // define the local variable for realestateboard_autocomplete_element_response->pki_realestateboard_id
    int *pki_realestateboard_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    char *s_realestateboard_name_x_local_str = NULL;

    // define the local variable for realestateboard_autocomplete_element_response->b_realestateboard_isactive
    int *b_realestateboard_isactive_local_var = NULL;

    // realestateboard_autocomplete_element_response->pki_realestateboard_id
    cJSON *pki_realestateboard_id = cJSON_GetObjectItemCaseSensitive(realestateboard_autocomplete_element_responseJSON, "pkiRealestateboardID");
    if (cJSON_IsNull(pki_realestateboard_id)) {
        pki_realestateboard_id = NULL;
    }
    if (!pki_realestateboard_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_realestateboard_id))
    {
    goto end; //Numeric
    }
    pki_realestateboard_id_local_var = malloc(sizeof(int));
    if(!pki_realestateboard_id_local_var)
    {
        goto end;
    }
    *pki_realestateboard_id_local_var = pki_realestateboard_id->valuedouble;

    // realestateboard_autocomplete_element_response->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(realestateboard_autocomplete_element_responseJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (!s_province_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_province_name_x))
    {
    goto end; //String
    }

    // realestateboard_autocomplete_element_response->s_realestateboard_name_x
    cJSON *s_realestateboard_name_x = cJSON_GetObjectItemCaseSensitive(realestateboard_autocomplete_element_responseJSON, "sRealestateboardNameX");
    if (cJSON_IsNull(s_realestateboard_name_x)) {
        s_realestateboard_name_x = NULL;
    }
    if (!s_realestateboard_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_realestateboard_name_x))
    {
    goto end; //String
    }

    // realestateboard_autocomplete_element_response->b_realestateboard_isactive
    cJSON *b_realestateboard_isactive = cJSON_GetObjectItemCaseSensitive(realestateboard_autocomplete_element_responseJSON, "bRealestateboardIsactive");
    if (cJSON_IsNull(b_realestateboard_isactive)) {
        b_realestateboard_isactive = NULL;
    }
    if (!b_realestateboard_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_realestateboard_isactive))
    {
    goto end; //Bool
    }
    b_realestateboard_isactive_local_var = malloc(sizeof(int));
    if(!b_realestateboard_isactive_local_var)
    {
        goto end;
    }
    *b_realestateboard_isactive_local_var = b_realestateboard_isactive->valueint;


    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_realestateboard_name_x && !cJSON_IsNull(s_realestateboard_name_x)) s_realestateboard_name_x_local_str = strdup(s_realestateboard_name_x->valuestring);

    realestateboard_autocomplete_element_response_local_var = realestateboard_autocomplete_element_response_create_internal (
        pki_realestateboard_id_local_var,
        s_province_name_x_local_str,
        s_realestateboard_name_x_local_str,
        b_realestateboard_isactive_local_var
        );

    if (!realestateboard_autocomplete_element_response_local_var) {
        goto end;
    }

    return realestateboard_autocomplete_element_response_local_var;
end:
    if (pki_realestateboard_id_local_var) {
        free(pki_realestateboard_id_local_var);
        pki_realestateboard_id_local_var = NULL;
    }
    if (s_province_name_x_local_str) {
        free(s_province_name_x_local_str);
        s_province_name_x_local_str = NULL;
    }
    if (s_realestateboard_name_x_local_str) {
        free(s_realestateboard_name_x_local_str);
        s_realestateboard_name_x_local_str = NULL;
    }
    if (b_realestateboard_isactive_local_var) {
        free(b_realestateboard_isactive_local_var);
        b_realestateboard_isactive_local_var = NULL;
    }
    return NULL;

}

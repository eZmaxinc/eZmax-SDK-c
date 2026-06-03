#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pdfalevel_autocomplete_element_response.h"



static pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_create_internal(
    int *pki_pdfalevel_id,
    char *s_pdfalevel_name,
    int *b_pdfalevel_isactive
    ) {
    pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_local_var = malloc(sizeof(pdfalevel_autocomplete_element_response_t));
    if (!pdfalevel_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(pdfalevel_autocomplete_element_response_local_var, 0, sizeof(pdfalevel_autocomplete_element_response_t));
    pdfalevel_autocomplete_element_response_local_var->_library_owned = 1;
    pdfalevel_autocomplete_element_response_local_var->pki_pdfalevel_id = pki_pdfalevel_id;
    pdfalevel_autocomplete_element_response_local_var->s_pdfalevel_name = s_pdfalevel_name;
    pdfalevel_autocomplete_element_response_local_var->b_pdfalevel_isactive = b_pdfalevel_isactive;
    return pdfalevel_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_create(
    int *pki_pdfalevel_id,
    char *s_pdfalevel_name,
    int *b_pdfalevel_isactive
    ) {
    int *pki_pdfalevel_id_copy = NULL;
    if (pki_pdfalevel_id) {
        pki_pdfalevel_id_copy = malloc(sizeof(int));
        if (pki_pdfalevel_id_copy) *pki_pdfalevel_id_copy = *pki_pdfalevel_id;
    }
    int *b_pdfalevel_isactive_copy = NULL;
    if (b_pdfalevel_isactive) {
        b_pdfalevel_isactive_copy = malloc(sizeof(int));
        if (b_pdfalevel_isactive_copy) *b_pdfalevel_isactive_copy = *b_pdfalevel_isactive;
    }
    pdfalevel_autocomplete_element_response_t *result = pdfalevel_autocomplete_element_response_create_internal (
        pki_pdfalevel_id_copy,
        s_pdfalevel_name,
        b_pdfalevel_isactive_copy
        );
    if (!result) {
        free(pki_pdfalevel_id_copy);
        free(b_pdfalevel_isactive_copy);
    }
    return result;
}

void pdfalevel_autocomplete_element_response_free(pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response) {
    if(NULL == pdfalevel_autocomplete_element_response){
        return ;
    }
    if(pdfalevel_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "pdfalevel_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (pdfalevel_autocomplete_element_response->pki_pdfalevel_id) {
        free(pdfalevel_autocomplete_element_response->pki_pdfalevel_id);
        pdfalevel_autocomplete_element_response->pki_pdfalevel_id = NULL;
    }
    if (pdfalevel_autocomplete_element_response->s_pdfalevel_name) {
        free(pdfalevel_autocomplete_element_response->s_pdfalevel_name);
        pdfalevel_autocomplete_element_response->s_pdfalevel_name = NULL;
    }
    if (pdfalevel_autocomplete_element_response->b_pdfalevel_isactive) {
        free(pdfalevel_autocomplete_element_response->b_pdfalevel_isactive);
        pdfalevel_autocomplete_element_response->b_pdfalevel_isactive = NULL;
    }
    free(pdfalevel_autocomplete_element_response);
}

cJSON *pdfalevel_autocomplete_element_response_convertToJSON(pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // pdfalevel_autocomplete_element_response->pki_pdfalevel_id
    if (!pdfalevel_autocomplete_element_response->pki_pdfalevel_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPdfalevelID", *pdfalevel_autocomplete_element_response->pki_pdfalevel_id) == NULL) {
    goto fail; //Numeric
    }


    // pdfalevel_autocomplete_element_response->s_pdfalevel_name
    if (!pdfalevel_autocomplete_element_response->s_pdfalevel_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPdfalevelName", pdfalevel_autocomplete_element_response->s_pdfalevel_name) == NULL) {
    goto fail; //String
    }


    // pdfalevel_autocomplete_element_response->b_pdfalevel_isactive
    if (!pdfalevel_autocomplete_element_response->b_pdfalevel_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPdfalevelIsactive", *pdfalevel_autocomplete_element_response->b_pdfalevel_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_parseFromJSON(cJSON *pdfalevel_autocomplete_element_responseJSON){

    pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_local_var = NULL;

    // define the local variable for pdfalevel_autocomplete_element_response->pki_pdfalevel_id
    int *pki_pdfalevel_id_local_var = NULL;

    char *s_pdfalevel_name_local_str = NULL;

    // define the local variable for pdfalevel_autocomplete_element_response->b_pdfalevel_isactive
    int *b_pdfalevel_isactive_local_var = NULL;

    // pdfalevel_autocomplete_element_response->pki_pdfalevel_id
    cJSON *pki_pdfalevel_id = cJSON_GetObjectItemCaseSensitive(pdfalevel_autocomplete_element_responseJSON, "pkiPdfalevelID");
    if (cJSON_IsNull(pki_pdfalevel_id)) {
        pki_pdfalevel_id = NULL;
    }
    if (!pki_pdfalevel_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_pdfalevel_id))
    {
    goto end; //Numeric
    }
    pki_pdfalevel_id_local_var = malloc(sizeof(int));
    if(!pki_pdfalevel_id_local_var)
    {
        goto end;
    }
    *pki_pdfalevel_id_local_var = pki_pdfalevel_id->valuedouble;

    // pdfalevel_autocomplete_element_response->s_pdfalevel_name
    cJSON *s_pdfalevel_name = cJSON_GetObjectItemCaseSensitive(pdfalevel_autocomplete_element_responseJSON, "sPdfalevelName");
    if (cJSON_IsNull(s_pdfalevel_name)) {
        s_pdfalevel_name = NULL;
    }
    if (!s_pdfalevel_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_pdfalevel_name))
    {
    goto end; //String
    }

    // pdfalevel_autocomplete_element_response->b_pdfalevel_isactive
    cJSON *b_pdfalevel_isactive = cJSON_GetObjectItemCaseSensitive(pdfalevel_autocomplete_element_responseJSON, "bPdfalevelIsactive");
    if (cJSON_IsNull(b_pdfalevel_isactive)) {
        b_pdfalevel_isactive = NULL;
    }
    if (!b_pdfalevel_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_pdfalevel_isactive))
    {
    goto end; //Bool
    }
    b_pdfalevel_isactive_local_var = malloc(sizeof(int));
    if(!b_pdfalevel_isactive_local_var)
    {
        goto end;
    }
    *b_pdfalevel_isactive_local_var = b_pdfalevel_isactive->valueint;


    if (s_pdfalevel_name && !cJSON_IsNull(s_pdfalevel_name)) s_pdfalevel_name_local_str = strdup(s_pdfalevel_name->valuestring);

    pdfalevel_autocomplete_element_response_local_var = pdfalevel_autocomplete_element_response_create_internal (
        pki_pdfalevel_id_local_var,
        s_pdfalevel_name_local_str,
        b_pdfalevel_isactive_local_var
        );

    if (!pdfalevel_autocomplete_element_response_local_var) {
        goto end;
    }

    return pdfalevel_autocomplete_element_response_local_var;
end:
    if (pki_pdfalevel_id_local_var) {
        free(pki_pdfalevel_id_local_var);
        pki_pdfalevel_id_local_var = NULL;
    }
    if (s_pdfalevel_name_local_str) {
        free(s_pdfalevel_name_local_str);
        s_pdfalevel_name_local_str = NULL;
    }
    if (b_pdfalevel_isactive_local_var) {
        free(b_pdfalevel_isactive_local_var);
        b_pdfalevel_isactive_local_var = NULL;
    }
    return NULL;

}

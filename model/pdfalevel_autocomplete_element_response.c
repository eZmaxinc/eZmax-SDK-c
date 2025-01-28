#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pdfalevel_autocomplete_element_response.h"



static pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_create_internal(
    int pki_pdfalevel_id,
    char *s_pdfalevel_name,
    int b_pdfalevel_isactive
    ) {
    pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_local_var = malloc(sizeof(pdfalevel_autocomplete_element_response_t));
    if (!pdfalevel_autocomplete_element_response_local_var) {
        return NULL;
    }
    pdfalevel_autocomplete_element_response_local_var->pki_pdfalevel_id = pki_pdfalevel_id;
    pdfalevel_autocomplete_element_response_local_var->s_pdfalevel_name = s_pdfalevel_name;
    pdfalevel_autocomplete_element_response_local_var->b_pdfalevel_isactive = b_pdfalevel_isactive;

    pdfalevel_autocomplete_element_response_local_var->_library_owned = 1;
    return pdfalevel_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_create(
    int pki_pdfalevel_id,
    char *s_pdfalevel_name,
    int b_pdfalevel_isactive
    ) {
    return pdfalevel_autocomplete_element_response_create_internal (
        pki_pdfalevel_id,
        s_pdfalevel_name,
        b_pdfalevel_isactive
        );
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
    if (pdfalevel_autocomplete_element_response->s_pdfalevel_name) {
        free(pdfalevel_autocomplete_element_response->s_pdfalevel_name);
        pdfalevel_autocomplete_element_response->s_pdfalevel_name = NULL;
    }
    free(pdfalevel_autocomplete_element_response);
}

cJSON *pdfalevel_autocomplete_element_response_convertToJSON(pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // pdfalevel_autocomplete_element_response->pki_pdfalevel_id
    if (!pdfalevel_autocomplete_element_response->pki_pdfalevel_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPdfalevelID", pdfalevel_autocomplete_element_response->pki_pdfalevel_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bPdfalevelIsactive", pdfalevel_autocomplete_element_response->b_pdfalevel_isactive) == NULL) {
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


    pdfalevel_autocomplete_element_response_local_var = pdfalevel_autocomplete_element_response_create_internal (
        pki_pdfalevel_id->valuedouble,
        strdup(s_pdfalevel_name->valuestring),
        b_pdfalevel_isactive->valueint
        );

    return pdfalevel_autocomplete_element_response_local_var;
end:
    return NULL;

}

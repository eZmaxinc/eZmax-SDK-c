#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_autocomplete_element_response.h"



static documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_create_internal(
    int *pki_documenttype_id,
    char *s_documenttype_name_x,
    int *b_documenttype_isactive
    ) {
    documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_local_var = malloc(sizeof(documenttype_autocomplete_element_response_t));
    if (!documenttype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(documenttype_autocomplete_element_response_local_var, 0, sizeof(documenttype_autocomplete_element_response_t));
    documenttype_autocomplete_element_response_local_var->_library_owned = 1;
    documenttype_autocomplete_element_response_local_var->pki_documenttype_id = pki_documenttype_id;
    documenttype_autocomplete_element_response_local_var->s_documenttype_name_x = s_documenttype_name_x;
    documenttype_autocomplete_element_response_local_var->b_documenttype_isactive = b_documenttype_isactive;
    return documenttype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_create(
    int *pki_documenttype_id,
    char *s_documenttype_name_x,
    int *b_documenttype_isactive
    ) {
    int *pki_documenttype_id_copy = NULL;
    if (pki_documenttype_id) {
        pki_documenttype_id_copy = malloc(sizeof(int));
        if (pki_documenttype_id_copy) *pki_documenttype_id_copy = *pki_documenttype_id;
    }
    int *b_documenttype_isactive_copy = NULL;
    if (b_documenttype_isactive) {
        b_documenttype_isactive_copy = malloc(sizeof(int));
        if (b_documenttype_isactive_copy) *b_documenttype_isactive_copy = *b_documenttype_isactive;
    }
    documenttype_autocomplete_element_response_t *result = documenttype_autocomplete_element_response_create_internal (
        pki_documenttype_id_copy,
        s_documenttype_name_x,
        b_documenttype_isactive_copy
        );
    if (!result) {
        free(pki_documenttype_id_copy);
        free(b_documenttype_isactive_copy);
    }
    return result;
}

void documenttype_autocomplete_element_response_free(documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response) {
    if(NULL == documenttype_autocomplete_element_response){
        return ;
    }
    if(documenttype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_autocomplete_element_response->pki_documenttype_id) {
        free(documenttype_autocomplete_element_response->pki_documenttype_id);
        documenttype_autocomplete_element_response->pki_documenttype_id = NULL;
    }
    if (documenttype_autocomplete_element_response->s_documenttype_name_x) {
        free(documenttype_autocomplete_element_response->s_documenttype_name_x);
        documenttype_autocomplete_element_response->s_documenttype_name_x = NULL;
    }
    if (documenttype_autocomplete_element_response->b_documenttype_isactive) {
        free(documenttype_autocomplete_element_response->b_documenttype_isactive);
        documenttype_autocomplete_element_response->b_documenttype_isactive = NULL;
    }
    free(documenttype_autocomplete_element_response);
}

cJSON *documenttype_autocomplete_element_response_convertToJSON(documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_autocomplete_element_response->pki_documenttype_id
    if (!documenttype_autocomplete_element_response->pki_documenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDocumenttypeID", *documenttype_autocomplete_element_response->pki_documenttype_id) == NULL) {
    goto fail; //Numeric
    }


    // documenttype_autocomplete_element_response->s_documenttype_name_x
    if (!documenttype_autocomplete_element_response->s_documenttype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDocumenttypeNameX", documenttype_autocomplete_element_response->s_documenttype_name_x) == NULL) {
    goto fail; //String
    }


    // documenttype_autocomplete_element_response->b_documenttype_isactive
    if (!documenttype_autocomplete_element_response->b_documenttype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDocumenttypeIsactive", *documenttype_autocomplete_element_response->b_documenttype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_parseFromJSON(cJSON *documenttype_autocomplete_element_responseJSON){

    documenttype_autocomplete_element_response_t *documenttype_autocomplete_element_response_local_var = NULL;

    // define the local variable for documenttype_autocomplete_element_response->pki_documenttype_id
    int *pki_documenttype_id_local_var = NULL;

    char *s_documenttype_name_x_local_str = NULL;

    // define the local variable for documenttype_autocomplete_element_response->b_documenttype_isactive
    int *b_documenttype_isactive_local_var = NULL;

    // documenttype_autocomplete_element_response->pki_documenttype_id
    cJSON *pki_documenttype_id = cJSON_GetObjectItemCaseSensitive(documenttype_autocomplete_element_responseJSON, "pkiDocumenttypeID");
    if (cJSON_IsNull(pki_documenttype_id)) {
        pki_documenttype_id = NULL;
    }
    if (!pki_documenttype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_documenttype_id))
    {
    goto end; //Numeric
    }
    pki_documenttype_id_local_var = malloc(sizeof(int));
    if(!pki_documenttype_id_local_var)
    {
        goto end;
    }
    *pki_documenttype_id_local_var = pki_documenttype_id->valuedouble;

    // documenttype_autocomplete_element_response->s_documenttype_name_x
    cJSON *s_documenttype_name_x = cJSON_GetObjectItemCaseSensitive(documenttype_autocomplete_element_responseJSON, "sDocumenttypeNameX");
    if (cJSON_IsNull(s_documenttype_name_x)) {
        s_documenttype_name_x = NULL;
    }
    if (!s_documenttype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_documenttype_name_x))
    {
    goto end; //String
    }

    // documenttype_autocomplete_element_response->b_documenttype_isactive
    cJSON *b_documenttype_isactive = cJSON_GetObjectItemCaseSensitive(documenttype_autocomplete_element_responseJSON, "bDocumenttypeIsactive");
    if (cJSON_IsNull(b_documenttype_isactive)) {
        b_documenttype_isactive = NULL;
    }
    if (!b_documenttype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_documenttype_isactive))
    {
    goto end; //Bool
    }
    b_documenttype_isactive_local_var = malloc(sizeof(int));
    if(!b_documenttype_isactive_local_var)
    {
        goto end;
    }
    *b_documenttype_isactive_local_var = b_documenttype_isactive->valueint;


    if (s_documenttype_name_x && !cJSON_IsNull(s_documenttype_name_x)) s_documenttype_name_x_local_str = strdup(s_documenttype_name_x->valuestring);

    documenttype_autocomplete_element_response_local_var = documenttype_autocomplete_element_response_create_internal (
        pki_documenttype_id_local_var,
        s_documenttype_name_x_local_str,
        b_documenttype_isactive_local_var
        );

    if (!documenttype_autocomplete_element_response_local_var) {
        goto end;
    }

    return documenttype_autocomplete_element_response_local_var;
end:
    if (pki_documenttype_id_local_var) {
        free(pki_documenttype_id_local_var);
        pki_documenttype_id_local_var = NULL;
    }
    if (s_documenttype_name_x_local_str) {
        free(s_documenttype_name_x_local_str);
        s_documenttype_name_x_local_str = NULL;
    }
    if (b_documenttype_isactive_local_var) {
        free(b_documenttype_isactive_local_var);
        b_documenttype_isactive_local_var = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchiseoffice_autocomplete_element_response.h"



static franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_create_internal(
    char *s_franchiseoffice_description,
    int *pki_franchiseoffice_id,
    int *b_franchiseoffice_isactive
    ) {
    franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_local_var = malloc(sizeof(franchiseoffice_autocomplete_element_response_t));
    if (!franchiseoffice_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(franchiseoffice_autocomplete_element_response_local_var, 0, sizeof(franchiseoffice_autocomplete_element_response_t));
    franchiseoffice_autocomplete_element_response_local_var->_library_owned = 1;
    franchiseoffice_autocomplete_element_response_local_var->s_franchiseoffice_description = s_franchiseoffice_description;
    franchiseoffice_autocomplete_element_response_local_var->pki_franchiseoffice_id = pki_franchiseoffice_id;
    franchiseoffice_autocomplete_element_response_local_var->b_franchiseoffice_isactive = b_franchiseoffice_isactive;
    return franchiseoffice_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_create(
    char *s_franchiseoffice_description,
    int *pki_franchiseoffice_id,
    int *b_franchiseoffice_isactive
    ) {
    int *pki_franchiseoffice_id_copy = NULL;
    if (pki_franchiseoffice_id) {
        pki_franchiseoffice_id_copy = malloc(sizeof(int));
        if (pki_franchiseoffice_id_copy) *pki_franchiseoffice_id_copy = *pki_franchiseoffice_id;
    }
    int *b_franchiseoffice_isactive_copy = NULL;
    if (b_franchiseoffice_isactive) {
        b_franchiseoffice_isactive_copy = malloc(sizeof(int));
        if (b_franchiseoffice_isactive_copy) *b_franchiseoffice_isactive_copy = *b_franchiseoffice_isactive;
    }
    franchiseoffice_autocomplete_element_response_t *result = franchiseoffice_autocomplete_element_response_create_internal (
        s_franchiseoffice_description,
        pki_franchiseoffice_id_copy,
        b_franchiseoffice_isactive_copy
        );
    if (!result) {
        free(pki_franchiseoffice_id_copy);
        free(b_franchiseoffice_isactive_copy);
    }
    return result;
}

void franchiseoffice_autocomplete_element_response_free(franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response) {
    if(NULL == franchiseoffice_autocomplete_element_response){
        return ;
    }
    if(franchiseoffice_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "franchiseoffice_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (franchiseoffice_autocomplete_element_response->s_franchiseoffice_description) {
        free(franchiseoffice_autocomplete_element_response->s_franchiseoffice_description);
        franchiseoffice_autocomplete_element_response->s_franchiseoffice_description = NULL;
    }
    if (franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id) {
        free(franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id);
        franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id = NULL;
    }
    if (franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive) {
        free(franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive);
        franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive = NULL;
    }
    free(franchiseoffice_autocomplete_element_response);
}

cJSON *franchiseoffice_autocomplete_element_response_convertToJSON(franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // franchiseoffice_autocomplete_element_response->s_franchiseoffice_description
    if (!franchiseoffice_autocomplete_element_response->s_franchiseoffice_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFranchiseofficeDescription", franchiseoffice_autocomplete_element_response->s_franchiseoffice_description) == NULL) {
    goto fail; //String
    }


    // franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id
    if (!franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiFranchiseofficeID", *franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }


    // franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive
    if (!franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bFranchiseofficeIsactive", *franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_parseFromJSON(cJSON *franchiseoffice_autocomplete_element_responseJSON){

    franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_local_var = NULL;

    char *s_franchiseoffice_description_local_str = NULL;

    // define the local variable for franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id
    int *pki_franchiseoffice_id_local_var = NULL;

    // define the local variable for franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive
    int *b_franchiseoffice_isactive_local_var = NULL;

    // franchiseoffice_autocomplete_element_response->s_franchiseoffice_description
    cJSON *s_franchiseoffice_description = cJSON_GetObjectItemCaseSensitive(franchiseoffice_autocomplete_element_responseJSON, "sFranchiseofficeDescription");
    if (cJSON_IsNull(s_franchiseoffice_description)) {
        s_franchiseoffice_description = NULL;
    }
    if (!s_franchiseoffice_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_franchiseoffice_description))
    {
    goto end; //String
    }

    // franchiseoffice_autocomplete_element_response->pki_franchiseoffice_id
    cJSON *pki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(franchiseoffice_autocomplete_element_responseJSON, "pkiFranchiseofficeID");
    if (cJSON_IsNull(pki_franchiseoffice_id)) {
        pki_franchiseoffice_id = NULL;
    }
    if (!pki_franchiseoffice_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    pki_franchiseoffice_id_local_var = malloc(sizeof(int));
    if(!pki_franchiseoffice_id_local_var)
    {
        goto end;
    }
    *pki_franchiseoffice_id_local_var = pki_franchiseoffice_id->valuedouble;

    // franchiseoffice_autocomplete_element_response->b_franchiseoffice_isactive
    cJSON *b_franchiseoffice_isactive = cJSON_GetObjectItemCaseSensitive(franchiseoffice_autocomplete_element_responseJSON, "bFranchiseofficeIsactive");
    if (cJSON_IsNull(b_franchiseoffice_isactive)) {
        b_franchiseoffice_isactive = NULL;
    }
    if (!b_franchiseoffice_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_franchiseoffice_isactive))
    {
    goto end; //Bool
    }
    b_franchiseoffice_isactive_local_var = malloc(sizeof(int));
    if(!b_franchiseoffice_isactive_local_var)
    {
        goto end;
    }
    *b_franchiseoffice_isactive_local_var = b_franchiseoffice_isactive->valueint;


    if (s_franchiseoffice_description && !cJSON_IsNull(s_franchiseoffice_description)) s_franchiseoffice_description_local_str = strdup(s_franchiseoffice_description->valuestring);

    franchiseoffice_autocomplete_element_response_local_var = franchiseoffice_autocomplete_element_response_create_internal (
        s_franchiseoffice_description_local_str,
        pki_franchiseoffice_id_local_var,
        b_franchiseoffice_isactive_local_var
        );

    if (!franchiseoffice_autocomplete_element_response_local_var) {
        goto end;
    }

    return franchiseoffice_autocomplete_element_response_local_var;
end:
    if (s_franchiseoffice_description_local_str) {
        free(s_franchiseoffice_description_local_str);
        s_franchiseoffice_description_local_str = NULL;
    }
    if (pki_franchiseoffice_id_local_var) {
        free(pki_franchiseoffice_id_local_var);
        pki_franchiseoffice_id_local_var = NULL;
    }
    if (b_franchiseoffice_isactive_local_var) {
        free(b_franchiseoffice_isactive_local_var);
        b_franchiseoffice_isactive_local_var = NULL;
    }
    return NULL;

}

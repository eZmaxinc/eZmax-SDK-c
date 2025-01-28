#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisebroker_autocomplete_element_response.h"



static franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_create_internal(
    char *s_franchisebroker_name,
    int pki_franchisebroker_id,
    int b_franchisebroker_isactive
    ) {
    franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_local_var = malloc(sizeof(franchisebroker_autocomplete_element_response_t));
    if (!franchisebroker_autocomplete_element_response_local_var) {
        return NULL;
    }
    franchisebroker_autocomplete_element_response_local_var->s_franchisebroker_name = s_franchisebroker_name;
    franchisebroker_autocomplete_element_response_local_var->pki_franchisebroker_id = pki_franchisebroker_id;
    franchisebroker_autocomplete_element_response_local_var->b_franchisebroker_isactive = b_franchisebroker_isactive;

    franchisebroker_autocomplete_element_response_local_var->_library_owned = 1;
    return franchisebroker_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_create(
    char *s_franchisebroker_name,
    int pki_franchisebroker_id,
    int b_franchisebroker_isactive
    ) {
    return franchisebroker_autocomplete_element_response_create_internal (
        s_franchisebroker_name,
        pki_franchisebroker_id,
        b_franchisebroker_isactive
        );
}

void franchisebroker_autocomplete_element_response_free(franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response) {
    if(NULL == franchisebroker_autocomplete_element_response){
        return ;
    }
    if(franchisebroker_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "franchisebroker_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (franchisebroker_autocomplete_element_response->s_franchisebroker_name) {
        free(franchisebroker_autocomplete_element_response->s_franchisebroker_name);
        franchisebroker_autocomplete_element_response->s_franchisebroker_name = NULL;
    }
    free(franchisebroker_autocomplete_element_response);
}

cJSON *franchisebroker_autocomplete_element_response_convertToJSON(franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // franchisebroker_autocomplete_element_response->s_franchisebroker_name
    if (!franchisebroker_autocomplete_element_response->s_franchisebroker_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFranchisebrokerName", franchisebroker_autocomplete_element_response->s_franchisebroker_name) == NULL) {
    goto fail; //String
    }


    // franchisebroker_autocomplete_element_response->pki_franchisebroker_id
    if (!franchisebroker_autocomplete_element_response->pki_franchisebroker_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiFranchisebrokerID", franchisebroker_autocomplete_element_response->pki_franchisebroker_id) == NULL) {
    goto fail; //Numeric
    }


    // franchisebroker_autocomplete_element_response->b_franchisebroker_isactive
    if (!franchisebroker_autocomplete_element_response->b_franchisebroker_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bFranchisebrokerIsactive", franchisebroker_autocomplete_element_response->b_franchisebroker_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_parseFromJSON(cJSON *franchisebroker_autocomplete_element_responseJSON){

    franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_local_var = NULL;

    // franchisebroker_autocomplete_element_response->s_franchisebroker_name
    cJSON *s_franchisebroker_name = cJSON_GetObjectItemCaseSensitive(franchisebroker_autocomplete_element_responseJSON, "sFranchisebrokerName");
    if (cJSON_IsNull(s_franchisebroker_name)) {
        s_franchisebroker_name = NULL;
    }
    if (!s_franchisebroker_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_franchisebroker_name))
    {
    goto end; //String
    }

    // franchisebroker_autocomplete_element_response->pki_franchisebroker_id
    cJSON *pki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(franchisebroker_autocomplete_element_responseJSON, "pkiFranchisebrokerID");
    if (cJSON_IsNull(pki_franchisebroker_id)) {
        pki_franchisebroker_id = NULL;
    }
    if (!pki_franchisebroker_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_franchisebroker_id))
    {
    goto end; //Numeric
    }

    // franchisebroker_autocomplete_element_response->b_franchisebroker_isactive
    cJSON *b_franchisebroker_isactive = cJSON_GetObjectItemCaseSensitive(franchisebroker_autocomplete_element_responseJSON, "bFranchisebrokerIsactive");
    if (cJSON_IsNull(b_franchisebroker_isactive)) {
        b_franchisebroker_isactive = NULL;
    }
    if (!b_franchisebroker_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_franchisebroker_isactive))
    {
    goto end; //Bool
    }


    franchisebroker_autocomplete_element_response_local_var = franchisebroker_autocomplete_element_response_create_internal (
        strdup(s_franchisebroker_name->valuestring),
        pki_franchisebroker_id->valuedouble,
        b_franchisebroker_isactive->valueint
        );

    return franchisebroker_autocomplete_element_response_local_var;
end:
    return NULL;

}

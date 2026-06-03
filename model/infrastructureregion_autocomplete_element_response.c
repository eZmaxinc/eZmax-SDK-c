#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "infrastructureregion_autocomplete_element_response.h"



static infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_create_internal(
    int *pki_infrastructureregion_id,
    char *s_infrastructureregion_code,
    int *b_infrastructureregion_programmer,
    int *b_infrastructureregion_isactive
    ) {
    infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_local_var = malloc(sizeof(infrastructureregion_autocomplete_element_response_t));
    if (!infrastructureregion_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(infrastructureregion_autocomplete_element_response_local_var, 0, sizeof(infrastructureregion_autocomplete_element_response_t));
    infrastructureregion_autocomplete_element_response_local_var->_library_owned = 1;
    infrastructureregion_autocomplete_element_response_local_var->pki_infrastructureregion_id = pki_infrastructureregion_id;
    infrastructureregion_autocomplete_element_response_local_var->s_infrastructureregion_code = s_infrastructureregion_code;
    infrastructureregion_autocomplete_element_response_local_var->b_infrastructureregion_programmer = b_infrastructureregion_programmer;
    infrastructureregion_autocomplete_element_response_local_var->b_infrastructureregion_isactive = b_infrastructureregion_isactive;
    return infrastructureregion_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_create(
    int *pki_infrastructureregion_id,
    char *s_infrastructureregion_code,
    int *b_infrastructureregion_programmer,
    int *b_infrastructureregion_isactive
    ) {
    int *pki_infrastructureregion_id_copy = NULL;
    if (pki_infrastructureregion_id) {
        pki_infrastructureregion_id_copy = malloc(sizeof(int));
        if (pki_infrastructureregion_id_copy) *pki_infrastructureregion_id_copy = *pki_infrastructureregion_id;
    }
    int *b_infrastructureregion_programmer_copy = NULL;
    if (b_infrastructureregion_programmer) {
        b_infrastructureregion_programmer_copy = malloc(sizeof(int));
        if (b_infrastructureregion_programmer_copy) *b_infrastructureregion_programmer_copy = *b_infrastructureregion_programmer;
    }
    int *b_infrastructureregion_isactive_copy = NULL;
    if (b_infrastructureregion_isactive) {
        b_infrastructureregion_isactive_copy = malloc(sizeof(int));
        if (b_infrastructureregion_isactive_copy) *b_infrastructureregion_isactive_copy = *b_infrastructureregion_isactive;
    }
    infrastructureregion_autocomplete_element_response_t *result = infrastructureregion_autocomplete_element_response_create_internal (
        pki_infrastructureregion_id_copy,
        s_infrastructureregion_code,
        b_infrastructureregion_programmer_copy,
        b_infrastructureregion_isactive_copy
        );
    if (!result) {
        free(pki_infrastructureregion_id_copy);
        free(b_infrastructureregion_programmer_copy);
        free(b_infrastructureregion_isactive_copy);
    }
    return result;
}

void infrastructureregion_autocomplete_element_response_free(infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response) {
    if(NULL == infrastructureregion_autocomplete_element_response){
        return ;
    }
    if(infrastructureregion_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "infrastructureregion_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id) {
        free(infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id);
        infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id = NULL;
    }
    if (infrastructureregion_autocomplete_element_response->s_infrastructureregion_code) {
        free(infrastructureregion_autocomplete_element_response->s_infrastructureregion_code);
        infrastructureregion_autocomplete_element_response->s_infrastructureregion_code = NULL;
    }
    if (infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer) {
        free(infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer);
        infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer = NULL;
    }
    if (infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive) {
        free(infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive);
        infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive = NULL;
    }
    free(infrastructureregion_autocomplete_element_response);
}

cJSON *infrastructureregion_autocomplete_element_response_convertToJSON(infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id
    if (!infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInfrastructureregionID", *infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id) == NULL) {
    goto fail; //Numeric
    }


    // infrastructureregion_autocomplete_element_response->s_infrastructureregion_code
    if (!infrastructureregion_autocomplete_element_response->s_infrastructureregion_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInfrastructureregionCode", infrastructureregion_autocomplete_element_response->s_infrastructureregion_code) == NULL) {
    goto fail; //String
    }


    // infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer
    if (!infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInfrastructureregionProgrammer", *infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer) == NULL) {
    goto fail; //Bool
    }


    // infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive
    if (!infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInfrastructureregionIsactive", *infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_parseFromJSON(cJSON *infrastructureregion_autocomplete_element_responseJSON){

    infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_local_var = NULL;

    // define the local variable for infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id
    int *pki_infrastructureregion_id_local_var = NULL;

    char *s_infrastructureregion_code_local_str = NULL;

    // define the local variable for infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer
    int *b_infrastructureregion_programmer_local_var = NULL;

    // define the local variable for infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive
    int *b_infrastructureregion_isactive_local_var = NULL;

    // infrastructureregion_autocomplete_element_response->pki_infrastructureregion_id
    cJSON *pki_infrastructureregion_id = cJSON_GetObjectItemCaseSensitive(infrastructureregion_autocomplete_element_responseJSON, "pkiInfrastructureregionID");
    if (cJSON_IsNull(pki_infrastructureregion_id)) {
        pki_infrastructureregion_id = NULL;
    }
    if (!pki_infrastructureregion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_infrastructureregion_id))
    {
    goto end; //Numeric
    }
    pki_infrastructureregion_id_local_var = malloc(sizeof(int));
    if(!pki_infrastructureregion_id_local_var)
    {
        goto end;
    }
    *pki_infrastructureregion_id_local_var = pki_infrastructureregion_id->valuedouble;

    // infrastructureregion_autocomplete_element_response->s_infrastructureregion_code
    cJSON *s_infrastructureregion_code = cJSON_GetObjectItemCaseSensitive(infrastructureregion_autocomplete_element_responseJSON, "sInfrastructureregionCode");
    if (cJSON_IsNull(s_infrastructureregion_code)) {
        s_infrastructureregion_code = NULL;
    }
    if (!s_infrastructureregion_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_infrastructureregion_code))
    {
    goto end; //String
    }

    // infrastructureregion_autocomplete_element_response->b_infrastructureregion_programmer
    cJSON *b_infrastructureregion_programmer = cJSON_GetObjectItemCaseSensitive(infrastructureregion_autocomplete_element_responseJSON, "bInfrastructureregionProgrammer");
    if (cJSON_IsNull(b_infrastructureregion_programmer)) {
        b_infrastructureregion_programmer = NULL;
    }
    if (!b_infrastructureregion_programmer) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_infrastructureregion_programmer))
    {
    goto end; //Bool
    }
    b_infrastructureregion_programmer_local_var = malloc(sizeof(int));
    if(!b_infrastructureregion_programmer_local_var)
    {
        goto end;
    }
    *b_infrastructureregion_programmer_local_var = b_infrastructureregion_programmer->valueint;

    // infrastructureregion_autocomplete_element_response->b_infrastructureregion_isactive
    cJSON *b_infrastructureregion_isactive = cJSON_GetObjectItemCaseSensitive(infrastructureregion_autocomplete_element_responseJSON, "bInfrastructureregionIsactive");
    if (cJSON_IsNull(b_infrastructureregion_isactive)) {
        b_infrastructureregion_isactive = NULL;
    }
    if (!b_infrastructureregion_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_infrastructureregion_isactive))
    {
    goto end; //Bool
    }
    b_infrastructureregion_isactive_local_var = malloc(sizeof(int));
    if(!b_infrastructureregion_isactive_local_var)
    {
        goto end;
    }
    *b_infrastructureregion_isactive_local_var = b_infrastructureregion_isactive->valueint;


    if (s_infrastructureregion_code && !cJSON_IsNull(s_infrastructureregion_code)) s_infrastructureregion_code_local_str = strdup(s_infrastructureregion_code->valuestring);

    infrastructureregion_autocomplete_element_response_local_var = infrastructureregion_autocomplete_element_response_create_internal (
        pki_infrastructureregion_id_local_var,
        s_infrastructureregion_code_local_str,
        b_infrastructureregion_programmer_local_var,
        b_infrastructureregion_isactive_local_var
        );

    if (!infrastructureregion_autocomplete_element_response_local_var) {
        goto end;
    }

    return infrastructureregion_autocomplete_element_response_local_var;
end:
    if (pki_infrastructureregion_id_local_var) {
        free(pki_infrastructureregion_id_local_var);
        pki_infrastructureregion_id_local_var = NULL;
    }
    if (s_infrastructureregion_code_local_str) {
        free(s_infrastructureregion_code_local_str);
        s_infrastructureregion_code_local_str = NULL;
    }
    if (b_infrastructureregion_programmer_local_var) {
        free(b_infrastructureregion_programmer_local_var);
        b_infrastructureregion_programmer_local_var = NULL;
    }
    if (b_infrastructureregion_isactive_local_var) {
        free(b_infrastructureregion_isactive_local_var);
        b_infrastructureregion_isactive_local_var = NULL;
    }
    return NULL;

}

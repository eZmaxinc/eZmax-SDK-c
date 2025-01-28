#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "company_autocomplete_element_response.h"



static company_autocomplete_element_response_t *company_autocomplete_element_response_create_internal(
    int pki_company_id,
    char *s_company_name_x,
    int b_company_isactive
    ) {
    company_autocomplete_element_response_t *company_autocomplete_element_response_local_var = malloc(sizeof(company_autocomplete_element_response_t));
    if (!company_autocomplete_element_response_local_var) {
        return NULL;
    }
    company_autocomplete_element_response_local_var->pki_company_id = pki_company_id;
    company_autocomplete_element_response_local_var->s_company_name_x = s_company_name_x;
    company_autocomplete_element_response_local_var->b_company_isactive = b_company_isactive;

    company_autocomplete_element_response_local_var->_library_owned = 1;
    return company_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) company_autocomplete_element_response_t *company_autocomplete_element_response_create(
    int pki_company_id,
    char *s_company_name_x,
    int b_company_isactive
    ) {
    return company_autocomplete_element_response_create_internal (
        pki_company_id,
        s_company_name_x,
        b_company_isactive
        );
}

void company_autocomplete_element_response_free(company_autocomplete_element_response_t *company_autocomplete_element_response) {
    if(NULL == company_autocomplete_element_response){
        return ;
    }
    if(company_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "company_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (company_autocomplete_element_response->s_company_name_x) {
        free(company_autocomplete_element_response->s_company_name_x);
        company_autocomplete_element_response->s_company_name_x = NULL;
    }
    free(company_autocomplete_element_response);
}

cJSON *company_autocomplete_element_response_convertToJSON(company_autocomplete_element_response_t *company_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // company_autocomplete_element_response->pki_company_id
    if (!company_autocomplete_element_response->pki_company_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCompanyID", company_autocomplete_element_response->pki_company_id) == NULL) {
    goto fail; //Numeric
    }


    // company_autocomplete_element_response->s_company_name_x
    if (!company_autocomplete_element_response->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", company_autocomplete_element_response->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // company_autocomplete_element_response->b_company_isactive
    if (!company_autocomplete_element_response->b_company_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCompanyIsactive", company_autocomplete_element_response->b_company_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

company_autocomplete_element_response_t *company_autocomplete_element_response_parseFromJSON(cJSON *company_autocomplete_element_responseJSON){

    company_autocomplete_element_response_t *company_autocomplete_element_response_local_var = NULL;

    // company_autocomplete_element_response->pki_company_id
    cJSON *pki_company_id = cJSON_GetObjectItemCaseSensitive(company_autocomplete_element_responseJSON, "pkiCompanyID");
    if (cJSON_IsNull(pki_company_id)) {
        pki_company_id = NULL;
    }
    if (!pki_company_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_company_id))
    {
    goto end; //Numeric
    }

    // company_autocomplete_element_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(company_autocomplete_element_responseJSON, "sCompanyNameX");
    if (cJSON_IsNull(s_company_name_x)) {
        s_company_name_x = NULL;
    }
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // company_autocomplete_element_response->b_company_isactive
    cJSON *b_company_isactive = cJSON_GetObjectItemCaseSensitive(company_autocomplete_element_responseJSON, "bCompanyIsactive");
    if (cJSON_IsNull(b_company_isactive)) {
        b_company_isactive = NULL;
    }
    if (!b_company_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_company_isactive))
    {
    goto end; //Bool
    }


    company_autocomplete_element_response_local_var = company_autocomplete_element_response_create_internal (
        pki_company_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        b_company_isactive->valueint
        );

    return company_autocomplete_element_response_local_var;
end:
    return NULL;

}

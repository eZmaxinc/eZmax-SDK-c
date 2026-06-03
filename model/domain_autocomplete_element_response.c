#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_autocomplete_element_response.h"



static domain_autocomplete_element_response_t *domain_autocomplete_element_response_create_internal(
    int *pki_domain_id,
    char *s_domain_name,
    int *b_domain_isactive
    ) {
    domain_autocomplete_element_response_t *domain_autocomplete_element_response_local_var = malloc(sizeof(domain_autocomplete_element_response_t));
    if (!domain_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(domain_autocomplete_element_response_local_var, 0, sizeof(domain_autocomplete_element_response_t));
    domain_autocomplete_element_response_local_var->_library_owned = 1;
    domain_autocomplete_element_response_local_var->pki_domain_id = pki_domain_id;
    domain_autocomplete_element_response_local_var->s_domain_name = s_domain_name;
    domain_autocomplete_element_response_local_var->b_domain_isactive = b_domain_isactive;
    return domain_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) domain_autocomplete_element_response_t *domain_autocomplete_element_response_create(
    int *pki_domain_id,
    char *s_domain_name,
    int *b_domain_isactive
    ) {
    int *pki_domain_id_copy = NULL;
    if (pki_domain_id) {
        pki_domain_id_copy = malloc(sizeof(int));
        if (pki_domain_id_copy) *pki_domain_id_copy = *pki_domain_id;
    }
    int *b_domain_isactive_copy = NULL;
    if (b_domain_isactive) {
        b_domain_isactive_copy = malloc(sizeof(int));
        if (b_domain_isactive_copy) *b_domain_isactive_copy = *b_domain_isactive;
    }
    domain_autocomplete_element_response_t *result = domain_autocomplete_element_response_create_internal (
        pki_domain_id_copy,
        s_domain_name,
        b_domain_isactive_copy
        );
    if (!result) {
        free(pki_domain_id_copy);
        free(b_domain_isactive_copy);
    }
    return result;
}

void domain_autocomplete_element_response_free(domain_autocomplete_element_response_t *domain_autocomplete_element_response) {
    if(NULL == domain_autocomplete_element_response){
        return ;
    }
    if(domain_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_autocomplete_element_response->pki_domain_id) {
        free(domain_autocomplete_element_response->pki_domain_id);
        domain_autocomplete_element_response->pki_domain_id = NULL;
    }
    if (domain_autocomplete_element_response->s_domain_name) {
        free(domain_autocomplete_element_response->s_domain_name);
        domain_autocomplete_element_response->s_domain_name = NULL;
    }
    if (domain_autocomplete_element_response->b_domain_isactive) {
        free(domain_autocomplete_element_response->b_domain_isactive);
        domain_autocomplete_element_response->b_domain_isactive = NULL;
    }
    free(domain_autocomplete_element_response);
}

cJSON *domain_autocomplete_element_response_convertToJSON(domain_autocomplete_element_response_t *domain_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // domain_autocomplete_element_response->pki_domain_id
    if (!domain_autocomplete_element_response->pki_domain_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDomainID", *domain_autocomplete_element_response->pki_domain_id) == NULL) {
    goto fail; //Numeric
    }


    // domain_autocomplete_element_response->s_domain_name
    if (!domain_autocomplete_element_response->s_domain_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDomainName", domain_autocomplete_element_response->s_domain_name) == NULL) {
    goto fail; //String
    }


    // domain_autocomplete_element_response->b_domain_isactive
    if (!domain_autocomplete_element_response->b_domain_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainIsactive", *domain_autocomplete_element_response->b_domain_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_autocomplete_element_response_t *domain_autocomplete_element_response_parseFromJSON(cJSON *domain_autocomplete_element_responseJSON){

    domain_autocomplete_element_response_t *domain_autocomplete_element_response_local_var = NULL;

    // define the local variable for domain_autocomplete_element_response->pki_domain_id
    int *pki_domain_id_local_var = NULL;

    char *s_domain_name_local_str = NULL;

    // define the local variable for domain_autocomplete_element_response->b_domain_isactive
    int *b_domain_isactive_local_var = NULL;

    // domain_autocomplete_element_response->pki_domain_id
    cJSON *pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_autocomplete_element_responseJSON, "pkiDomainID");
    if (cJSON_IsNull(pki_domain_id)) {
        pki_domain_id = NULL;
    }
    if (!pki_domain_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_domain_id))
    {
    goto end; //Numeric
    }
    pki_domain_id_local_var = malloc(sizeof(int));
    if(!pki_domain_id_local_var)
    {
        goto end;
    }
    *pki_domain_id_local_var = pki_domain_id->valuedouble;

    // domain_autocomplete_element_response->s_domain_name
    cJSON *s_domain_name = cJSON_GetObjectItemCaseSensitive(domain_autocomplete_element_responseJSON, "sDomainName");
    if (cJSON_IsNull(s_domain_name)) {
        s_domain_name = NULL;
    }
    if (!s_domain_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_domain_name))
    {
    goto end; //String
    }

    // domain_autocomplete_element_response->b_domain_isactive
    cJSON *b_domain_isactive = cJSON_GetObjectItemCaseSensitive(domain_autocomplete_element_responseJSON, "bDomainIsactive");
    if (cJSON_IsNull(b_domain_isactive)) {
        b_domain_isactive = NULL;
    }
    if (!b_domain_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_isactive))
    {
    goto end; //Bool
    }
    b_domain_isactive_local_var = malloc(sizeof(int));
    if(!b_domain_isactive_local_var)
    {
        goto end;
    }
    *b_domain_isactive_local_var = b_domain_isactive->valueint;


    if (s_domain_name && !cJSON_IsNull(s_domain_name)) s_domain_name_local_str = strdup(s_domain_name->valuestring);

    domain_autocomplete_element_response_local_var = domain_autocomplete_element_response_create_internal (
        pki_domain_id_local_var,
        s_domain_name_local_str,
        b_domain_isactive_local_var
        );

    if (!domain_autocomplete_element_response_local_var) {
        goto end;
    }

    return domain_autocomplete_element_response_local_var;
end:
    if (pki_domain_id_local_var) {
        free(pki_domain_id_local_var);
        pki_domain_id_local_var = NULL;
    }
    if (s_domain_name_local_str) {
        free(s_domain_name_local_str);
        s_domain_name_local_str = NULL;
    }
    if (b_domain_isactive_local_var) {
        free(b_domain_isactive_local_var);
        b_domain_isactive_local_var = NULL;
    }
    return NULL;

}

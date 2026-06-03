#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_request.h"



static domain_request_t *domain_request_create_internal(
    int *pki_domain_id,
    char *s_domain_name
    ) {
    domain_request_t *domain_request_local_var = malloc(sizeof(domain_request_t));
    if (!domain_request_local_var) {
        return NULL;
    }
    memset(domain_request_local_var, 0, sizeof(domain_request_t));
    domain_request_local_var->_library_owned = 1;
    domain_request_local_var->pki_domain_id = pki_domain_id;
    domain_request_local_var->s_domain_name = s_domain_name;
    return domain_request_local_var;
}

__attribute__((deprecated)) domain_request_t *domain_request_create(
    int *pki_domain_id,
    char *s_domain_name
    ) {
    int *pki_domain_id_copy = NULL;
    if (pki_domain_id) {
        pki_domain_id_copy = malloc(sizeof(int));
        if (pki_domain_id_copy) *pki_domain_id_copy = *pki_domain_id;
    }
    domain_request_t *result = domain_request_create_internal (
        pki_domain_id_copy,
        s_domain_name
        );
    if (!result) {
        free(pki_domain_id_copy);
    }
    return result;
}

void domain_request_free(domain_request_t *domain_request) {
    if(NULL == domain_request){
        return ;
    }
    if(domain_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_request->pki_domain_id) {
        free(domain_request->pki_domain_id);
        domain_request->pki_domain_id = NULL;
    }
    if (domain_request->s_domain_name) {
        free(domain_request->s_domain_name);
        domain_request->s_domain_name = NULL;
    }
    free(domain_request);
}

cJSON *domain_request_convertToJSON(domain_request_t *domain_request) {
    cJSON *item = cJSON_CreateObject();

    // domain_request->pki_domain_id
    if(domain_request->pki_domain_id) {
    if(cJSON_AddNumberToObject(item, "pkiDomainID", *domain_request->pki_domain_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_request->s_domain_name
    if (!domain_request->s_domain_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDomainName", domain_request->s_domain_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_request_t *domain_request_parseFromJSON(cJSON *domain_requestJSON){

    domain_request_t *domain_request_local_var = NULL;

    // define the local variable for domain_request->pki_domain_id
    int *pki_domain_id_local_var = NULL;

    char *s_domain_name_local_str = NULL;

    // domain_request->pki_domain_id
    cJSON *pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_requestJSON, "pkiDomainID");
    if (cJSON_IsNull(pki_domain_id)) {
        pki_domain_id = NULL;
    }
    if (pki_domain_id) { 
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
    }

    // domain_request->s_domain_name
    cJSON *s_domain_name = cJSON_GetObjectItemCaseSensitive(domain_requestJSON, "sDomainName");
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


    if (s_domain_name && !cJSON_IsNull(s_domain_name)) s_domain_name_local_str = strdup(s_domain_name->valuestring);

    domain_request_local_var = domain_request_create_internal (
        pki_domain_id_local_var,
        s_domain_name_local_str
        );

    if (!domain_request_local_var) {
        goto end;
    }

    return domain_request_local_var;
end:
    if (pki_domain_id_local_var) {
        free(pki_domain_id_local_var);
        pki_domain_id_local_var = NULL;
    }
    if (s_domain_name_local_str) {
        free(s_domain_name_local_str);
        s_domain_name_local_str = NULL;
    }
    return NULL;

}

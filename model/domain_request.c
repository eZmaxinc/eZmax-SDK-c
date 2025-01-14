#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_request.h"



domain_request_t *domain_request_create(
    int pki_domain_id,
    char *s_domain_name
    ) {
    domain_request_t *domain_request_local_var = malloc(sizeof(domain_request_t));
    if (!domain_request_local_var) {
        return NULL;
    }
    domain_request_local_var->pki_domain_id = pki_domain_id;
    domain_request_local_var->s_domain_name = s_domain_name;

    return domain_request_local_var;
}


void domain_request_free(domain_request_t *domain_request) {
    if(NULL == domain_request){
        return ;
    }
    listEntry_t *listEntry;
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
    if(cJSON_AddNumberToObject(item, "pkiDomainID", domain_request->pki_domain_id) == NULL) {
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

    // domain_request->pki_domain_id
    cJSON *pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_requestJSON, "pkiDomainID");
    if (pki_domain_id) { 
    if(!cJSON_IsNumber(pki_domain_id))
    {
    goto end; //Numeric
    }
    }

    // domain_request->s_domain_name
    cJSON *s_domain_name = cJSON_GetObjectItemCaseSensitive(domain_requestJSON, "sDomainName");
    if (!s_domain_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_domain_name))
    {
    goto end; //String
    }


    domain_request_local_var = domain_request_create (
        pki_domain_id ? pki_domain_id->valuedouble : 0,
        strdup(s_domain_name->valuestring)
        );

    return domain_request_local_var;
end:
    return NULL;

}

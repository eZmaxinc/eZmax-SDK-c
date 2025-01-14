#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_list_element.h"



domain_list_element_t *domain_list_element_create(
    int pki_domain_id,
    char *s_domain_name
    ) {
    domain_list_element_t *domain_list_element_local_var = malloc(sizeof(domain_list_element_t));
    if (!domain_list_element_local_var) {
        return NULL;
    }
    domain_list_element_local_var->pki_domain_id = pki_domain_id;
    domain_list_element_local_var->s_domain_name = s_domain_name;

    return domain_list_element_local_var;
}


void domain_list_element_free(domain_list_element_t *domain_list_element) {
    if(NULL == domain_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (domain_list_element->s_domain_name) {
        free(domain_list_element->s_domain_name);
        domain_list_element->s_domain_name = NULL;
    }
    free(domain_list_element);
}

cJSON *domain_list_element_convertToJSON(domain_list_element_t *domain_list_element) {
    cJSON *item = cJSON_CreateObject();

    // domain_list_element->pki_domain_id
    if (!domain_list_element->pki_domain_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDomainID", domain_list_element->pki_domain_id) == NULL) {
    goto fail; //Numeric
    }


    // domain_list_element->s_domain_name
    if (!domain_list_element->s_domain_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDomainName", domain_list_element->s_domain_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_list_element_t *domain_list_element_parseFromJSON(cJSON *domain_list_elementJSON){

    domain_list_element_t *domain_list_element_local_var = NULL;

    // domain_list_element->pki_domain_id
    cJSON *pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_list_elementJSON, "pkiDomainID");
    if (!pki_domain_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_domain_id))
    {
    goto end; //Numeric
    }

    // domain_list_element->s_domain_name
    cJSON *s_domain_name = cJSON_GetObjectItemCaseSensitive(domain_list_elementJSON, "sDomainName");
    if (!s_domain_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_domain_name))
    {
    goto end; //String
    }


    domain_list_element_local_var = domain_list_element_create (
        pki_domain_id->valuedouble,
        strdup(s_domain_name->valuestring)
        );

    return domain_list_element_local_var;
end:
    return NULL;

}

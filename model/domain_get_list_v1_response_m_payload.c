#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_get_list_v1_response_m_payload.h"



domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_domain
    ) {
    domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload_local_var = malloc(sizeof(domain_get_list_v1_response_m_payload_t));
    if (!domain_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    domain_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    domain_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    domain_get_list_v1_response_m_payload_local_var->a_obj_domain = a_obj_domain;

    return domain_get_list_v1_response_m_payload_local_var;
}


void domain_get_list_v1_response_m_payload_free(domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload) {
    if(NULL == domain_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (domain_get_list_v1_response_m_payload->a_obj_domain) {
        list_ForEach(listEntry, domain_get_list_v1_response_m_payload->a_obj_domain) {
            domain_list_element_free(listEntry->data);
        }
        list_freeList(domain_get_list_v1_response_m_payload->a_obj_domain);
        domain_get_list_v1_response_m_payload->a_obj_domain = NULL;
    }
    free(domain_get_list_v1_response_m_payload);
}

cJSON *domain_get_list_v1_response_m_payload_convertToJSON(domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // domain_get_list_v1_response_m_payload->i_row_returned
    if (!domain_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", domain_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // domain_get_list_v1_response_m_payload->i_row_filtered
    if (!domain_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", domain_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // domain_get_list_v1_response_m_payload->a_obj_domain
    if (!domain_get_list_v1_response_m_payload->a_obj_domain) {
        goto fail;
    }
    cJSON *a_obj_domain = cJSON_AddArrayToObject(item, "a_objDomain");
    if(a_obj_domain == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_domainListEntry;
    if (domain_get_list_v1_response_m_payload->a_obj_domain) {
    list_ForEach(a_obj_domainListEntry, domain_get_list_v1_response_m_payload->a_obj_domain) {
    cJSON *itemLocal = domain_list_element_convertToJSON(a_obj_domainListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_domain, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload_parseFromJSON(cJSON *domain_get_list_v1_response_m_payloadJSON){

    domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for domain_get_list_v1_response_m_payload->a_obj_domain
    list_t *a_obj_domainList = NULL;

    // domain_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(domain_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // domain_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(domain_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // domain_get_list_v1_response_m_payload->a_obj_domain
    cJSON *a_obj_domain = cJSON_GetObjectItemCaseSensitive(domain_get_list_v1_response_m_payloadJSON, "a_objDomain");
    if (!a_obj_domain) {
        goto end;
    }

    
    cJSON *a_obj_domain_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_domain)){
        goto end; //nonprimitive container
    }

    a_obj_domainList = list_createList();

    cJSON_ArrayForEach(a_obj_domain_local_nonprimitive,a_obj_domain )
    {
        if(!cJSON_IsObject(a_obj_domain_local_nonprimitive)){
            goto end;
        }
        domain_list_element_t *a_obj_domainItem = domain_list_element_parseFromJSON(a_obj_domain_local_nonprimitive);

        list_addElement(a_obj_domainList, a_obj_domainItem);
    }


    domain_get_list_v1_response_m_payload_local_var = domain_get_list_v1_response_m_payload_create (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_domainList
        );

    return domain_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_domainList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_domainList) {
            domain_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_domainList);
        a_obj_domainList = NULL;
    }
    return NULL;

}

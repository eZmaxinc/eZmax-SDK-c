#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "company_get_autocomplete_v2_response_m_payload.h"



company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_company
    ) {
    company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(company_get_autocomplete_v2_response_m_payload_t));
    if (!company_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    company_get_autocomplete_v2_response_m_payload_local_var->a_obj_company = a_obj_company;

    return company_get_autocomplete_v2_response_m_payload_local_var;
}


void company_get_autocomplete_v2_response_m_payload_free(company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload) {
    if(NULL == company_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (company_get_autocomplete_v2_response_m_payload->a_obj_company) {
        list_ForEach(listEntry, company_get_autocomplete_v2_response_m_payload->a_obj_company) {
            company_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(company_get_autocomplete_v2_response_m_payload->a_obj_company);
        company_get_autocomplete_v2_response_m_payload->a_obj_company = NULL;
    }
    free(company_get_autocomplete_v2_response_m_payload);
}

cJSON *company_get_autocomplete_v2_response_m_payload_convertToJSON(company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // company_get_autocomplete_v2_response_m_payload->a_obj_company
    if (!company_get_autocomplete_v2_response_m_payload->a_obj_company) {
        goto fail;
    }
    cJSON *a_obj_company = cJSON_AddArrayToObject(item, "a_objCompany");
    if(a_obj_company == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_companyListEntry;
    if (company_get_autocomplete_v2_response_m_payload->a_obj_company) {
    list_ForEach(a_obj_companyListEntry, company_get_autocomplete_v2_response_m_payload->a_obj_company) {
    cJSON *itemLocal = company_autocomplete_element_response_convertToJSON(a_obj_companyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_company, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *company_get_autocomplete_v2_response_m_payloadJSON){

    company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for company_get_autocomplete_v2_response_m_payload->a_obj_company
    list_t *a_obj_companyList = NULL;

    // company_get_autocomplete_v2_response_m_payload->a_obj_company
    cJSON *a_obj_company = cJSON_GetObjectItemCaseSensitive(company_get_autocomplete_v2_response_m_payloadJSON, "a_objCompany");
    if (!a_obj_company) {
        goto end;
    }

    
    cJSON *a_obj_company_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_company)){
        goto end; //nonprimitive container
    }

    a_obj_companyList = list_createList();

    cJSON_ArrayForEach(a_obj_company_local_nonprimitive,a_obj_company )
    {
        if(!cJSON_IsObject(a_obj_company_local_nonprimitive)){
            goto end;
        }
        company_autocomplete_element_response_t *a_obj_companyItem = company_autocomplete_element_response_parseFromJSON(a_obj_company_local_nonprimitive);

        list_addElement(a_obj_companyList, a_obj_companyItem);
    }


    company_get_autocomplete_v2_response_m_payload_local_var = company_get_autocomplete_v2_response_m_payload_create (
        a_obj_companyList
        );

    return company_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_companyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_companyList) {
            company_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_companyList);
        a_obj_companyList = NULL;
    }
    return NULL;

}

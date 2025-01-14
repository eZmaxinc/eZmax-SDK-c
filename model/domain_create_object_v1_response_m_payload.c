#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_create_object_v1_response_m_payload.h"



domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload_create(
    list_t *a_pki_domain_id
    ) {
    domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload_local_var = malloc(sizeof(domain_create_object_v1_response_m_payload_t));
    if (!domain_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    domain_create_object_v1_response_m_payload_local_var->a_pki_domain_id = a_pki_domain_id;

    return domain_create_object_v1_response_m_payload_local_var;
}


void domain_create_object_v1_response_m_payload_free(domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload) {
    if(NULL == domain_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (domain_create_object_v1_response_m_payload->a_pki_domain_id) {
        list_ForEach(listEntry, domain_create_object_v1_response_m_payload->a_pki_domain_id) {
            free(listEntry->data);
        }
        list_freeList(domain_create_object_v1_response_m_payload->a_pki_domain_id);
        domain_create_object_v1_response_m_payload->a_pki_domain_id = NULL;
    }
    free(domain_create_object_v1_response_m_payload);
}

cJSON *domain_create_object_v1_response_m_payload_convertToJSON(domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // domain_create_object_v1_response_m_payload->a_pki_domain_id
    if (!domain_create_object_v1_response_m_payload->a_pki_domain_id) {
        goto fail;
    }
    cJSON *a_pki_domain_id = cJSON_AddArrayToObject(item, "a_pkiDomainID");
    if(a_pki_domain_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_domain_idListEntry;
    list_ForEach(a_pki_domain_idListEntry, domain_create_object_v1_response_m_payload->a_pki_domain_id) {
    if(cJSON_AddNumberToObject(a_pki_domain_id, "", *(double *)a_pki_domain_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload_parseFromJSON(cJSON *domain_create_object_v1_response_m_payloadJSON){

    domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for domain_create_object_v1_response_m_payload->a_pki_domain_id
    list_t *a_pki_domain_idList = NULL;

    // domain_create_object_v1_response_m_payload->a_pki_domain_id
    cJSON *a_pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_create_object_v1_response_m_payloadJSON, "a_pkiDomainID");
    if (!a_pki_domain_id) {
        goto end;
    }

    
    cJSON *a_pki_domain_id_local = NULL;
    if(!cJSON_IsArray(a_pki_domain_id)) {
        goto end;//primitive container
    }
    a_pki_domain_idList = list_createList();

    cJSON_ArrayForEach(a_pki_domain_id_local, a_pki_domain_id)
    {
        if(!cJSON_IsNumber(a_pki_domain_id_local))
        {
            goto end;
        }
        double *a_pki_domain_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_domain_id_local_value)
        {
            goto end;
        }
        *a_pki_domain_id_local_value = a_pki_domain_id_local->valuedouble;
        list_addElement(a_pki_domain_idList , a_pki_domain_id_local_value);
    }


    domain_create_object_v1_response_m_payload_local_var = domain_create_object_v1_response_m_payload_create (
        a_pki_domain_idList
        );

    return domain_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_domain_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_domain_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_domain_idList);
        a_pki_domain_idList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_autocomplete_v1_response_all_of.h"



common_get_autocomplete_v1_response_all_of_t *common_get_autocomplete_v1_response_all_of_create(
    list_t *m_payload
    ) {
    common_get_autocomplete_v1_response_all_of_t *common_get_autocomplete_v1_response_all_of_local_var = malloc(sizeof(common_get_autocomplete_v1_response_all_of_t));
    if (!common_get_autocomplete_v1_response_all_of_local_var) {
        return NULL;
    }
    common_get_autocomplete_v1_response_all_of_local_var->m_payload = m_payload;

    return common_get_autocomplete_v1_response_all_of_local_var;
}


void common_get_autocomplete_v1_response_all_of_free(common_get_autocomplete_v1_response_all_of_t *common_get_autocomplete_v1_response_all_of) {
    if(NULL == common_get_autocomplete_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (common_get_autocomplete_v1_response_all_of->m_payload) {
        list_ForEach(listEntry, common_get_autocomplete_v1_response_all_of->m_payload) {
            custom_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(common_get_autocomplete_v1_response_all_of->m_payload);
        common_get_autocomplete_v1_response_all_of->m_payload = NULL;
    }
    free(common_get_autocomplete_v1_response_all_of);
}

cJSON *common_get_autocomplete_v1_response_all_of_convertToJSON(common_get_autocomplete_v1_response_all_of_t *common_get_autocomplete_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // common_get_autocomplete_v1_response_all_of->m_payload
    if (!common_get_autocomplete_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload = cJSON_AddArrayToObject(item, "mPayload");
    if(m_payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *m_payloadListEntry;
    if (common_get_autocomplete_v1_response_all_of->m_payload) {
    list_ForEach(m_payloadListEntry, common_get_autocomplete_v1_response_all_of->m_payload) {
    cJSON *itemLocal = custom_autocomplete_element_response_convertToJSON(m_payloadListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(m_payload, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_get_autocomplete_v1_response_all_of_t *common_get_autocomplete_v1_response_all_of_parseFromJSON(cJSON *common_get_autocomplete_v1_response_all_ofJSON){

    common_get_autocomplete_v1_response_all_of_t *common_get_autocomplete_v1_response_all_of_local_var = NULL;

    // define the local list for common_get_autocomplete_v1_response_all_of->m_payload
    list_t *m_payloadList = NULL;

    // common_get_autocomplete_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    cJSON *m_payload_local_nonprimitive = NULL;
    if(!cJSON_IsArray(m_payload)){
        goto end; //nonprimitive container
    }

    m_payloadList = list_createList();

    cJSON_ArrayForEach(m_payload_local_nonprimitive,m_payload )
    {
        if(!cJSON_IsObject(m_payload_local_nonprimitive)){
            goto end;
        }
        custom_autocomplete_element_response_t *m_payloadItem = custom_autocomplete_element_response_parseFromJSON(m_payload_local_nonprimitive);

        list_addElement(m_payloadList, m_payloadItem);
    }


    common_get_autocomplete_v1_response_all_of_local_var = common_get_autocomplete_v1_response_all_of_create (
        m_payloadList
        );

    return common_get_autocomplete_v1_response_all_of_local_var;
end:
    if (m_payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, m_payloadList) {
            custom_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(m_payloadList);
        m_payloadList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchiseoffice_get_autocomplete_v2_response_m_payload.h"



franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_franchiseoffice
    ) {
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(franchiseoffice_get_autocomplete_v2_response_m_payload_t));
    if (!franchiseoffice_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    franchiseoffice_get_autocomplete_v2_response_m_payload_local_var->a_obj_franchiseoffice = a_obj_franchiseoffice;

    return franchiseoffice_get_autocomplete_v2_response_m_payload_local_var;
}


void franchiseoffice_get_autocomplete_v2_response_m_payload_free(franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload) {
    if(NULL == franchiseoffice_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice) {
        list_ForEach(listEntry, franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice) {
            franchiseoffice_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice);
        franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice = NULL;
    }
    free(franchiseoffice_get_autocomplete_v2_response_m_payload);
}

cJSON *franchiseoffice_get_autocomplete_v2_response_m_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice
    if (!franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice) {
        goto fail;
    }
    cJSON *a_obj_franchiseoffice = cJSON_AddArrayToObject(item, "a_objFranchiseoffice");
    if(a_obj_franchiseoffice == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_franchiseofficeListEntry;
    if (franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice) {
    list_ForEach(a_obj_franchiseofficeListEntry, franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice) {
    cJSON *itemLocal = franchiseoffice_autocomplete_element_response_convertToJSON(a_obj_franchiseofficeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_franchiseoffice, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *franchiseoffice_get_autocomplete_v2_response_m_payloadJSON){

    franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice
    list_t *a_obj_franchiseofficeList = NULL;

    // franchiseoffice_get_autocomplete_v2_response_m_payload->a_obj_franchiseoffice
    cJSON *a_obj_franchiseoffice = cJSON_GetObjectItemCaseSensitive(franchiseoffice_get_autocomplete_v2_response_m_payloadJSON, "a_objFranchiseoffice");
    if (!a_obj_franchiseoffice) {
        goto end;
    }

    
    cJSON *a_obj_franchiseoffice_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_franchiseoffice)){
        goto end; //nonprimitive container
    }

    a_obj_franchiseofficeList = list_createList();

    cJSON_ArrayForEach(a_obj_franchiseoffice_local_nonprimitive,a_obj_franchiseoffice )
    {
        if(!cJSON_IsObject(a_obj_franchiseoffice_local_nonprimitive)){
            goto end;
        }
        franchiseoffice_autocomplete_element_response_t *a_obj_franchiseofficeItem = franchiseoffice_autocomplete_element_response_parseFromJSON(a_obj_franchiseoffice_local_nonprimitive);

        list_addElement(a_obj_franchiseofficeList, a_obj_franchiseofficeItem);
    }


    franchiseoffice_get_autocomplete_v2_response_m_payload_local_var = franchiseoffice_get_autocomplete_v2_response_m_payload_create (
        a_obj_franchiseofficeList
        );

    return franchiseoffice_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_franchiseofficeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_franchiseofficeList) {
            franchiseoffice_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_franchiseofficeList);
        a_obj_franchiseofficeList = NULL;
    }
    return NULL;

}

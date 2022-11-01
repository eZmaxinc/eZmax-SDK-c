#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisebroker_get_autocomplete_v2_response_m_payload.h"



franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_franchisebroker
    ) {
    franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(franchisebroker_get_autocomplete_v2_response_m_payload_t));
    if (!franchisebroker_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    franchisebroker_get_autocomplete_v2_response_m_payload_local_var->a_obj_franchisebroker = a_obj_franchisebroker;

    return franchisebroker_get_autocomplete_v2_response_m_payload_local_var;
}


void franchisebroker_get_autocomplete_v2_response_m_payload_free(franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload) {
    if(NULL == franchisebroker_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker) {
        list_ForEach(listEntry, franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker) {
            franchisebroker_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker);
        franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker = NULL;
    }
    free(franchisebroker_get_autocomplete_v2_response_m_payload);
}

cJSON *franchisebroker_get_autocomplete_v2_response_m_payload_convertToJSON(franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker
    if(franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker) {
    cJSON *a_obj_franchisebroker = cJSON_AddArrayToObject(item, "a_objFranchisebroker");
    if(a_obj_franchisebroker == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_franchisebrokerListEntry;
    if (franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker) {
    list_ForEach(a_obj_franchisebrokerListEntry, franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker) {
    cJSON *itemLocal = franchisebroker_autocomplete_element_response_convertToJSON(a_obj_franchisebrokerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_franchisebroker, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *franchisebroker_get_autocomplete_v2_response_m_payloadJSON){

    franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker
    list_t *a_obj_franchisebrokerList = NULL;

    // franchisebroker_get_autocomplete_v2_response_m_payload->a_obj_franchisebroker
    cJSON *a_obj_franchisebroker = cJSON_GetObjectItemCaseSensitive(franchisebroker_get_autocomplete_v2_response_m_payloadJSON, "a_objFranchisebroker");
    if (a_obj_franchisebroker) { 
    cJSON *a_obj_franchisebroker_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_franchisebroker)){
        goto end; //nonprimitive container
    }

    a_obj_franchisebrokerList = list_createList();

    cJSON_ArrayForEach(a_obj_franchisebroker_local_nonprimitive,a_obj_franchisebroker )
    {
        if(!cJSON_IsObject(a_obj_franchisebroker_local_nonprimitive)){
            goto end;
        }
        franchisebroker_autocomplete_element_response_t *a_obj_franchisebrokerItem = franchisebroker_autocomplete_element_response_parseFromJSON(a_obj_franchisebroker_local_nonprimitive);

        list_addElement(a_obj_franchisebrokerList, a_obj_franchisebrokerItem);
    }
    }


    franchisebroker_get_autocomplete_v2_response_m_payload_local_var = franchisebroker_get_autocomplete_v2_response_m_payload_create (
        a_obj_franchisebroker ? a_obj_franchisebrokerList : NULL
        );

    return franchisebroker_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_franchisebrokerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_franchisebrokerList) {
            franchisebroker_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_franchisebrokerList);
        a_obj_franchisebrokerList = NULL;
    }
    return NULL;

}

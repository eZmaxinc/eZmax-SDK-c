#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "clonehistory_get_list_v1_response_m_payload_all_of.h"



clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_clonehistory
    ) {
    clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(clonehistory_get_list_v1_response_m_payload_all_of_t));
    if (!clonehistory_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    clonehistory_get_list_v1_response_m_payload_all_of_local_var->a_obj_clonehistory = a_obj_clonehistory;

    return clonehistory_get_list_v1_response_m_payload_all_of_local_var;
}


void clonehistory_get_list_v1_response_m_payload_all_of_free(clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of) {
    if(NULL == clonehistory_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory) {
        list_ForEach(listEntry, clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory) {
            clonehistory_list_element_free(listEntry->data);
        }
        list_freeList(clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory);
        clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory = NULL;
    }
    free(clonehistory_get_list_v1_response_m_payload_all_of);
}

cJSON *clonehistory_get_list_v1_response_m_payload_all_of_convertToJSON(clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory
    if (!clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory) {
        goto fail;
    }
    cJSON *a_obj_clonehistory = cJSON_AddArrayToObject(item, "a_objClonehistory");
    if(a_obj_clonehistory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_clonehistoryListEntry;
    if (clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory) {
    list_ForEach(a_obj_clonehistoryListEntry, clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory) {
    cJSON *itemLocal = clonehistory_list_element_convertToJSON(a_obj_clonehistoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_clonehistory, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *clonehistory_get_list_v1_response_m_payload_all_ofJSON){

    clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory
    list_t *a_obj_clonehistoryList = NULL;

    // clonehistory_get_list_v1_response_m_payload_all_of->a_obj_clonehistory
    cJSON *a_obj_clonehistory = cJSON_GetObjectItemCaseSensitive(clonehistory_get_list_v1_response_m_payload_all_ofJSON, "a_objClonehistory");
    if (!a_obj_clonehistory) {
        goto end;
    }

    
    cJSON *a_obj_clonehistory_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_clonehistory)){
        goto end; //nonprimitive container
    }

    a_obj_clonehistoryList = list_createList();

    cJSON_ArrayForEach(a_obj_clonehistory_local_nonprimitive,a_obj_clonehistory )
    {
        if(!cJSON_IsObject(a_obj_clonehistory_local_nonprimitive)){
            goto end;
        }
        clonehistory_list_element_t *a_obj_clonehistoryItem = clonehistory_list_element_parseFromJSON(a_obj_clonehistory_local_nonprimitive);

        list_addElement(a_obj_clonehistoryList, a_obj_clonehistoryItem);
    }


    clonehistory_get_list_v1_response_m_payload_all_of_local_var = clonehistory_get_list_v1_response_m_payload_all_of_create (
        a_obj_clonehistoryList
        );

    return clonehistory_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_clonehistoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_clonehistoryList) {
            clonehistory_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_clonehistoryList);
        a_obj_clonehistoryList = NULL;
    }
    return NULL;

}

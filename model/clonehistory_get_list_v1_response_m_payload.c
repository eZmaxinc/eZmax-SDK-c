#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "clonehistory_get_list_v1_response_m_payload.h"



clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload_create(
    list_t *a_obj_clonehistory,
    int i_row_returned,
    int i_row_filtered
    ) {
    clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload_local_var = malloc(sizeof(clonehistory_get_list_v1_response_m_payload_t));
    if (!clonehistory_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    clonehistory_get_list_v1_response_m_payload_local_var->a_obj_clonehistory = a_obj_clonehistory;
    clonehistory_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    clonehistory_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return clonehistory_get_list_v1_response_m_payload_local_var;
}


void clonehistory_get_list_v1_response_m_payload_free(clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload) {
    if(NULL == clonehistory_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory) {
        list_ForEach(listEntry, clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory) {
            clonehistory_list_element_free(listEntry->data);
        }
        list_freeList(clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory);
        clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory = NULL;
    }
    free(clonehistory_get_list_v1_response_m_payload);
}

cJSON *clonehistory_get_list_v1_response_m_payload_convertToJSON(clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory
    if (!clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory) {
        goto fail;
    }
    cJSON *a_obj_clonehistory = cJSON_AddArrayToObject(item, "a_objClonehistory");
    if(a_obj_clonehistory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_clonehistoryListEntry;
    if (clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory) {
    list_ForEach(a_obj_clonehistoryListEntry, clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory) {
    cJSON *itemLocal = clonehistory_list_element_convertToJSON(a_obj_clonehistoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_clonehistory, itemLocal);
    }
    }


    // clonehistory_get_list_v1_response_m_payload->i_row_returned
    if (!clonehistory_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", clonehistory_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // clonehistory_get_list_v1_response_m_payload->i_row_filtered
    if (!clonehistory_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", clonehistory_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload_parseFromJSON(cJSON *clonehistory_get_list_v1_response_m_payloadJSON){

    clonehistory_get_list_v1_response_m_payload_t *clonehistory_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory
    list_t *a_obj_clonehistoryList = NULL;

    // clonehistory_get_list_v1_response_m_payload->a_obj_clonehistory
    cJSON *a_obj_clonehistory = cJSON_GetObjectItemCaseSensitive(clonehistory_get_list_v1_response_m_payloadJSON, "a_objClonehistory");
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

    // clonehistory_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(clonehistory_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // clonehistory_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(clonehistory_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    clonehistory_get_list_v1_response_m_payload_local_var = clonehistory_get_list_v1_response_m_payload_create (
        a_obj_clonehistoryList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return clonehistory_get_list_v1_response_m_payload_local_var;
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

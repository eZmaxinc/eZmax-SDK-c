#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sessionhistory_get_list_v1_response_m_payload.h"



sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload_create(
    list_t *a_obj_sessionhistory,
    int i_row_returned,
    int i_row_filtered
    ) {
    sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload_local_var = malloc(sizeof(sessionhistory_get_list_v1_response_m_payload_t));
    if (!sessionhistory_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    sessionhistory_get_list_v1_response_m_payload_local_var->a_obj_sessionhistory = a_obj_sessionhistory;
    sessionhistory_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    sessionhistory_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return sessionhistory_get_list_v1_response_m_payload_local_var;
}


void sessionhistory_get_list_v1_response_m_payload_free(sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload) {
    if(NULL == sessionhistory_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory) {
        list_ForEach(listEntry, sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory) {
            sessionhistory_list_element_free(listEntry->data);
        }
        list_freeList(sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory);
        sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory = NULL;
    }
    free(sessionhistory_get_list_v1_response_m_payload);
}

cJSON *sessionhistory_get_list_v1_response_m_payload_convertToJSON(sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory
    if (!sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory) {
        goto fail;
    }
    cJSON *a_obj_sessionhistory = cJSON_AddArrayToObject(item, "a_objSessionhistory");
    if(a_obj_sessionhistory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_sessionhistoryListEntry;
    if (sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory) {
    list_ForEach(a_obj_sessionhistoryListEntry, sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory) {
    cJSON *itemLocal = sessionhistory_list_element_convertToJSON(a_obj_sessionhistoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_sessionhistory, itemLocal);
    }
    }


    // sessionhistory_get_list_v1_response_m_payload->i_row_returned
    if (!sessionhistory_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", sessionhistory_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // sessionhistory_get_list_v1_response_m_payload->i_row_filtered
    if (!sessionhistory_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", sessionhistory_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload_parseFromJSON(cJSON *sessionhistory_get_list_v1_response_m_payloadJSON){

    sessionhistory_get_list_v1_response_m_payload_t *sessionhistory_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory
    list_t *a_obj_sessionhistoryList = NULL;

    // sessionhistory_get_list_v1_response_m_payload->a_obj_sessionhistory
    cJSON *a_obj_sessionhistory = cJSON_GetObjectItemCaseSensitive(sessionhistory_get_list_v1_response_m_payloadJSON, "a_objSessionhistory");
    if (!a_obj_sessionhistory) {
        goto end;
    }

    
    cJSON *a_obj_sessionhistory_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_sessionhistory)){
        goto end; //nonprimitive container
    }

    a_obj_sessionhistoryList = list_createList();

    cJSON_ArrayForEach(a_obj_sessionhistory_local_nonprimitive,a_obj_sessionhistory )
    {
        if(!cJSON_IsObject(a_obj_sessionhistory_local_nonprimitive)){
            goto end;
        }
        sessionhistory_list_element_t *a_obj_sessionhistoryItem = sessionhistory_list_element_parseFromJSON(a_obj_sessionhistory_local_nonprimitive);

        list_addElement(a_obj_sessionhistoryList, a_obj_sessionhistoryItem);
    }

    // sessionhistory_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(sessionhistory_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // sessionhistory_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(sessionhistory_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    sessionhistory_get_list_v1_response_m_payload_local_var = sessionhistory_get_list_v1_response_m_payload_create (
        a_obj_sessionhistoryList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return sessionhistory_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_sessionhistoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_sessionhistoryList) {
            sessionhistory_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_sessionhistoryList);
        a_obj_sessionhistoryList = NULL;
    }
    return NULL;

}

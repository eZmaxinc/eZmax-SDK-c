#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_get_list_v1_response_m_payload_all_of.h"



communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_communication
    ) {
    communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(communication_get_list_v1_response_m_payload_all_of_t));
    if (!communication_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    communication_get_list_v1_response_m_payload_all_of_local_var->a_obj_communication = a_obj_communication;

    return communication_get_list_v1_response_m_payload_all_of_local_var;
}


void communication_get_list_v1_response_m_payload_all_of_free(communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of) {
    if(NULL == communication_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_get_list_v1_response_m_payload_all_of->a_obj_communication) {
        list_ForEach(listEntry, communication_get_list_v1_response_m_payload_all_of->a_obj_communication) {
            communication_list_element_free(listEntry->data);
        }
        list_freeList(communication_get_list_v1_response_m_payload_all_of->a_obj_communication);
        communication_get_list_v1_response_m_payload_all_of->a_obj_communication = NULL;
    }
    free(communication_get_list_v1_response_m_payload_all_of);
}

cJSON *communication_get_list_v1_response_m_payload_all_of_convertToJSON(communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // communication_get_list_v1_response_m_payload_all_of->a_obj_communication
    if (!communication_get_list_v1_response_m_payload_all_of->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (communication_get_list_v1_response_m_payload_all_of->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, communication_get_list_v1_response_m_payload_all_of->a_obj_communication) {
    cJSON *itemLocal = communication_list_element_convertToJSON(a_obj_communicationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communication, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *communication_get_list_v1_response_m_payload_all_ofJSON){

    communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for communication_get_list_v1_response_m_payload_all_of->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // communication_get_list_v1_response_m_payload_all_of->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(communication_get_list_v1_response_m_payload_all_ofJSON, "a_objCommunication");
    if (!a_obj_communication) {
        goto end;
    }

    
    cJSON *a_obj_communication_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communication)){
        goto end; //nonprimitive container
    }

    a_obj_communicationList = list_createList();

    cJSON_ArrayForEach(a_obj_communication_local_nonprimitive,a_obj_communication )
    {
        if(!cJSON_IsObject(a_obj_communication_local_nonprimitive)){
            goto end;
        }
        communication_list_element_t *a_obj_communicationItem = communication_list_element_parseFromJSON(a_obj_communication_local_nonprimitive);

        list_addElement(a_obj_communicationList, a_obj_communicationItem);
    }


    communication_get_list_v1_response_m_payload_all_of_local_var = communication_get_list_v1_response_m_payload_all_of_create (
        a_obj_communicationList
        );

    return communication_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_communicationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationList) {
            communication_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationList);
        a_obj_communicationList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfer_get_communication_list_v1_response_m_payload.h"



electronicfundstransfer_get_communication_list_v1_response_m_payload_t *electronicfundstransfer_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    electronicfundstransfer_get_communication_list_v1_response_m_payload_t *electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(electronicfundstransfer_get_communication_list_v1_response_m_payload_t));
    if (!electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;

    return electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var;
}


void electronicfundstransfer_get_communication_list_v1_response_m_payload_free(electronicfundstransfer_get_communication_list_v1_response_m_payload_t *electronicfundstransfer_get_communication_list_v1_response_m_payload) {
    if(NULL == electronicfundstransfer_get_communication_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication);
        electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(electronicfundstransfer_get_communication_list_v1_response_m_payload);
}

cJSON *electronicfundstransfer_get_communication_list_v1_response_m_payload_convertToJSON(electronicfundstransfer_get_communication_list_v1_response_m_payload_t *electronicfundstransfer_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication) {
    cJSON *itemLocal = custom_communication_list_element_response_convertToJSON(a_obj_communicationListEntry->data);
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

electronicfundstransfer_get_communication_list_v1_response_m_payload_t *electronicfundstransfer_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfer_get_communication_list_v1_response_m_payloadJSON){

    electronicfundstransfer_get_communication_list_v1_response_m_payload_t *electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // electronicfundstransfer_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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
        custom_communication_list_element_response_t *a_obj_communicationItem = custom_communication_list_element_response_parseFromJSON(a_obj_communication_local_nonprimitive);

        list_addElement(a_obj_communicationList, a_obj_communicationItem);
    }


    electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var = electronicfundstransfer_get_communication_list_v1_response_m_payload_create (
        a_obj_communicationList
        );

    return electronicfundstransfer_get_communication_list_v1_response_m_payload_local_var;
end:
    if (a_obj_communicationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationList) {
            custom_communication_list_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationList);
        a_obj_communicationList = NULL;
    }
    return NULL;

}

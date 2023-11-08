#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_get_communication_list_v1_response_m_payload.h"



inscriptiontemp_get_communication_list_v1_response_m_payload_t *inscriptiontemp_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    inscriptiontemp_get_communication_list_v1_response_m_payload_t *inscriptiontemp_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(inscriptiontemp_get_communication_list_v1_response_m_payload_t));
    if (!inscriptiontemp_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptiontemp_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;

    return inscriptiontemp_get_communication_list_v1_response_m_payload_local_var;
}


void inscriptiontemp_get_communication_list_v1_response_m_payload_free(inscriptiontemp_get_communication_list_v1_response_m_payload_t *inscriptiontemp_get_communication_list_v1_response_m_payload) {
    if(NULL == inscriptiontemp_get_communication_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication);
        inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(inscriptiontemp_get_communication_list_v1_response_m_payload);
}

cJSON *inscriptiontemp_get_communication_list_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communication_list_v1_response_m_payload_t *inscriptiontemp_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

inscriptiontemp_get_communication_list_v1_response_m_payload_t *inscriptiontemp_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_communication_list_v1_response_m_payloadJSON){

    inscriptiontemp_get_communication_list_v1_response_m_payload_t *inscriptiontemp_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // inscriptiontemp_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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


    inscriptiontemp_get_communication_list_v1_response_m_payload_local_var = inscriptiontemp_get_communication_list_v1_response_m_payload_create (
        a_obj_communicationList
        );

    return inscriptiontemp_get_communication_list_v1_response_m_payload_local_var;
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

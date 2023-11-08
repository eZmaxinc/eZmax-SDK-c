#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_communication_list_v1_response_m_payload.h"



inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;

    return inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var;
}


void inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_free(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_communication_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication);
        inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_communication_list_v1_response_m_payloadJSON){

    inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // inscriptionnotauthenticated_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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


    inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var = inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_create (
        a_obj_communicationList
        );

    return inscriptionnotauthenticated_get_communication_list_v1_response_m_payload_local_var;
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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_communication_list_v1_response_m_payload.h"



static inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload_create_internal(
    list_t *a_obj_communication
    ) {
    inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(inscription_get_communication_list_v1_response_m_payload_t));
    if (!inscription_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscription_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;

    inscription_get_communication_list_v1_response_m_payload_local_var->_library_owned = 1;
    return inscription_get_communication_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    return inscription_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communication
        );
}

void inscription_get_communication_list_v1_response_m_payload_free(inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload) {
    if(NULL == inscription_get_communication_list_v1_response_m_payload){
        return ;
    }
    if(inscription_get_communication_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_get_communication_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, inscription_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(inscription_get_communication_list_v1_response_m_payload->a_obj_communication);
        inscription_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(inscription_get_communication_list_v1_response_m_payload);
}

cJSON *inscription_get_communication_list_v1_response_m_payload_convertToJSON(inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!inscription_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (inscription_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, inscription_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_communication_list_v1_response_m_payloadJSON){

    inscription_get_communication_list_v1_response_m_payload_t *inscription_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for inscription_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // inscription_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(inscription_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
    if (cJSON_IsNull(a_obj_communication)) {
        a_obj_communication = NULL;
    }
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


    inscription_get_communication_list_v1_response_m_payload_local_var = inscription_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communicationList
        );

    return inscription_get_communication_list_v1_response_m_payload_local_var;
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

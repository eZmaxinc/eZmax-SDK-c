#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disclosure_get_communication_list_v1_response_m_payload.h"



static disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload_create_internal(
    list_t *a_obj_communication
    ) {
    disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(disclosure_get_communication_list_v1_response_m_payload_t));
    if (!disclosure_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(disclosure_get_communication_list_v1_response_m_payload_local_var, 0, sizeof(disclosure_get_communication_list_v1_response_m_payload_t));
    disclosure_get_communication_list_v1_response_m_payload_local_var->_library_owned = 1;
    disclosure_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;
    return disclosure_get_communication_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    disclosure_get_communication_list_v1_response_m_payload_t *result = disclosure_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communication
        );
    if (!result) {
    }
    return result;
}

void disclosure_get_communication_list_v1_response_m_payload_free(disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload) {
    if(NULL == disclosure_get_communication_list_v1_response_m_payload){
        return ;
    }
    if(disclosure_get_communication_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disclosure_get_communication_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disclosure_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, disclosure_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(disclosure_get_communication_list_v1_response_m_payload->a_obj_communication);
        disclosure_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(disclosure_get_communication_list_v1_response_m_payload);
}

cJSON *disclosure_get_communication_list_v1_response_m_payload_convertToJSON(disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // disclosure_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!disclosure_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (disclosure_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, disclosure_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *disclosure_get_communication_list_v1_response_m_payloadJSON){

    disclosure_get_communication_list_v1_response_m_payload_t *disclosure_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for disclosure_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // disclosure_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(disclosure_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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



    disclosure_get_communication_list_v1_response_m_payload_local_var = disclosure_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communicationList
        );

    if (!disclosure_get_communication_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return disclosure_get_communication_list_v1_response_m_payload_local_var;
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

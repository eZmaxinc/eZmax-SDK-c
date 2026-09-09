#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustment_get_communication_list_v1_response_m_payload.h"



static adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload_create_internal(
    list_t *a_obj_communication
    ) {
    adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(adjustment_get_communication_list_v1_response_m_payload_t));
    if (!adjustment_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(adjustment_get_communication_list_v1_response_m_payload_local_var, 0, sizeof(adjustment_get_communication_list_v1_response_m_payload_t));
    adjustment_get_communication_list_v1_response_m_payload_local_var->_library_owned = 1;
    adjustment_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;
    return adjustment_get_communication_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    adjustment_get_communication_list_v1_response_m_payload_t *result = adjustment_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communication
        );
    if (!result) {
    }
    return result;
}

void adjustment_get_communication_list_v1_response_m_payload_free(adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload) {
    if(NULL == adjustment_get_communication_list_v1_response_m_payload){
        return ;
    }
    if(adjustment_get_communication_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustment_get_communication_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustment_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, adjustment_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(adjustment_get_communication_list_v1_response_m_payload->a_obj_communication);
        adjustment_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(adjustment_get_communication_list_v1_response_m_payload);
}

cJSON *adjustment_get_communication_list_v1_response_m_payload_convertToJSON(adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // adjustment_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!adjustment_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (adjustment_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, adjustment_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *adjustment_get_communication_list_v1_response_m_payloadJSON){

    adjustment_get_communication_list_v1_response_m_payload_t *adjustment_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for adjustment_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // adjustment_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(adjustment_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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



    adjustment_get_communication_list_v1_response_m_payload_local_var = adjustment_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communicationList
        );

    if (!adjustment_get_communication_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return adjustment_get_communication_list_v1_response_m_payload_local_var;
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

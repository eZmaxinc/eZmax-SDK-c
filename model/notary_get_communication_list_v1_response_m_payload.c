#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notary_get_communication_list_v1_response_m_payload.h"



static notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload_create_internal(
    list_t *a_obj_communication
    ) {
    notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(notary_get_communication_list_v1_response_m_payload_t));
    if (!notary_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(notary_get_communication_list_v1_response_m_payload_local_var, 0, sizeof(notary_get_communication_list_v1_response_m_payload_t));
    notary_get_communication_list_v1_response_m_payload_local_var->_library_owned = 1;
    notary_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;
    return notary_get_communication_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    notary_get_communication_list_v1_response_m_payload_t *result = notary_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communication
        );
    if (!result) {
    }
    return result;
}

void notary_get_communication_list_v1_response_m_payload_free(notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload) {
    if(NULL == notary_get_communication_list_v1_response_m_payload){
        return ;
    }
    if(notary_get_communication_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notary_get_communication_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notary_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, notary_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(notary_get_communication_list_v1_response_m_payload->a_obj_communication);
        notary_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(notary_get_communication_list_v1_response_m_payload);
}

cJSON *notary_get_communication_list_v1_response_m_payload_convertToJSON(notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notary_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!notary_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (notary_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, notary_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *notary_get_communication_list_v1_response_m_payloadJSON){

    notary_get_communication_list_v1_response_m_payload_t *notary_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for notary_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // notary_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(notary_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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



    notary_get_communication_list_v1_response_m_payload_local_var = notary_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communicationList
        );

    if (!notary_get_communication_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return notary_get_communication_list_v1_response_m_payload_local_var;
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

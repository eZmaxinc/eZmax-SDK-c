#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincome_get_communication_list_v1_response_m_payload.h"



static otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload_create_internal(
    list_t *a_obj_communication
    ) {
    otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(otherincome_get_communication_list_v1_response_m_payload_t));
    if (!otherincome_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    otherincome_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;

    otherincome_get_communication_list_v1_response_m_payload_local_var->_library_owned = 1;
    return otherincome_get_communication_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    return otherincome_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communication
        );
}

void otherincome_get_communication_list_v1_response_m_payload_free(otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload) {
    if(NULL == otherincome_get_communication_list_v1_response_m_payload){
        return ;
    }
    if(otherincome_get_communication_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincome_get_communication_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincome_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, otherincome_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(otherincome_get_communication_list_v1_response_m_payload->a_obj_communication);
        otherincome_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(otherincome_get_communication_list_v1_response_m_payload);
}

cJSON *otherincome_get_communication_list_v1_response_m_payload_convertToJSON(otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // otherincome_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!otherincome_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (otherincome_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, otherincome_get_communication_list_v1_response_m_payload->a_obj_communication) {
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

otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_communication_list_v1_response_m_payloadJSON){

    otherincome_get_communication_list_v1_response_m_payload_t *otherincome_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for otherincome_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // otherincome_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(otherincome_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
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


    otherincome_get_communication_list_v1_response_m_payload_local_var = otherincome_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communicationList
        );

    return otherincome_get_communication_list_v1_response_m_payload_local_var;
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

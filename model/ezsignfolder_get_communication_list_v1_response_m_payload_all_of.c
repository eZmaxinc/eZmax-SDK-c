#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_communication_list_v1_response_m_payload_all_of.h"



ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t *ezsignfolder_get_communication_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_communication
    ) {
    ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t *ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t));
    if (!ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var->a_obj_communication = a_obj_communication;

    return ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var;
}


void ezsignfolder_get_communication_list_v1_response_m_payload_all_of_free(ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t *ezsignfolder_get_communication_list_v1_response_m_payload_all_of) {
    if(NULL == ezsignfolder_get_communication_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication) {
        list_ForEach(listEntry, ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication);
        ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication = NULL;
    }
    free(ezsignfolder_get_communication_list_v1_response_m_payload_all_of);
}

cJSON *ezsignfolder_get_communication_list_v1_response_m_payload_all_of_convertToJSON(ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t *ezsignfolder_get_communication_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication
    if (!ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication) {
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

ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t *ezsignfolder_get_communication_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignfolder_get_communication_list_v1_response_m_payload_all_ofJSON){

    ezsignfolder_get_communication_list_v1_response_m_payload_all_of_t *ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // ezsignfolder_get_communication_list_v1_response_m_payload_all_of->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_communication_list_v1_response_m_payload_all_ofJSON, "a_objCommunication");
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


    ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var = ezsignfolder_get_communication_list_v1_response_m_payload_all_of_create (
        a_obj_communicationList
        );

    return ezsignfolder_get_communication_list_v1_response_m_payload_all_of_local_var;
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

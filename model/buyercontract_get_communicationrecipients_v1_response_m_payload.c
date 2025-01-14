#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_communicationrecipients_v1_response_m_payload.h"



buyercontract_get_communicationrecipients_v1_response_m_payload_t *buyercontract_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
    ) {
    buyercontract_get_communicationrecipients_v1_response_m_payload_t *buyercontract_get_communicationrecipients_v1_response_m_payload_local_var = malloc(sizeof(buyercontract_get_communicationrecipients_v1_response_m_payload_t));
    if (!buyercontract_get_communicationrecipients_v1_response_m_payload_local_var) {
        return NULL;
    }
    buyercontract_get_communicationrecipients_v1_response_m_payload_local_var->a_obj_communicationrecipientsgroup = a_obj_communicationrecipientsgroup;

    return buyercontract_get_communicationrecipients_v1_response_m_payload_local_var;
}


void buyercontract_get_communicationrecipients_v1_response_m_payload_free(buyercontract_get_communicationrecipients_v1_response_m_payload_t *buyercontract_get_communicationrecipients_v1_response_m_payload) {
    if(NULL == buyercontract_get_communicationrecipients_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        list_ForEach(listEntry, buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
            custom_communicationrecipientsgroup_response_free(listEntry->data);
        }
        list_freeList(buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup);
        buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup = NULL;
    }
    free(buyercontract_get_communicationrecipients_v1_response_m_payload);
}

cJSON *buyercontract_get_communicationrecipients_v1_response_m_payload_convertToJSON(buyercontract_get_communicationrecipients_v1_response_m_payload_t *buyercontract_get_communicationrecipients_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    if (!buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipientsgroup = cJSON_AddArrayToObject(item, "a_objCommunicationrecipientsgroup");
    if(a_obj_communicationrecipientsgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientsgroupListEntry;
    if (buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
    list_ForEach(a_obj_communicationrecipientsgroupListEntry, buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
    cJSON *itemLocal = custom_communicationrecipientsgroup_response_convertToJSON(a_obj_communicationrecipientsgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationrecipientsgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

buyercontract_get_communicationrecipients_v1_response_m_payload_t *buyercontract_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_get_communicationrecipients_v1_response_m_payloadJSON){

    buyercontract_get_communicationrecipients_v1_response_m_payload_t *buyercontract_get_communicationrecipients_v1_response_m_payload_local_var = NULL;

    // define the local list for buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    list_t *a_obj_communicationrecipientsgroupList = NULL;

    // buyercontract_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    cJSON *a_obj_communicationrecipientsgroup = cJSON_GetObjectItemCaseSensitive(buyercontract_get_communicationrecipients_v1_response_m_payloadJSON, "a_objCommunicationrecipientsgroup");
    if (!a_obj_communicationrecipientsgroup) {
        goto end;
    }

    
    cJSON *a_obj_communicationrecipientsgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationrecipientsgroup)){
        goto end; //nonprimitive container
    }

    a_obj_communicationrecipientsgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationrecipientsgroup_local_nonprimitive,a_obj_communicationrecipientsgroup )
    {
        if(!cJSON_IsObject(a_obj_communicationrecipientsgroup_local_nonprimitive)){
            goto end;
        }
        custom_communicationrecipientsgroup_response_t *a_obj_communicationrecipientsgroupItem = custom_communicationrecipientsgroup_response_parseFromJSON(a_obj_communicationrecipientsgroup_local_nonprimitive);

        list_addElement(a_obj_communicationrecipientsgroupList, a_obj_communicationrecipientsgroupItem);
    }


    buyercontract_get_communicationrecipients_v1_response_m_payload_local_var = buyercontract_get_communicationrecipients_v1_response_m_payload_create (
        a_obj_communicationrecipientsgroupList
        );

    return buyercontract_get_communicationrecipients_v1_response_m_payload_local_var;
end:
    if (a_obj_communicationrecipientsgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationrecipientsgroupList) {
            custom_communicationrecipientsgroup_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationrecipientsgroupList);
        a_obj_communicationrecipientsgroupList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "broker_get_communicationrecipients_v1_response_m_payload.h"



static broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationrecipientsgroup
    ) {
    broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload_local_var = malloc(sizeof(broker_get_communicationrecipients_v1_response_m_payload_t));
    if (!broker_get_communicationrecipients_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(broker_get_communicationrecipients_v1_response_m_payload_local_var, 0, sizeof(broker_get_communicationrecipients_v1_response_m_payload_t));
    broker_get_communicationrecipients_v1_response_m_payload_local_var->_library_owned = 1;
    broker_get_communicationrecipients_v1_response_m_payload_local_var->a_obj_communicationrecipientsgroup = a_obj_communicationrecipientsgroup;
    return broker_get_communicationrecipients_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
    ) {
    broker_get_communicationrecipients_v1_response_m_payload_t *result = broker_get_communicationrecipients_v1_response_m_payload_create_internal (
        a_obj_communicationrecipientsgroup
        );
    if (!result) {
    }
    return result;
}

void broker_get_communicationrecipients_v1_response_m_payload_free(broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload) {
    if(NULL == broker_get_communicationrecipients_v1_response_m_payload){
        return ;
    }
    if(broker_get_communicationrecipients_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "broker_get_communicationrecipients_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        list_ForEach(listEntry, broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
            custom_communicationrecipientsgroup_response_free(listEntry->data);
        }
        list_freeList(broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup);
        broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup = NULL;
    }
    free(broker_get_communicationrecipients_v1_response_m_payload);
}

cJSON *broker_get_communicationrecipients_v1_response_m_payload_convertToJSON(broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    if (!broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipientsgroup = cJSON_AddArrayToObject(item, "a_objCommunicationrecipientsgroup");
    if(a_obj_communicationrecipientsgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientsgroupListEntry;
    if (broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
    list_ForEach(a_obj_communicationrecipientsgroupListEntry, broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
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

broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *broker_get_communicationrecipients_v1_response_m_payloadJSON){

    broker_get_communicationrecipients_v1_response_m_payload_t *broker_get_communicationrecipients_v1_response_m_payload_local_var = NULL;

    // define the local list for broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    list_t *a_obj_communicationrecipientsgroupList = NULL;

    // broker_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    cJSON *a_obj_communicationrecipientsgroup = cJSON_GetObjectItemCaseSensitive(broker_get_communicationrecipients_v1_response_m_payloadJSON, "a_objCommunicationrecipientsgroup");
    if (cJSON_IsNull(a_obj_communicationrecipientsgroup)) {
        a_obj_communicationrecipientsgroup = NULL;
    }
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



    broker_get_communicationrecipients_v1_response_m_payload_local_var = broker_get_communicationrecipients_v1_response_m_payload_create_internal (
        a_obj_communicationrecipientsgroupList
        );

    if (!broker_get_communicationrecipients_v1_response_m_payload_local_var) {
        goto end;
    }

    return broker_get_communicationrecipients_v1_response_m_payload_local_var;
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

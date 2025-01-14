#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload.h"



inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
    ) {
    inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var->a_obj_communicationrecipientsgroup = a_obj_communicationrecipientsgroup;

    return inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var;
}


void inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_free(inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        list_ForEach(listEntry, inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
            custom_communicationrecipientsgroup_response_free(listEntry->data);
        }
        list_freeList(inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup);
        inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup = NULL;
    }
    free(inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    if (!inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipientsgroup = cJSON_AddArrayToObject(item, "a_objCommunicationrecipientsgroup");
    if(a_obj_communicationrecipientsgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientsgroupListEntry;
    if (inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
    list_ForEach(a_obj_communicationrecipientsgroupListEntry, inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
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

inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payloadJSON){

    inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_t *inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    list_t *a_obj_communicationrecipientsgroupList = NULL;

    // inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    cJSON *a_obj_communicationrecipientsgroup = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payloadJSON, "a_objCommunicationrecipientsgroup");
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


    inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var = inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_create (
        a_obj_communicationrecipientsgroupList
        );

    return inscriptionnotauthenticated_get_communicationrecipients_v1_response_m_payload_local_var;
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

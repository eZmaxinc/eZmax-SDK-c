#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_get_communicationrecipients_v1_response_m_payload.h"



static inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationrecipientsgroup
    ) {
    inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var = malloc(sizeof(inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t));
    if (!inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var->a_obj_communicationrecipientsgroup = a_obj_communicationrecipientsgroup;

    inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var->_library_owned = 1;
    return inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
    ) {
    return inscriptiontemp_get_communicationrecipients_v1_response_m_payload_create_internal (
        a_obj_communicationrecipientsgroup
        );
}

void inscriptiontemp_get_communicationrecipients_v1_response_m_payload_free(inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload) {
    if(NULL == inscriptiontemp_get_communicationrecipients_v1_response_m_payload){
        return ;
    }
    if(inscriptiontemp_get_communicationrecipients_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontemp_get_communicationrecipients_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        list_ForEach(listEntry, inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
            custom_communicationrecipientsgroup_response_free(listEntry->data);
        }
        list_freeList(inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup);
        inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup = NULL;
    }
    free(inscriptiontemp_get_communicationrecipients_v1_response_m_payload);
}

cJSON *inscriptiontemp_get_communicationrecipients_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    if (!inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
        goto fail;
    }
    cJSON *a_obj_communicationrecipientsgroup = cJSON_AddArrayToObject(item, "a_objCommunicationrecipientsgroup");
    if(a_obj_communicationrecipientsgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationrecipientsgroupListEntry;
    if (inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
    list_ForEach(a_obj_communicationrecipientsgroupListEntry, inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup) {
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

inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_communicationrecipients_v1_response_m_payloadJSON){

    inscriptiontemp_get_communicationrecipients_v1_response_m_payload_t *inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    list_t *a_obj_communicationrecipientsgroupList = NULL;

    // inscriptiontemp_get_communicationrecipients_v1_response_m_payload->a_obj_communicationrecipientsgroup
    cJSON *a_obj_communicationrecipientsgroup = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_communicationrecipients_v1_response_m_payloadJSON, "a_objCommunicationrecipientsgroup");
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


    inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var = inscriptiontemp_get_communicationrecipients_v1_response_m_payload_create_internal (
        a_obj_communicationrecipientsgroupList
        );

    return inscriptiontemp_get_communicationrecipients_v1_response_m_payload_local_var;
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

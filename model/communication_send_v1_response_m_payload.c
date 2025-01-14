#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_send_v1_response_m_payload.h"



communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload_create(
    list_t *a_pki_communication_id
    ) {
    communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload_local_var = malloc(sizeof(communication_send_v1_response_m_payload_t));
    if (!communication_send_v1_response_m_payload_local_var) {
        return NULL;
    }
    communication_send_v1_response_m_payload_local_var->a_pki_communication_id = a_pki_communication_id;

    return communication_send_v1_response_m_payload_local_var;
}


void communication_send_v1_response_m_payload_free(communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload) {
    if(NULL == communication_send_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_send_v1_response_m_payload->a_pki_communication_id) {
        list_ForEach(listEntry, communication_send_v1_response_m_payload->a_pki_communication_id) {
            free(listEntry->data);
        }
        list_freeList(communication_send_v1_response_m_payload->a_pki_communication_id);
        communication_send_v1_response_m_payload->a_pki_communication_id = NULL;
    }
    free(communication_send_v1_response_m_payload);
}

cJSON *communication_send_v1_response_m_payload_convertToJSON(communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // communication_send_v1_response_m_payload->a_pki_communication_id
    if (!communication_send_v1_response_m_payload->a_pki_communication_id) {
        goto fail;
    }
    cJSON *a_pki_communication_id = cJSON_AddArrayToObject(item, "a_pkiCommunicationID");
    if(a_pki_communication_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_communication_idListEntry;
    list_ForEach(a_pki_communication_idListEntry, communication_send_v1_response_m_payload->a_pki_communication_id) {
    if(cJSON_AddNumberToObject(a_pki_communication_id, "", *(double *)a_pki_communication_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload_parseFromJSON(cJSON *communication_send_v1_response_m_payloadJSON){

    communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload_local_var = NULL;

    // define the local list for communication_send_v1_response_m_payload->a_pki_communication_id
    list_t *a_pki_communication_idList = NULL;

    // communication_send_v1_response_m_payload->a_pki_communication_id
    cJSON *a_pki_communication_id = cJSON_GetObjectItemCaseSensitive(communication_send_v1_response_m_payloadJSON, "a_pkiCommunicationID");
    if (!a_pki_communication_id) {
        goto end;
    }

    
    cJSON *a_pki_communication_id_local = NULL;
    if(!cJSON_IsArray(a_pki_communication_id)) {
        goto end;//primitive container
    }
    a_pki_communication_idList = list_createList();

    cJSON_ArrayForEach(a_pki_communication_id_local, a_pki_communication_id)
    {
        if(!cJSON_IsNumber(a_pki_communication_id_local))
        {
            goto end;
        }
        double *a_pki_communication_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_communication_id_local_value)
        {
            goto end;
        }
        *a_pki_communication_id_local_value = a_pki_communication_id_local->valuedouble;
        list_addElement(a_pki_communication_idList , a_pki_communication_id_local_value);
    }


    communication_send_v1_response_m_payload_local_var = communication_send_v1_response_m_payload_create (
        a_pki_communication_idList
        );

    return communication_send_v1_response_m_payload_local_var;
end:
    if (a_pki_communication_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_communication_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_communication_idList);
        a_pki_communication_idList = NULL;
    }
    return NULL;

}

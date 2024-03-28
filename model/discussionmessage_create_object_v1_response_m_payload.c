#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmessage_create_object_v1_response_m_payload.h"



discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload_create(
    list_t *a_pki_discussionmessage_id
    ) {
    discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload_local_var = malloc(sizeof(discussionmessage_create_object_v1_response_m_payload_t));
    if (!discussionmessage_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    discussionmessage_create_object_v1_response_m_payload_local_var->a_pki_discussionmessage_id = a_pki_discussionmessage_id;

    return discussionmessage_create_object_v1_response_m_payload_local_var;
}


void discussionmessage_create_object_v1_response_m_payload_free(discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload) {
    if(NULL == discussionmessage_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id) {
        list_ForEach(listEntry, discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id) {
            free(listEntry->data);
        }
        list_freeList(discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id);
        discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id = NULL;
    }
    free(discussionmessage_create_object_v1_response_m_payload);
}

cJSON *discussionmessage_create_object_v1_response_m_payload_convertToJSON(discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id
    if (!discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id) {
        goto fail;
    }
    cJSON *a_pki_discussionmessage_id = cJSON_AddArrayToObject(item, "a_pkiDiscussionmessageID");
    if(a_pki_discussionmessage_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_discussionmessage_idListEntry;
    list_ForEach(a_pki_discussionmessage_idListEntry, discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id) {
    if(cJSON_AddNumberToObject(a_pki_discussionmessage_id, "", *(double *)a_pki_discussionmessage_idListEntry->data) == NULL)
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

discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload_parseFromJSON(cJSON *discussionmessage_create_object_v1_response_m_payloadJSON){

    discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id
    list_t *a_pki_discussionmessage_idList = NULL;

    // discussionmessage_create_object_v1_response_m_payload->a_pki_discussionmessage_id
    cJSON *a_pki_discussionmessage_id = cJSON_GetObjectItemCaseSensitive(discussionmessage_create_object_v1_response_m_payloadJSON, "a_pkiDiscussionmessageID");
    if (!a_pki_discussionmessage_id) {
        goto end;
    }

    
    cJSON *a_pki_discussionmessage_id_local = NULL;
    if(!cJSON_IsArray(a_pki_discussionmessage_id)) {
        goto end;//primitive container
    }
    a_pki_discussionmessage_idList = list_createList();

    cJSON_ArrayForEach(a_pki_discussionmessage_id_local, a_pki_discussionmessage_id)
    {
        if(!cJSON_IsNumber(a_pki_discussionmessage_id_local))
        {
            goto end;
        }
        double *a_pki_discussionmessage_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_discussionmessage_id_local_value)
        {
            goto end;
        }
        *a_pki_discussionmessage_id_local_value = a_pki_discussionmessage_id_local->valuedouble;
        list_addElement(a_pki_discussionmessage_idList , a_pki_discussionmessage_id_local_value);
    }


    discussionmessage_create_object_v1_response_m_payload_local_var = discussionmessage_create_object_v1_response_m_payload_create (
        a_pki_discussionmessage_idList
        );

    return discussionmessage_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_discussionmessage_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_discussionmessage_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_discussionmessage_idList);
        a_pki_discussionmessage_idList = NULL;
    }
    return NULL;

}
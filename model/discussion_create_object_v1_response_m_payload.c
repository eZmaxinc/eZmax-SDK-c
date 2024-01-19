#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_create_object_v1_response_m_payload.h"



discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload_create(
    list_t *a_pki_discussion_id
    ) {
    discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload_local_var = malloc(sizeof(discussion_create_object_v1_response_m_payload_t));
    if (!discussion_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    discussion_create_object_v1_response_m_payload_local_var->a_pki_discussion_id = a_pki_discussion_id;

    return discussion_create_object_v1_response_m_payload_local_var;
}


void discussion_create_object_v1_response_m_payload_free(discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload) {
    if(NULL == discussion_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_create_object_v1_response_m_payload->a_pki_discussion_id) {
        list_ForEach(listEntry, discussion_create_object_v1_response_m_payload->a_pki_discussion_id) {
            free(listEntry->data);
        }
        list_freeList(discussion_create_object_v1_response_m_payload->a_pki_discussion_id);
        discussion_create_object_v1_response_m_payload->a_pki_discussion_id = NULL;
    }
    free(discussion_create_object_v1_response_m_payload);
}

cJSON *discussion_create_object_v1_response_m_payload_convertToJSON(discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // discussion_create_object_v1_response_m_payload->a_pki_discussion_id
    if (!discussion_create_object_v1_response_m_payload->a_pki_discussion_id) {
        goto fail;
    }
    cJSON *a_pki_discussion_id = cJSON_AddArrayToObject(item, "a_pkiDiscussionID");
    if(a_pki_discussion_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_discussion_idListEntry;
    list_ForEach(a_pki_discussion_idListEntry, discussion_create_object_v1_response_m_payload->a_pki_discussion_id) {
    if(cJSON_AddNumberToObject(a_pki_discussion_id, "", *(double *)a_pki_discussion_idListEntry->data) == NULL)
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

discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload_parseFromJSON(cJSON *discussion_create_object_v1_response_m_payloadJSON){

    discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for discussion_create_object_v1_response_m_payload->a_pki_discussion_id
    list_t *a_pki_discussion_idList = NULL;

    // discussion_create_object_v1_response_m_payload->a_pki_discussion_id
    cJSON *a_pki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussion_create_object_v1_response_m_payloadJSON, "a_pkiDiscussionID");
    if (!a_pki_discussion_id) {
        goto end;
    }

    
    cJSON *a_pki_discussion_id_local = NULL;
    if(!cJSON_IsArray(a_pki_discussion_id)) {
        goto end;//primitive container
    }
    a_pki_discussion_idList = list_createList();

    cJSON_ArrayForEach(a_pki_discussion_id_local, a_pki_discussion_id)
    {
        if(!cJSON_IsNumber(a_pki_discussion_id_local))
        {
            goto end;
        }
        double *a_pki_discussion_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_discussion_id_local_value)
        {
            goto end;
        }
        *a_pki_discussion_id_local_value = a_pki_discussion_id_local->valuedouble;
        list_addElement(a_pki_discussion_idList , a_pki_discussion_id_local_value);
    }


    discussion_create_object_v1_response_m_payload_local_var = discussion_create_object_v1_response_m_payload_create (
        a_pki_discussion_idList
        );

    return discussion_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_discussion_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_discussion_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_discussion_idList);
        a_pki_discussion_idList = NULL;
    }
    return NULL;

}

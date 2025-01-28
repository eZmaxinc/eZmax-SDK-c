#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_create_object_v1_response_m_payload.h"



static discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_discussionmembership_id
    ) {
    discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_local_var = malloc(sizeof(discussionmembership_create_object_v1_response_m_payload_t));
    if (!discussionmembership_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    discussionmembership_create_object_v1_response_m_payload_local_var->a_pki_discussionmembership_id = a_pki_discussionmembership_id;

    discussionmembership_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return discussionmembership_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_discussionmembership_id
    ) {
    return discussionmembership_create_object_v1_response_m_payload_create_internal (
        a_pki_discussionmembership_id
        );
}

void discussionmembership_create_object_v1_response_m_payload_free(discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload) {
    if(NULL == discussionmembership_create_object_v1_response_m_payload){
        return ;
    }
    if(discussionmembership_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmembership_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id) {
        list_ForEach(listEntry, discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id) {
            free(listEntry->data);
        }
        list_freeList(discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id);
        discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id = NULL;
    }
    free(discussionmembership_create_object_v1_response_m_payload);
}

cJSON *discussionmembership_create_object_v1_response_m_payload_convertToJSON(discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id
    if (!discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id) {
        goto fail;
    }
    cJSON *a_pki_discussionmembership_id = cJSON_AddArrayToObject(item, "a_pkiDiscussionmembershipID");
    if(a_pki_discussionmembership_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_discussionmembership_idListEntry;
    list_ForEach(a_pki_discussionmembership_idListEntry, discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id) {
    if(cJSON_AddNumberToObject(a_pki_discussionmembership_id, "", *(double *)a_pki_discussionmembership_idListEntry->data) == NULL)
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

discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *discussionmembership_create_object_v1_response_m_payloadJSON){

    discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id
    list_t *a_pki_discussionmembership_idList = NULL;

    // discussionmembership_create_object_v1_response_m_payload->a_pki_discussionmembership_id
    cJSON *a_pki_discussionmembership_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_create_object_v1_response_m_payloadJSON, "a_pkiDiscussionmembershipID");
    if (cJSON_IsNull(a_pki_discussionmembership_id)) {
        a_pki_discussionmembership_id = NULL;
    }
    if (!a_pki_discussionmembership_id) {
        goto end;
    }

    
    cJSON *a_pki_discussionmembership_id_local = NULL;
    if(!cJSON_IsArray(a_pki_discussionmembership_id)) {
        goto end;//primitive container
    }
    a_pki_discussionmembership_idList = list_createList();

    cJSON_ArrayForEach(a_pki_discussionmembership_id_local, a_pki_discussionmembership_id)
    {
        if(!cJSON_IsNumber(a_pki_discussionmembership_id_local))
        {
            goto end;
        }
        double *a_pki_discussionmembership_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_discussionmembership_id_local_value)
        {
            goto end;
        }
        *a_pki_discussionmembership_id_local_value = a_pki_discussionmembership_id_local->valuedouble;
        list_addElement(a_pki_discussionmembership_idList , a_pki_discussionmembership_id_local_value);
    }


    discussionmembership_create_object_v1_response_m_payload_local_var = discussionmembership_create_object_v1_response_m_payload_create_internal (
        a_pki_discussionmembership_idList
        );

    return discussionmembership_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_discussionmembership_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_discussionmembership_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_discussionmembership_idList);
        a_pki_discussionmembership_idList = NULL;
    }
    return NULL;

}

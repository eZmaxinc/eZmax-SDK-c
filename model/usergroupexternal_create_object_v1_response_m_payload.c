#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_create_object_v1_response_m_payload.h"



static usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_usergroupexternal_id
    ) {
    usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_local_var = malloc(sizeof(usergroupexternal_create_object_v1_response_m_payload_t));
    if (!usergroupexternal_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroupexternal_create_object_v1_response_m_payload_local_var->a_pki_usergroupexternal_id = a_pki_usergroupexternal_id;

    usergroupexternal_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return usergroupexternal_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroupexternal_id
    ) {
    return usergroupexternal_create_object_v1_response_m_payload_create_internal (
        a_pki_usergroupexternal_id
        );
}

void usergroupexternal_create_object_v1_response_m_payload_free(usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload) {
    if(NULL == usergroupexternal_create_object_v1_response_m_payload){
        return ;
    }
    if(usergroupexternal_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id) {
        list_ForEach(listEntry, usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id) {
            free(listEntry->data);
        }
        list_freeList(usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id);
        usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id = NULL;
    }
    free(usergroupexternal_create_object_v1_response_m_payload);
}

cJSON *usergroupexternal_create_object_v1_response_m_payload_convertToJSON(usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id
    if (!usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id) {
        goto fail;
    }
    cJSON *a_pki_usergroupexternal_id = cJSON_AddArrayToObject(item, "a_pkiUsergroupexternalID");
    if(a_pki_usergroupexternal_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_usergroupexternal_idListEntry;
    list_ForEach(a_pki_usergroupexternal_idListEntry, usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(a_pki_usergroupexternal_id, "", *(double *)a_pki_usergroupexternal_idListEntry->data) == NULL)
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

usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroupexternal_create_object_v1_response_m_payloadJSON){

    usergroupexternal_create_object_v1_response_m_payload_t *usergroupexternal_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id
    list_t *a_pki_usergroupexternal_idList = NULL;

    // usergroupexternal_create_object_v1_response_m_payload->a_pki_usergroupexternal_id
    cJSON *a_pki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupexternal_create_object_v1_response_m_payloadJSON, "a_pkiUsergroupexternalID");
    if (cJSON_IsNull(a_pki_usergroupexternal_id)) {
        a_pki_usergroupexternal_id = NULL;
    }
    if (!a_pki_usergroupexternal_id) {
        goto end;
    }

    
    cJSON *a_pki_usergroupexternal_id_local = NULL;
    if(!cJSON_IsArray(a_pki_usergroupexternal_id)) {
        goto end;//primitive container
    }
    a_pki_usergroupexternal_idList = list_createList();

    cJSON_ArrayForEach(a_pki_usergroupexternal_id_local, a_pki_usergroupexternal_id)
    {
        if(!cJSON_IsNumber(a_pki_usergroupexternal_id_local))
        {
            goto end;
        }
        double *a_pki_usergroupexternal_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_usergroupexternal_id_local_value)
        {
            goto end;
        }
        *a_pki_usergroupexternal_id_local_value = a_pki_usergroupexternal_id_local->valuedouble;
        list_addElement(a_pki_usergroupexternal_idList , a_pki_usergroupexternal_id_local_value);
    }


    usergroupexternal_create_object_v1_response_m_payload_local_var = usergroupexternal_create_object_v1_response_m_payload_create_internal (
        a_pki_usergroupexternal_idList
        );

    return usergroupexternal_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_usergroupexternal_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_usergroupexternal_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_usergroupexternal_idList);
        a_pki_usergroupexternal_idList = NULL;
    }
    return NULL;

}

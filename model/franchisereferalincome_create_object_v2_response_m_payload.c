#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisereferalincome_create_object_v2_response_m_payload.h"



franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload_create(
    list_t *a_pki_franchisereferalincome_id
    ) {
    franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload_local_var = malloc(sizeof(franchisereferalincome_create_object_v2_response_m_payload_t));
    if (!franchisereferalincome_create_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    franchisereferalincome_create_object_v2_response_m_payload_local_var->a_pki_franchisereferalincome_id = a_pki_franchisereferalincome_id;

    return franchisereferalincome_create_object_v2_response_m_payload_local_var;
}


void franchisereferalincome_create_object_v2_response_m_payload_free(franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload) {
    if(NULL == franchisereferalincome_create_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id) {
        list_ForEach(listEntry, franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id) {
            free(listEntry->data);
        }
        list_freeList(franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id);
        franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id = NULL;
    }
    free(franchisereferalincome_create_object_v2_response_m_payload);
}

cJSON *franchisereferalincome_create_object_v2_response_m_payload_convertToJSON(franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id
    if (!franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id) {
        goto fail;
    }
    cJSON *a_pki_franchisereferalincome_id = cJSON_AddArrayToObject(item, "a_pkiFranchisereferalincomeID");
    if(a_pki_franchisereferalincome_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_franchisereferalincome_idListEntry;
    list_ForEach(a_pki_franchisereferalincome_idListEntry, franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id) {
    if(cJSON_AddNumberToObject(a_pki_franchisereferalincome_id, "", *(double *)a_pki_franchisereferalincome_idListEntry->data) == NULL)
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

franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload_parseFromJSON(cJSON *franchisereferalincome_create_object_v2_response_m_payloadJSON){

    franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload_local_var = NULL;

    // define the local list for franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id
    list_t *a_pki_franchisereferalincome_idList = NULL;

    // franchisereferalincome_create_object_v2_response_m_payload->a_pki_franchisereferalincome_id
    cJSON *a_pki_franchisereferalincome_id = cJSON_GetObjectItemCaseSensitive(franchisereferalincome_create_object_v2_response_m_payloadJSON, "a_pkiFranchisereferalincomeID");
    if (!a_pki_franchisereferalincome_id) {
        goto end;
    }

    
    cJSON *a_pki_franchisereferalincome_id_local = NULL;
    if(!cJSON_IsArray(a_pki_franchisereferalincome_id)) {
        goto end;//primitive container
    }
    a_pki_franchisereferalincome_idList = list_createList();

    cJSON_ArrayForEach(a_pki_franchisereferalincome_id_local, a_pki_franchisereferalincome_id)
    {
        if(!cJSON_IsNumber(a_pki_franchisereferalincome_id_local))
        {
            goto end;
        }
        double *a_pki_franchisereferalincome_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_franchisereferalincome_id_local_value)
        {
            goto end;
        }
        *a_pki_franchisereferalincome_id_local_value = a_pki_franchisereferalincome_id_local->valuedouble;
        list_addElement(a_pki_franchisereferalincome_idList , a_pki_franchisereferalincome_id_local_value);
    }


    franchisereferalincome_create_object_v2_response_m_payload_local_var = franchisereferalincome_create_object_v2_response_m_payload_create (
        a_pki_franchisereferalincome_idList
        );

    return franchisereferalincome_create_object_v2_response_m_payload_local_var;
end:
    if (a_pki_franchisereferalincome_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_franchisereferalincome_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_franchisereferalincome_idList);
        a_pki_franchisereferalincome_idList = NULL;
    }
    return NULL;

}

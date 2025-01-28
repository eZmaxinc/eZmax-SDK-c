#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_create_object_v1_response_m_payload.h"



static subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_subnet_id
    ) {
    subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_local_var = malloc(sizeof(subnet_create_object_v1_response_m_payload_t));
    if (!subnet_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    subnet_create_object_v1_response_m_payload_local_var->a_pki_subnet_id = a_pki_subnet_id;

    subnet_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return subnet_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_create(
    list_t *a_pki_subnet_id
    ) {
    return subnet_create_object_v1_response_m_payload_create_internal (
        a_pki_subnet_id
        );
}

void subnet_create_object_v1_response_m_payload_free(subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload) {
    if(NULL == subnet_create_object_v1_response_m_payload){
        return ;
    }
    if(subnet_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subnet_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_create_object_v1_response_m_payload->a_pki_subnet_id) {
        list_ForEach(listEntry, subnet_create_object_v1_response_m_payload->a_pki_subnet_id) {
            free(listEntry->data);
        }
        list_freeList(subnet_create_object_v1_response_m_payload->a_pki_subnet_id);
        subnet_create_object_v1_response_m_payload->a_pki_subnet_id = NULL;
    }
    free(subnet_create_object_v1_response_m_payload);
}

cJSON *subnet_create_object_v1_response_m_payload_convertToJSON(subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // subnet_create_object_v1_response_m_payload->a_pki_subnet_id
    if (!subnet_create_object_v1_response_m_payload->a_pki_subnet_id) {
        goto fail;
    }
    cJSON *a_pki_subnet_id = cJSON_AddArrayToObject(item, "a_pkiSubnetID");
    if(a_pki_subnet_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_subnet_idListEntry;
    list_ForEach(a_pki_subnet_idListEntry, subnet_create_object_v1_response_m_payload->a_pki_subnet_id) {
    if(cJSON_AddNumberToObject(a_pki_subnet_id, "", *(double *)a_pki_subnet_idListEntry->data) == NULL)
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

subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_parseFromJSON(cJSON *subnet_create_object_v1_response_m_payloadJSON){

    subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for subnet_create_object_v1_response_m_payload->a_pki_subnet_id
    list_t *a_pki_subnet_idList = NULL;

    // subnet_create_object_v1_response_m_payload->a_pki_subnet_id
    cJSON *a_pki_subnet_id = cJSON_GetObjectItemCaseSensitive(subnet_create_object_v1_response_m_payloadJSON, "a_pkiSubnetID");
    if (cJSON_IsNull(a_pki_subnet_id)) {
        a_pki_subnet_id = NULL;
    }
    if (!a_pki_subnet_id) {
        goto end;
    }

    
    cJSON *a_pki_subnet_id_local = NULL;
    if(!cJSON_IsArray(a_pki_subnet_id)) {
        goto end;//primitive container
    }
    a_pki_subnet_idList = list_createList();

    cJSON_ArrayForEach(a_pki_subnet_id_local, a_pki_subnet_id)
    {
        if(!cJSON_IsNumber(a_pki_subnet_id_local))
        {
            goto end;
        }
        double *a_pki_subnet_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_subnet_id_local_value)
        {
            goto end;
        }
        *a_pki_subnet_id_local_value = a_pki_subnet_id_local->valuedouble;
        list_addElement(a_pki_subnet_idList , a_pki_subnet_id_local_value);
    }


    subnet_create_object_v1_response_m_payload_local_var = subnet_create_object_v1_response_m_payload_create_internal (
        a_pki_subnet_idList
        );

    return subnet_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_subnet_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_subnet_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_subnet_idList);
        a_pki_subnet_idList = NULL;
    }
    return NULL;

}

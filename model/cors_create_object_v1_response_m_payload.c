#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_create_object_v1_response_m_payload.h"



static cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_cors_id
    ) {
    cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_local_var = malloc(sizeof(cors_create_object_v1_response_m_payload_t));
    if (!cors_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    cors_create_object_v1_response_m_payload_local_var->a_pki_cors_id = a_pki_cors_id;

    cors_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return cors_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_create(
    list_t *a_pki_cors_id
    ) {
    return cors_create_object_v1_response_m_payload_create_internal (
        a_pki_cors_id
        );
}

void cors_create_object_v1_response_m_payload_free(cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload) {
    if(NULL == cors_create_object_v1_response_m_payload){
        return ;
    }
    if(cors_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cors_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cors_create_object_v1_response_m_payload->a_pki_cors_id) {
        list_ForEach(listEntry, cors_create_object_v1_response_m_payload->a_pki_cors_id) {
            free(listEntry->data);
        }
        list_freeList(cors_create_object_v1_response_m_payload->a_pki_cors_id);
        cors_create_object_v1_response_m_payload->a_pki_cors_id = NULL;
    }
    free(cors_create_object_v1_response_m_payload);
}

cJSON *cors_create_object_v1_response_m_payload_convertToJSON(cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // cors_create_object_v1_response_m_payload->a_pki_cors_id
    if (!cors_create_object_v1_response_m_payload->a_pki_cors_id) {
        goto fail;
    }
    cJSON *a_pki_cors_id = cJSON_AddArrayToObject(item, "a_pkiCorsID");
    if(a_pki_cors_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_cors_idListEntry;
    list_ForEach(a_pki_cors_idListEntry, cors_create_object_v1_response_m_payload->a_pki_cors_id) {
    if(cJSON_AddNumberToObject(a_pki_cors_id, "", *(double *)a_pki_cors_idListEntry->data) == NULL)
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

cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_parseFromJSON(cJSON *cors_create_object_v1_response_m_payloadJSON){

    cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for cors_create_object_v1_response_m_payload->a_pki_cors_id
    list_t *a_pki_cors_idList = NULL;

    // cors_create_object_v1_response_m_payload->a_pki_cors_id
    cJSON *a_pki_cors_id = cJSON_GetObjectItemCaseSensitive(cors_create_object_v1_response_m_payloadJSON, "a_pkiCorsID");
    if (cJSON_IsNull(a_pki_cors_id)) {
        a_pki_cors_id = NULL;
    }
    if (!a_pki_cors_id) {
        goto end;
    }

    
    cJSON *a_pki_cors_id_local = NULL;
    if(!cJSON_IsArray(a_pki_cors_id)) {
        goto end;//primitive container
    }
    a_pki_cors_idList = list_createList();

    cJSON_ArrayForEach(a_pki_cors_id_local, a_pki_cors_id)
    {
        if(!cJSON_IsNumber(a_pki_cors_id_local))
        {
            goto end;
        }
        double *a_pki_cors_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_cors_id_local_value)
        {
            goto end;
        }
        *a_pki_cors_id_local_value = a_pki_cors_id_local->valuedouble;
        list_addElement(a_pki_cors_idList , a_pki_cors_id_local_value);
    }


    cors_create_object_v1_response_m_payload_local_var = cors_create_object_v1_response_m_payload_create_internal (
        a_pki_cors_idList
        );

    return cors_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_cors_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_cors_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_cors_idList);
        a_pki_cors_idList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_create_object_v1_response_m_payload.h"



static signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_signature_id
    ) {
    signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_local_var = malloc(sizeof(signature_create_object_v1_response_m_payload_t));
    if (!signature_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    signature_create_object_v1_response_m_payload_local_var->a_pki_signature_id = a_pki_signature_id;

    signature_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return signature_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_create(
    list_t *a_pki_signature_id
    ) {
    return signature_create_object_v1_response_m_payload_create_internal (
        a_pki_signature_id
        );
}

void signature_create_object_v1_response_m_payload_free(signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload) {
    if(NULL == signature_create_object_v1_response_m_payload){
        return ;
    }
    if(signature_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "signature_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (signature_create_object_v1_response_m_payload->a_pki_signature_id) {
        list_ForEach(listEntry, signature_create_object_v1_response_m_payload->a_pki_signature_id) {
            free(listEntry->data);
        }
        list_freeList(signature_create_object_v1_response_m_payload->a_pki_signature_id);
        signature_create_object_v1_response_m_payload->a_pki_signature_id = NULL;
    }
    free(signature_create_object_v1_response_m_payload);
}

cJSON *signature_create_object_v1_response_m_payload_convertToJSON(signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // signature_create_object_v1_response_m_payload->a_pki_signature_id
    if (!signature_create_object_v1_response_m_payload->a_pki_signature_id) {
        goto fail;
    }
    cJSON *a_pki_signature_id = cJSON_AddArrayToObject(item, "a_pkiSignatureID");
    if(a_pki_signature_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_signature_idListEntry;
    list_ForEach(a_pki_signature_idListEntry, signature_create_object_v1_response_m_payload->a_pki_signature_id) {
    if(cJSON_AddNumberToObject(a_pki_signature_id, "", *(double *)a_pki_signature_idListEntry->data) == NULL)
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

signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_parseFromJSON(cJSON *signature_create_object_v1_response_m_payloadJSON){

    signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for signature_create_object_v1_response_m_payload->a_pki_signature_id
    list_t *a_pki_signature_idList = NULL;

    // signature_create_object_v1_response_m_payload->a_pki_signature_id
    cJSON *a_pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_create_object_v1_response_m_payloadJSON, "a_pkiSignatureID");
    if (cJSON_IsNull(a_pki_signature_id)) {
        a_pki_signature_id = NULL;
    }
    if (!a_pki_signature_id) {
        goto end;
    }

    
    cJSON *a_pki_signature_id_local = NULL;
    if(!cJSON_IsArray(a_pki_signature_id)) {
        goto end;//primitive container
    }
    a_pki_signature_idList = list_createList();

    cJSON_ArrayForEach(a_pki_signature_id_local, a_pki_signature_id)
    {
        if(!cJSON_IsNumber(a_pki_signature_id_local))
        {
            goto end;
        }
        double *a_pki_signature_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_signature_id_local_value)
        {
            goto end;
        }
        *a_pki_signature_id_local_value = a_pki_signature_id_local->valuedouble;
        list_addElement(a_pki_signature_idList , a_pki_signature_id_local_value);
    }


    signature_create_object_v1_response_m_payload_local_var = signature_create_object_v1_response_m_payload_create_internal (
        a_pki_signature_idList
        );

    return signature_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_signature_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_signature_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_signature_idList);
        a_pki_signature_idList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_create_object_v1_response_m_payload.h"



static ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsigntemplatedocument_id
    ) {
    ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatedocument_id = a_pki_ezsigntemplatedocument_id;

    ezsigntemplatedocument_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatedocument_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatedocument_id
    ) {
    return ezsigntemplatedocument_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplatedocument_id
        );
}

void ezsigntemplatedocument_create_object_v1_response_m_payload_free(ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatedocument_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id) {
        list_ForEach(listEntry, ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id);
        ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id = NULL;
    }
    free(ezsigntemplatedocument_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id
    if (!ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatedocument_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatedocumentID");
    if(a_pki_ezsigntemplatedocument_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatedocument_idListEntry;
    list_ForEach(a_pki_ezsigntemplatedocument_idListEntry, ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatedocument_id, "", *(double *)a_pki_ezsigntemplatedocument_idListEntry->data) == NULL)
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

ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_create_object_v1_response_m_payloadJSON){

    ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id
    list_t *a_pki_ezsigntemplatedocument_idList = NULL;

    // ezsigntemplatedocument_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocument_id
    cJSON *a_pki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatedocumentID");
    if (cJSON_IsNull(a_pki_ezsigntemplatedocument_id)) {
        a_pki_ezsigntemplatedocument_id = NULL;
    }
    if (!a_pki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatedocument_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatedocument_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatedocument_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatedocument_id_local, a_pki_ezsigntemplatedocument_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatedocument_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatedocument_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatedocument_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatedocument_id_local_value = a_pki_ezsigntemplatedocument_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatedocument_idList , a_pki_ezsigntemplatedocument_id_local_value);
    }


    ezsigntemplatedocument_create_object_v1_response_m_payload_local_var = ezsigntemplatedocument_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplatedocument_idList
        );

    return ezsigntemplatedocument_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatedocument_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatedocument_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatedocument_idList);
        a_pki_ezsigntemplatedocument_idList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_create_object_v3_response_m_payload.h"



static ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload_create_internal(
    list_t *a_pki_ezsignsignature_id
    ) {
    ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload_local_var = malloc(sizeof(ezsignsignature_create_object_v3_response_m_payload_t));
    if (!ezsignsignature_create_object_v3_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_create_object_v3_response_m_payload_local_var->a_pki_ezsignsignature_id = a_pki_ezsignsignature_id;

    ezsignsignature_create_object_v3_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignature_create_object_v3_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload_create(
    list_t *a_pki_ezsignsignature_id
    ) {
    return ezsignsignature_create_object_v3_response_m_payload_create_internal (
        a_pki_ezsignsignature_id
        );
}

void ezsignsignature_create_object_v3_response_m_payload_free(ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload) {
    if(NULL == ezsignsignature_create_object_v3_response_m_payload){
        return ;
    }
    if(ezsignsignature_create_object_v3_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_create_object_v3_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id) {
        list_ForEach(listEntry, ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id);
        ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id = NULL;
    }
    free(ezsignsignature_create_object_v3_response_m_payload);
}

cJSON *ezsignsignature_create_object_v3_response_m_payload_convertToJSON(ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id
    if (!ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignsignature_id = cJSON_AddArrayToObject(item, "a_pkiEzsignsignatureID");
    if(a_pki_ezsignsignature_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignsignature_idListEntry;
    list_ForEach(a_pki_ezsignsignature_idListEntry, ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignsignature_id, "", *(double *)a_pki_ezsignsignature_idListEntry->data) == NULL)
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

ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload_parseFromJSON(cJSON *ezsignsignature_create_object_v3_response_m_payloadJSON){

    ezsignsignature_create_object_v3_response_m_payload_t *ezsignsignature_create_object_v3_response_m_payload_local_var = NULL;

    // define the local list for ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id
    list_t *a_pki_ezsignsignature_idList = NULL;

    // ezsignsignature_create_object_v3_response_m_payload->a_pki_ezsignsignature_id
    cJSON *a_pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v3_response_m_payloadJSON, "a_pkiEzsignsignatureID");
    if (cJSON_IsNull(a_pki_ezsignsignature_id)) {
        a_pki_ezsignsignature_id = NULL;
    }
    if (!a_pki_ezsignsignature_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignsignature_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignsignature_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignsignature_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignsignature_id_local, a_pki_ezsignsignature_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignsignature_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignsignature_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsignsignature_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignsignature_id_local_value = a_pki_ezsignsignature_id_local->valuedouble;
        list_addElement(a_pki_ezsignsignature_idList , a_pki_ezsignsignature_id_local_value);
    }


    ezsignsignature_create_object_v3_response_m_payload_local_var = ezsignsignature_create_object_v3_response_m_payload_create_internal (
        a_pki_ezsignsignature_idList
        );

    return ezsignsignature_create_object_v3_response_m_payload_local_var;
end:
    if (a_pki_ezsignsignature_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignsignature_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignsignature_idList);
        a_pki_ezsignsignature_idList = NULL;
    }
    return NULL;

}

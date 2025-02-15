#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_create_object_v1_response_m_payload.h"



static ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsignformfieldgroup_id
    ) {
    ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignformfieldgroup_create_object_v1_response_m_payload_t));
    if (!ezsignformfieldgroup_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_create_object_v1_response_m_payload_local_var->a_pki_ezsignformfieldgroup_id = a_pki_ezsignformfieldgroup_id;

    ezsignformfieldgroup_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignformfieldgroup_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignformfieldgroup_id
    ) {
    return ezsignformfieldgroup_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsignformfieldgroup_id
        );
}

void ezsignformfieldgroup_create_object_v1_response_m_payload_free(ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload) {
    if(NULL == ezsignformfieldgroup_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsignformfieldgroup_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroup_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
        list_ForEach(listEntry, ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id);
        ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id = NULL;
    }
    free(ezsignformfieldgroup_create_object_v1_response_m_payload);
}

cJSON *ezsignformfieldgroup_create_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    if (!ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignformfieldgroup_id = cJSON_AddArrayToObject(item, "a_pkiEzsignformfieldgroupID");
    if(a_pki_ezsignformfieldgroup_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignformfieldgroup_idListEntry;
    list_ForEach(a_pki_ezsignformfieldgroup_idListEntry, ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignformfieldgroup_id, "", *(double *)a_pki_ezsignformfieldgroup_idListEntry->data) == NULL)
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

ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_response_m_payloadJSON){

    ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    list_t *a_pki_ezsignformfieldgroup_idList = NULL;

    // ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    cJSON *a_pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_create_object_v1_response_m_payloadJSON, "a_pkiEzsignformfieldgroupID");
    if (cJSON_IsNull(a_pki_ezsignformfieldgroup_id)) {
        a_pki_ezsignformfieldgroup_id = NULL;
    }
    if (!a_pki_ezsignformfieldgroup_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignformfieldgroup_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignformfieldgroup_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignformfieldgroup_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignformfieldgroup_id_local, a_pki_ezsignformfieldgroup_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignformfieldgroup_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignformfieldgroup_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsignformfieldgroup_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignformfieldgroup_id_local_value = a_pki_ezsignformfieldgroup_id_local->valuedouble;
        list_addElement(a_pki_ezsignformfieldgroup_idList , a_pki_ezsignformfieldgroup_id_local_value);
    }


    ezsignformfieldgroup_create_object_v1_response_m_payload_local_var = ezsignformfieldgroup_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsignformfieldgroup_idList
        );

    return ezsignformfieldgroup_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignformfieldgroup_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignformfieldgroup_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignformfieldgroup_idList);
        a_pki_ezsignformfieldgroup_idList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_create_object_v1_response_m_payload.h"



ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignformfieldgroup_id
    ) {
    ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignformfieldgroup_create_object_v1_response_m_payload_t));
    if (!ezsignformfieldgroup_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_create_object_v1_response_m_payload_local_var->a_pki_ezsignformfieldgroup_id = a_pki_ezsignformfieldgroup_id;

    return ezsignformfieldgroup_create_object_v1_response_m_payload_local_var;
}


void ezsignformfieldgroup_create_object_v1_response_m_payload_free(ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload) {
    if(NULL == ezsignformfieldgroup_create_object_v1_response_m_payload){
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

    // ezsignformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    cJSON *a_pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_create_object_v1_response_m_payloadJSON, "a_pkiEzsignformfieldgroupID");
    if (!a_pki_ezsignformfieldgroup_id) {
        goto end;
    }

    list_t *a_pki_ezsignformfieldgroup_idList;
    
    cJSON *a_pki_ezsignformfieldgroup_id_local;
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
        double *a_pki_ezsignformfieldgroup_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignformfieldgroup_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignformfieldgroup_id_local_value = a_pki_ezsignformfieldgroup_id_local->valuedouble;
        list_addElement(a_pki_ezsignformfieldgroup_idList , a_pki_ezsignformfieldgroup_id_local_value);
    }


    ezsignformfieldgroup_create_object_v1_response_m_payload_local_var = ezsignformfieldgroup_create_object_v1_response_m_payload_create (
        a_pki_ezsignformfieldgroup_idList
        );

    return ezsignformfieldgroup_create_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

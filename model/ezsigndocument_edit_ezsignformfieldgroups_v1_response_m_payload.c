#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload.h"



ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_create(
    list_t *a_pki_ezsignformfieldgroup_id
    ) {
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t));
    if (!ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var->a_pki_ezsignformfieldgroup_id = a_pki_ezsignformfieldgroup_id;

    return ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var;
}


void ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_free(ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload) {
    if(NULL == ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
        list_ForEach(listEntry, ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id);
        ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id = NULL;
    }
    free(ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload);
}

cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    if (!ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignformfieldgroup_id = cJSON_AddArrayToObject(item, "a_pkiEzsignformfieldgroupID");
    if(a_pki_ezsignformfieldgroup_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignformfieldgroup_idListEntry;
    list_ForEach(a_pki_ezsignformfieldgroup_idListEntry, ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id) {
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

ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payloadJSON){

    ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    list_t *a_pki_ezsignformfieldgroup_idList = NULL;

    // ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload->a_pki_ezsignformfieldgroup_id
    cJSON *a_pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payloadJSON, "a_pkiEzsignformfieldgroupID");
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
        double *a_pki_ezsignformfieldgroup_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignformfieldgroup_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignformfieldgroup_id_local_value = a_pki_ezsignformfieldgroup_id_local->valuedouble;
        list_addElement(a_pki_ezsignformfieldgroup_idList , a_pki_ezsignformfieldgroup_id_local_value);
    }


    ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var = ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_create (
        a_pki_ezsignformfieldgroup_idList
        );

    return ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_local_var;
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

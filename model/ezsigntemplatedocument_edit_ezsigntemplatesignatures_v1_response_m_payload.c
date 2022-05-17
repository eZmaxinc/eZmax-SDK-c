#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload.h"



ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatesignature_id
    ) {
    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var->a_pki_ezsigntemplatesignature_id = a_pki_ezsigntemplatesignature_id;

    return ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var;
}


void ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_free(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id);
        ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id = NULL;
    }
    free(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id
    if (!ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatesignature_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatesignatureID");
    if(a_pki_ezsigntemplatesignature_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatesignature_idListEntry;
    list_ForEach(a_pki_ezsigntemplatesignature_idListEntry, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatesignature_id, "", *(double *)a_pki_ezsigntemplatesignature_idListEntry->data) == NULL)
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

ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payloadJSON){

    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id
    list_t *a_pki_ezsigntemplatesignature_idList = NULL;

    // ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload->a_pki_ezsigntemplatesignature_id
    cJSON *a_pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payloadJSON, "a_pkiEzsigntemplatesignatureID");
    if (!a_pki_ezsigntemplatesignature_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatesignature_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatesignature_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatesignature_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatesignature_id_local, a_pki_ezsigntemplatesignature_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatesignature_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatesignature_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatesignature_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatesignature_id_local_value = a_pki_ezsigntemplatesignature_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatesignature_idList , a_pki_ezsigntemplatesignature_id_local_value);
    }


    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var = ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_create (
        a_pki_ezsigntemplatesignature_idList
        );

    return ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatesignature_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatesignature_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatesignature_idList);
        a_pki_ezsigntemplatesignature_idList = NULL;
    }
    return NULL;

}

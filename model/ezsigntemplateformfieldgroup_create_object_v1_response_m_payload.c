#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_create_object_v1_response_m_payload.h"



ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplateformfieldgroup_id
    ) {
    ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t));
    if (!ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplateformfieldgroup_id = a_pki_ezsigntemplateformfieldgroup_id;

    return ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var;
}


void ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_free(ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplateformfieldgroup_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id);
        ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id = NULL;
    }
    free(ezsigntemplateformfieldgroup_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id
    if (!ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplateformfieldgroup_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplateformfieldgroupID");
    if(a_pki_ezsigntemplateformfieldgroup_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplateformfieldgroup_idListEntry;
    list_ForEach(a_pki_ezsigntemplateformfieldgroup_idListEntry, ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplateformfieldgroup_id, "", *(double *)a_pki_ezsigntemplateformfieldgroup_idListEntry->data) == NULL)
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

ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_create_object_v1_response_m_payloadJSON){

    ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id
    list_t *a_pki_ezsigntemplateformfieldgroup_idList = NULL;

    // ezsigntemplateformfieldgroup_create_object_v1_response_m_payload->a_pki_ezsigntemplateformfieldgroup_id
    cJSON *a_pki_ezsigntemplateformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplateformfieldgroupID");
    if (!a_pki_ezsigntemplateformfieldgroup_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplateformfieldgroup_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplateformfieldgroup_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplateformfieldgroup_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplateformfieldgroup_id_local, a_pki_ezsigntemplateformfieldgroup_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplateformfieldgroup_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplateformfieldgroup_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplateformfieldgroup_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplateformfieldgroup_id_local_value = a_pki_ezsigntemplateformfieldgroup_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplateformfieldgroup_idList , a_pki_ezsigntemplateformfieldgroup_id_local_value);
    }


    ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var = ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_create (
        a_pki_ezsigntemplateformfieldgroup_idList
        );

    return ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplateformfieldgroup_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplateformfieldgroup_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplateformfieldgroup_idList);
        a_pki_ezsigntemplateformfieldgroup_idList = NULL;
    }
    return NULL;

}

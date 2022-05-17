#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_create_object_v1_response_m_payload.h"



ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackage_id
    ) {
    ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackage_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackage_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatepackage_id = a_pki_ezsigntemplatepackage_id;

    return ezsigntemplatepackage_create_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackage_create_object_v1_response_m_payload_free(ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackage_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id) {
        list_ForEach(listEntry, ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id);
        ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id = NULL;
    }
    free(ezsigntemplatepackage_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackage_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatepackage_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatepackageID");
    if(a_pki_ezsigntemplatepackage_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatepackage_idListEntry;
    list_ForEach(a_pki_ezsigntemplatepackage_idListEntry, ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatepackage_id, "", *(double *)a_pki_ezsigntemplatepackage_idListEntry->data) == NULL)
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

ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_create_object_v1_response_m_payloadJSON){

    ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id
    list_t *a_pki_ezsigntemplatepackage_idList = NULL;

    // ezsigntemplatepackage_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackage_id
    cJSON *a_pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatepackageID");
    if (!a_pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatepackage_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatepackage_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatepackage_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatepackage_id_local, a_pki_ezsigntemplatepackage_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatepackage_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatepackage_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatepackage_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatepackage_id_local_value = a_pki_ezsigntemplatepackage_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatepackage_idList , a_pki_ezsigntemplatepackage_id_local_value);
    }


    ezsigntemplatepackage_create_object_v1_response_m_payload_local_var = ezsigntemplatepackage_create_object_v1_response_m_payload_create (
        a_pki_ezsigntemplatepackage_idList
        );

    return ezsigntemplatepackage_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatepackage_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatepackage_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatepackage_idList);
        a_pki_ezsigntemplatepackage_idList = NULL;
    }
    return NULL;

}

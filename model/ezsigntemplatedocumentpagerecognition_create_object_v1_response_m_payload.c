#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload.h"



ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatedocumentpagerecognition_id
    ) {
    ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatedocumentpagerecognition_id = a_pki_ezsigntemplatedocumentpagerecognition_id;

    return ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var;
}


void ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_free(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id) {
        list_ForEach(listEntry, ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id);
        ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id
    if (!ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatedocumentpagerecognition_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatedocumentpagerecognitionID");
    if(a_pki_ezsigntemplatedocumentpagerecognition_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatedocumentpagerecognition_idListEntry;
    list_ForEach(a_pki_ezsigntemplatedocumentpagerecognition_idListEntry, ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatedocumentpagerecognition_id, "", *(double *)a_pki_ezsigntemplatedocumentpagerecognition_idListEntry->data) == NULL)
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

ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payloadJSON){

    ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id
    list_t *a_pki_ezsigntemplatedocumentpagerecognition_idList = NULL;

    // ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload->a_pki_ezsigntemplatedocumentpagerecognition_id
    cJSON *a_pki_ezsigntemplatedocumentpagerecognition_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatedocumentpagerecognitionID");
    if (!a_pki_ezsigntemplatedocumentpagerecognition_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatedocumentpagerecognition_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatedocumentpagerecognition_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatedocumentpagerecognition_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatedocumentpagerecognition_id_local, a_pki_ezsigntemplatedocumentpagerecognition_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatedocumentpagerecognition_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatedocumentpagerecognition_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatedocumentpagerecognition_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatedocumentpagerecognition_id_local_value = a_pki_ezsigntemplatedocumentpagerecognition_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatedocumentpagerecognition_idList , a_pki_ezsigntemplatedocumentpagerecognition_id_local_value);
    }


    ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var = ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_create (
        a_pki_ezsigntemplatedocumentpagerecognition_idList
        );

    return ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatedocumentpagerecognition_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatedocumentpagerecognition_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatedocumentpagerecognition_idList);
        a_pki_ezsigntemplatedocumentpagerecognition_idList = NULL;
    }
    return NULL;

}

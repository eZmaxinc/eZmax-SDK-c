#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_create_object_v2_response_m_payload.h"



static ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_create_internal(
    list_t *a_pki_ezsigntemplatesignature_id
    ) {
    ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatesignature_create_object_v2_response_m_payload_t));
    if (!ezsigntemplatesignature_create_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_create_object_v2_response_m_payload_local_var->a_pki_ezsigntemplatesignature_id = a_pki_ezsigntemplatesignature_id;

    ezsigntemplatesignature_create_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatesignature_create_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_create(
    list_t *a_pki_ezsigntemplatesignature_id
    ) {
    return ezsigntemplatesignature_create_object_v2_response_m_payload_create_internal (
        a_pki_ezsigntemplatesignature_id
        );
}

void ezsigntemplatesignature_create_object_v2_response_m_payload_free(ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatesignature_create_object_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplatesignature_create_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignature_create_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id) {
        list_ForEach(listEntry, ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id);
        ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id = NULL;
    }
    free(ezsigntemplatesignature_create_object_v2_response_m_payload);
}

cJSON *ezsigntemplatesignature_create_object_v2_response_m_payload_convertToJSON(ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id
    if (!ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatesignature_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatesignatureID");
    if(a_pki_ezsigntemplatesignature_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatesignature_idListEntry;
    list_ForEach(a_pki_ezsigntemplatesignature_idListEntry, ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id) {
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

ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesignature_create_object_v2_response_m_payloadJSON){

    ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id
    list_t *a_pki_ezsigntemplatesignature_idList = NULL;

    // ezsigntemplatesignature_create_object_v2_response_m_payload->a_pki_ezsigntemplatesignature_id
    cJSON *a_pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_create_object_v2_response_m_payloadJSON, "a_pkiEzsigntemplatesignatureID");
    if (cJSON_IsNull(a_pki_ezsigntemplatesignature_id)) {
        a_pki_ezsigntemplatesignature_id = NULL;
    }
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
        double *a_pki_ezsigntemplatesignature_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatesignature_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatesignature_id_local_value = a_pki_ezsigntemplatesignature_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatesignature_idList , a_pki_ezsigntemplatesignature_id_local_value);
    }


    ezsigntemplatesignature_create_object_v2_response_m_payload_local_var = ezsigntemplatesignature_create_object_v2_response_m_payload_create_internal (
        a_pki_ezsigntemplatesignature_idList
        );

    return ezsigntemplatesignature_create_object_v2_response_m_payload_local_var;
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

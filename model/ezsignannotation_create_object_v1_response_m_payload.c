#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_create_object_v1_response_m_payload.h"



static ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsignannotation_id
    ) {
    ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignannotation_create_object_v1_response_m_payload_t));
    if (!ezsignannotation_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignannotation_create_object_v1_response_m_payload_local_var->a_pki_ezsignannotation_id = a_pki_ezsignannotation_id;

    ezsignannotation_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignannotation_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignannotation_id
    ) {
    return ezsignannotation_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsignannotation_id
        );
}

void ezsignannotation_create_object_v1_response_m_payload_free(ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload) {
    if(NULL == ezsignannotation_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsignannotation_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignannotation_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id) {
        list_ForEach(listEntry, ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id);
        ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id = NULL;
    }
    free(ezsignannotation_create_object_v1_response_m_payload);
}

cJSON *ezsignannotation_create_object_v1_response_m_payload_convertToJSON(ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id
    if (!ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignannotation_id = cJSON_AddArrayToObject(item, "a_pkiEzsignannotationID");
    if(a_pki_ezsignannotation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignannotation_idListEntry;
    list_ForEach(a_pki_ezsignannotation_idListEntry, ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignannotation_id, "", *(double *)a_pki_ezsignannotation_idListEntry->data) == NULL)
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

ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignannotation_create_object_v1_response_m_payloadJSON){

    ezsignannotation_create_object_v1_response_m_payload_t *ezsignannotation_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id
    list_t *a_pki_ezsignannotation_idList = NULL;

    // ezsignannotation_create_object_v1_response_m_payload->a_pki_ezsignannotation_id
    cJSON *a_pki_ezsignannotation_id = cJSON_GetObjectItemCaseSensitive(ezsignannotation_create_object_v1_response_m_payloadJSON, "a_pkiEzsignannotationID");
    if (cJSON_IsNull(a_pki_ezsignannotation_id)) {
        a_pki_ezsignannotation_id = NULL;
    }
    if (!a_pki_ezsignannotation_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignannotation_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignannotation_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignannotation_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignannotation_id_local, a_pki_ezsignannotation_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignannotation_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignannotation_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsignannotation_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignannotation_id_local_value = a_pki_ezsignannotation_id_local->valuedouble;
        list_addElement(a_pki_ezsignannotation_idList , a_pki_ezsignannotation_id_local_value);
    }


    ezsignannotation_create_object_v1_response_m_payload_local_var = ezsignannotation_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsignannotation_idList
        );

    return ezsignannotation_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignannotation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignannotation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignannotation_idList);
        a_pki_ezsignannotation_idList = NULL;
    }
    return NULL;

}

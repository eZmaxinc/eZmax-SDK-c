#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_create_object_v1_response_m_payload.h"



static ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsigndiscussion_id
    ) {
    ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigndiscussion_create_object_v1_response_m_payload_t));
    if (!ezsigndiscussion_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndiscussion_create_object_v1_response_m_payload_local_var->a_pki_ezsigndiscussion_id = a_pki_ezsigndiscussion_id;

    ezsigndiscussion_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigndiscussion_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigndiscussion_id
    ) {
    return ezsigndiscussion_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigndiscussion_id
        );
}

void ezsigndiscussion_create_object_v1_response_m_payload_free(ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload) {
    if(NULL == ezsigndiscussion_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsigndiscussion_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndiscussion_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id) {
        list_ForEach(listEntry, ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id);
        ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id = NULL;
    }
    free(ezsigndiscussion_create_object_v1_response_m_payload);
}

cJSON *ezsigndiscussion_create_object_v1_response_m_payload_convertToJSON(ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id
    if (!ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigndiscussion_id = cJSON_AddArrayToObject(item, "a_pkiEzsigndiscussionID");
    if(a_pki_ezsigndiscussion_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigndiscussion_idListEntry;
    list_ForEach(a_pki_ezsigndiscussion_idListEntry, ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigndiscussion_id, "", *(double *)a_pki_ezsigndiscussion_idListEntry->data) == NULL)
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

ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigndiscussion_create_object_v1_response_m_payloadJSON){

    ezsigndiscussion_create_object_v1_response_m_payload_t *ezsigndiscussion_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id
    list_t *a_pki_ezsigndiscussion_idList = NULL;

    // ezsigndiscussion_create_object_v1_response_m_payload->a_pki_ezsigndiscussion_id
    cJSON *a_pki_ezsigndiscussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_create_object_v1_response_m_payloadJSON, "a_pkiEzsigndiscussionID");
    if (cJSON_IsNull(a_pki_ezsigndiscussion_id)) {
        a_pki_ezsigndiscussion_id = NULL;
    }
    if (!a_pki_ezsigndiscussion_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigndiscussion_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigndiscussion_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigndiscussion_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigndiscussion_id_local, a_pki_ezsigndiscussion_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigndiscussion_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigndiscussion_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigndiscussion_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigndiscussion_id_local_value = a_pki_ezsigndiscussion_id_local->valuedouble;
        list_addElement(a_pki_ezsigndiscussion_idList , a_pki_ezsigndiscussion_id_local_value);
    }


    ezsigndiscussion_create_object_v1_response_m_payload_local_var = ezsigndiscussion_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigndiscussion_idList
        );

    return ezsigndiscussion_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigndiscussion_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigndiscussion_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigndiscussion_idList);
        a_pki_ezsigndiscussion_idList = NULL;
    }
    return NULL;

}

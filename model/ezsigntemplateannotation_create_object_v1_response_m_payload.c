#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_create_object_v1_response_m_payload.h"



static ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsigntemplateannotation_id
    ) {
    ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplateannotation_create_object_v1_response_m_payload_t));
    if (!ezsigntemplateannotation_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateannotation_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplateannotation_id = a_pki_ezsigntemplateannotation_id;

    ezsigntemplateannotation_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplateannotation_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplateannotation_id
    ) {
    return ezsigntemplateannotation_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplateannotation_id
        );
}

void ezsigntemplateannotation_create_object_v1_response_m_payload_free(ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplateannotation_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplateannotation_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id) {
        list_ForEach(listEntry, ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id);
        ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id = NULL;
    }
    free(ezsigntemplateannotation_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplateannotation_create_object_v1_response_m_payload_convertToJSON(ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id
    if (!ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplateannotation_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplateannotationID");
    if(a_pki_ezsigntemplateannotation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplateannotation_idListEntry;
    list_ForEach(a_pki_ezsigntemplateannotation_idListEntry, ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplateannotation_id, "", *(double *)a_pki_ezsigntemplateannotation_idListEntry->data) == NULL)
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

ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplateannotation_create_object_v1_response_m_payloadJSON){

    ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id
    list_t *a_pki_ezsigntemplateannotation_idList = NULL;

    // ezsigntemplateannotation_create_object_v1_response_m_payload->a_pki_ezsigntemplateannotation_id
    cJSON *a_pki_ezsigntemplateannotation_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplateannotationID");
    if (cJSON_IsNull(a_pki_ezsigntemplateannotation_id)) {
        a_pki_ezsigntemplateannotation_id = NULL;
    }
    if (!a_pki_ezsigntemplateannotation_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplateannotation_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplateannotation_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplateannotation_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplateannotation_id_local, a_pki_ezsigntemplateannotation_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplateannotation_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplateannotation_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplateannotation_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplateannotation_id_local_value = a_pki_ezsigntemplateannotation_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplateannotation_idList , a_pki_ezsigntemplateannotation_id_local_value);
    }


    ezsigntemplateannotation_create_object_v1_response_m_payload_local_var = ezsigntemplateannotation_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplateannotation_idList
        );

    return ezsigntemplateannotation_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplateannotation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplateannotation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplateannotation_idList);
        a_pki_ezsigntemplateannotation_idList = NULL;
    }
    return NULL;

}

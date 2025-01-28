#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_copy_v1_response_m_payload.h"



static ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsigntemplate_id
    ) {
    ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplate_copy_v1_response_m_payload_t));
    if (!ezsigntemplate_copy_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplate_copy_v1_response_m_payload_local_var->a_pki_ezsigntemplate_id = a_pki_ezsigntemplate_id;

    ezsigntemplate_copy_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplate_copy_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplate_id
    ) {
    return ezsigntemplate_copy_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplate_id
        );
}

void ezsigntemplate_copy_v1_response_m_payload_free(ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload) {
    if(NULL == ezsigntemplate_copy_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplate_copy_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_copy_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id) {
        list_ForEach(listEntry, ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id);
        ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id = NULL;
    }
    free(ezsigntemplate_copy_v1_response_m_payload);
}

cJSON *ezsigntemplate_copy_v1_response_m_payload_convertToJSON(ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id
    if (!ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplate_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplateID");
    if(a_pki_ezsigntemplate_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplate_idListEntry;
    list_ForEach(a_pki_ezsigntemplate_idListEntry, ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplate_id, "", *(double *)a_pki_ezsigntemplate_idListEntry->data) == NULL)
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

ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_copy_v1_response_m_payloadJSON){

    ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id
    list_t *a_pki_ezsigntemplate_idList = NULL;

    // ezsigntemplate_copy_v1_response_m_payload->a_pki_ezsigntemplate_id
    cJSON *a_pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_copy_v1_response_m_payloadJSON, "a_pkiEzsigntemplateID");
    if (cJSON_IsNull(a_pki_ezsigntemplate_id)) {
        a_pki_ezsigntemplate_id = NULL;
    }
    if (!a_pki_ezsigntemplate_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplate_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplate_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplate_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplate_id_local, a_pki_ezsigntemplate_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplate_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplate_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplate_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplate_id_local_value = a_pki_ezsigntemplate_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplate_idList , a_pki_ezsigntemplate_id_local_value);
    }


    ezsigntemplate_copy_v1_response_m_payload_local_var = ezsigntemplate_copy_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplate_idList
        );

    return ezsigntemplate_copy_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplate_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplate_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplate_idList);
        a_pki_ezsigntemplate_idList = NULL;
    }
    return NULL;

}

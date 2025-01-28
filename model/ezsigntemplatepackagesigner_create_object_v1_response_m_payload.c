#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_create_object_v1_response_m_payload.h"



static ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsigntemplatepackagesigner_id
    ) {
    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatepackagesigner_id = a_pki_ezsigntemplatepackagesigner_id;

    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackagesigner_id
    ) {
    return ezsigntemplatepackagesigner_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplatepackagesigner_id
        );
}

void ezsigntemplatepackagesigner_create_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesigner_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackagesigner_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesigner_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id) {
        list_ForEach(listEntry, ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id);
        ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id = NULL;
    }
    free(ezsigntemplatepackagesigner_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id
    if (!ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatepackagesigner_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatepackagesignerID");
    if(a_pki_ezsigntemplatepackagesigner_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatepackagesigner_idListEntry;
    list_ForEach(a_pki_ezsigntemplatepackagesigner_idListEntry, ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatepackagesigner_id, "", *(double *)a_pki_ezsigntemplatepackagesigner_idListEntry->data) == NULL)
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

ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_create_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id
    list_t *a_pki_ezsigntemplatepackagesigner_idList = NULL;

    // ezsigntemplatepackagesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesigner_id
    cJSON *a_pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatepackagesignerID");
    if (cJSON_IsNull(a_pki_ezsigntemplatepackagesigner_id)) {
        a_pki_ezsigntemplatepackagesigner_id = NULL;
    }
    if (!a_pki_ezsigntemplatepackagesigner_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatepackagesigner_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatepackagesigner_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatepackagesigner_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatepackagesigner_id_local, a_pki_ezsigntemplatepackagesigner_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatepackagesigner_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatepackagesigner_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatepackagesigner_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatepackagesigner_id_local_value = a_pki_ezsigntemplatepackagesigner_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatepackagesigner_idList , a_pki_ezsigntemplatepackagesigner_id_local_value);
    }


    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var = ezsigntemplatepackagesigner_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplatepackagesigner_idList
        );

    return ezsigntemplatepackagesigner_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatepackagesigner_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatepackagesigner_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatepackagesigner_idList);
        a_pki_ezsigntemplatepackagesigner_idList = NULL;
    }
    return NULL;

}

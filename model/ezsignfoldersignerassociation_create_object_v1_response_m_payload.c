#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_object_v1_response_m_payload.h"



ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignfoldersignerassociation_id
    ) {
    ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_object_v1_response_m_payload_t));
    if (!ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var->a_pki_ezsignfoldersignerassociation_id = a_pki_ezsignfoldersignerassociation_id;

    return ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var;
}


void ezsignfoldersignerassociation_create_object_v1_response_m_payload_free(ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload) {
    if(NULL == ezsignfoldersignerassociation_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id) {
        list_ForEach(listEntry, ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id);
        ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id = NULL;
    }
    free(ezsignfoldersignerassociation_create_object_v1_response_m_payload);
}

cJSON *ezsignfoldersignerassociation_create_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    
    cJSON *a_pki_ezsignfoldersignerassociation_id = cJSON_AddArrayToObject(item, "a_pkiEzsignfoldersignerassociationID");
    if(a_pki_ezsignfoldersignerassociation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignfoldersignerassociation_idListEntry;
    list_ForEach(a_pki_ezsignfoldersignerassociation_idListEntry, ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignfoldersignerassociation_id, "", *(double *)a_pki_ezsignfoldersignerassociation_idListEntry->data) == NULL)
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

ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v1_response_m_payloadJSON){

    ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var = NULL;

    // ezsignfoldersignerassociation_create_object_v1_response_m_payload->a_pki_ezsignfoldersignerassociation_id
    cJSON *a_pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_object_v1_response_m_payloadJSON, "a_pkiEzsignfoldersignerassociationID");
    if (!a_pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    list_t *a_pki_ezsignfoldersignerassociation_idList;
    
    cJSON *a_pki_ezsignfoldersignerassociation_id_local;
    if(!cJSON_IsArray(a_pki_ezsignfoldersignerassociation_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignfoldersignerassociation_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignfoldersignerassociation_id_local, a_pki_ezsignfoldersignerassociation_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignfoldersignerassociation_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignfoldersignerassociation_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignfoldersignerassociation_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignfoldersignerassociation_id_local_value = a_pki_ezsignfoldersignerassociation_id_local->valuedouble;
        list_addElement(a_pki_ezsignfoldersignerassociation_idList , a_pki_ezsignfoldersignerassociation_id_local_value);
    }


    ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var = ezsignfoldersignerassociation_create_object_v1_response_m_payload_create (
        a_pki_ezsignfoldersignerassociation_idList
        );

    return ezsignfoldersignerassociation_create_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

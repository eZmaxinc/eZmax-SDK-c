#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_temporary_proof_v1_response_m_payload.h"



ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_create(
    list_t *a_obj_ezsigndocumentlog
    ) {
    ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_temporary_proof_v1_response_m_payload_t));
    if (!ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var->a_obj_ezsigndocumentlog = a_obj_ezsigndocumentlog;

    return ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var;
}


void ezsigndocument_get_temporary_proof_v1_response_m_payload_free(ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_temporary_proof_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
        list_ForEach(listEntry, ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
            ezsigndocumentlog_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog);
        ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog = NULL;
    }
    free(ezsigndocument_get_temporary_proof_v1_response_m_payload);
}

cJSON *ezsigndocument_get_temporary_proof_v1_response_m_payload_convertToJSON(ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog
    if (!ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
        goto fail;
    }
    cJSON *a_obj_ezsigndocumentlog = cJSON_AddArrayToObject(item, "a_objEzsigndocumentlog");
    if(a_obj_ezsigndocumentlog == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentlogListEntry;
    if (ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
    list_ForEach(a_obj_ezsigndocumentlogListEntry, ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
    cJSON *itemLocal = ezsigndocumentlog_response_convertToJSON(a_obj_ezsigndocumentlogListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndocumentlog, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_temporary_proof_v1_response_m_payloadJSON){

    ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog
    list_t *a_obj_ezsigndocumentlogList = NULL;

    // ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog
    cJSON *a_obj_ezsigndocumentlog = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_temporary_proof_v1_response_m_payloadJSON, "a_objEzsigndocumentlog");
    if (!a_obj_ezsigndocumentlog) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndocumentlog_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndocumentlog)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndocumentlogList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndocumentlog_local_nonprimitive,a_obj_ezsigndocumentlog )
    {
        if(!cJSON_IsObject(a_obj_ezsigndocumentlog_local_nonprimitive)){
            goto end;
        }
        ezsigndocumentlog_response_t *a_obj_ezsigndocumentlogItem = ezsigndocumentlog_response_parseFromJSON(a_obj_ezsigndocumentlog_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentlogList, a_obj_ezsigndocumentlogItem);
    }


    ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var = ezsigndocument_get_temporary_proof_v1_response_m_payload_create (
        a_obj_ezsigndocumentlogList
        );

    return ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigndocumentlogList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndocumentlogList) {
            ezsigndocumentlog_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndocumentlogList);
        a_obj_ezsigndocumentlogList = NULL;
    }
    return NULL;

}

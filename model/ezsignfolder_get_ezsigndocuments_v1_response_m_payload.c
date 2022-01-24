#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_ezsigndocuments_v1_response_m_payload.h"



ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t *ezsignfolder_get_ezsigndocuments_v1_response_m_payload_create(
    list_t *a_obj_ezsigndocument
    ) {
    ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t *ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t));
    if (!ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var->a_obj_ezsigndocument = a_obj_ezsigndocument;

    return ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var;
}


void ezsignfolder_get_ezsigndocuments_v1_response_m_payload_free(ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t *ezsignfolder_get_ezsigndocuments_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_ezsigndocuments_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument) {
        list_ForEach(listEntry, ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument) {
            ezsigndocument_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument);
        ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument = NULL;
    }
    free(ezsignfolder_get_ezsigndocuments_v1_response_m_payload);
}

cJSON *ezsignfolder_get_ezsigndocuments_v1_response_m_payload_convertToJSON(ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t *ezsignfolder_get_ezsigndocuments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument
    if (!ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument) {
        goto fail;
    }
    
    cJSON *a_obj_ezsigndocument = cJSON_AddArrayToObject(item, "a_objEzsigndocument");
    if(a_obj_ezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndocumentListEntry;
    if (ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument) {
    list_ForEach(a_obj_ezsigndocumentListEntry, ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument) {
    cJSON *itemLocal = ezsigndocument_response_compound_convertToJSON(a_obj_ezsigndocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t *ezsignfolder_get_ezsigndocuments_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_ezsigndocuments_v1_response_m_payloadJSON){

    ezsignfolder_get_ezsigndocuments_v1_response_m_payload_t *ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var = NULL;

    // ezsignfolder_get_ezsigndocuments_v1_response_m_payload->a_obj_ezsigndocument
    cJSON *a_obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_ezsigndocuments_v1_response_m_payloadJSON, "a_objEzsigndocument");
    if (!a_obj_ezsigndocument) {
        goto end;
    }

    list_t *a_obj_ezsigndocumentList;
    
    cJSON *a_obj_ezsigndocument_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsigndocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndocument_local_nonprimitive,a_obj_ezsigndocument )
    {
        if(!cJSON_IsObject(a_obj_ezsigndocument_local_nonprimitive)){
            goto end;
        }
        ezsigndocument_response_compound_t *a_obj_ezsigndocumentItem = ezsigndocument_response_compound_parseFromJSON(a_obj_ezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezsigndocumentList, a_obj_ezsigndocumentItem);
    }


    ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var = ezsignfolder_get_ezsigndocuments_v1_response_m_payload_create (
        a_obj_ezsigndocumentList
        );

    return ezsignfolder_get_ezsigndocuments_v1_response_m_payload_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_ezsignsignatures_v1_response_m_payload.h"



ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_v1_response_m_payload_create(
    list_t *a_obj_ezsignsignature
    ) {
    ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t));
    if (!ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var->a_obj_ezsignsignature = a_obj_ezsignsignature;

    return ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var;
}


void ezsigndocument_get_ezsignsignatures_v1_response_m_payload_free(ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_ezsignsignatures_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature) {
        list_ForEach(listEntry, ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature) {
            ezsignsignature_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature);
        ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature = NULL;
    }
    free(ezsigndocument_get_ezsignsignatures_v1_response_m_payload);
}

cJSON *ezsigndocument_get_ezsignsignatures_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature
    if (!ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignature = cJSON_AddArrayToObject(item, "a_objEzsignsignature");
    if(a_obj_ezsignsignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureListEntry;
    if (ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature) {
    list_ForEach(a_obj_ezsignsignatureListEntry, ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature) {
    cJSON *itemLocal = ezsignsignature_response_compound_convertToJSON(a_obj_ezsignsignatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignature, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignsignatures_v1_response_m_payloadJSON){

    ezsigndocument_get_ezsignsignatures_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature
    list_t *a_obj_ezsignsignatureList = NULL;

    // ezsigndocument_get_ezsignsignatures_v1_response_m_payload->a_obj_ezsignsignature
    cJSON *a_obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignsignatures_v1_response_m_payloadJSON, "a_objEzsignsignature");
    if (!a_obj_ezsignsignature) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignature_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignature)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignatureList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignature_local_nonprimitive,a_obj_ezsignsignature )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignature_local_nonprimitive)){
            goto end;
        }
        ezsignsignature_response_compound_t *a_obj_ezsignsignatureItem = ezsignsignature_response_compound_parseFromJSON(a_obj_ezsignsignature_local_nonprimitive);

        list_addElement(a_obj_ezsignsignatureList, a_obj_ezsignsignatureItem);
    }


    ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var = ezsigndocument_get_ezsignsignatures_v1_response_m_payload_create (
        a_obj_ezsignsignatureList
        );

    return ezsigndocument_get_ezsignsignatures_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignsignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignatureList) {
            ezsignsignature_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignatureList);
        a_obj_ezsignsignatureList = NULL;
    }
    return NULL;

}

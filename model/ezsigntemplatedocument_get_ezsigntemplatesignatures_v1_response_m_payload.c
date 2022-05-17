#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload.h"



ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplatesignature
    ) {
    ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var->a_obj_ezsigntemplatesignature = a_obj_ezsigntemplatesignature;

    return ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var;
}


void ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_free(ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature) {
        list_ForEach(listEntry, ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature) {
            ezsigntemplatesignature_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature);
        ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature = NULL;
    }
    free(ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature
    if (!ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesignature = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesignature");
    if(a_obj_ezsigntemplatesignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignatureListEntry;
    if (ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature) {
    list_ForEach(a_obj_ezsigntemplatesignatureListEntry, ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature) {
    cJSON *itemLocal = ezsigntemplatesignature_response_compound_convertToJSON(a_obj_ezsigntemplatesignatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesignature, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payloadJSON){

    ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature
    list_t *a_obj_ezsigntemplatesignatureList = NULL;

    // ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload->a_obj_ezsigntemplatesignature
    cJSON *a_obj_ezsigntemplatesignature = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payloadJSON, "a_objEzsigntemplatesignature");
    if (!a_obj_ezsigntemplatesignature) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatesignature_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesignature)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignatureList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesignature_local_nonprimitive,a_obj_ezsigntemplatesignature )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesignature_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesignature_response_compound_t *a_obj_ezsigntemplatesignatureItem = ezsigntemplatesignature_response_compound_parseFromJSON(a_obj_ezsigntemplatesignature_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignatureList, a_obj_ezsigntemplatesignatureItem);
    }


    ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var = ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_create (
        a_obj_ezsigntemplatesignatureList
        );

    return ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplatesignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignatureList) {
            ezsigntemplatesignature_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignatureList);
        a_obj_ezsigntemplatesignatureList = NULL;
    }
    return NULL;

}

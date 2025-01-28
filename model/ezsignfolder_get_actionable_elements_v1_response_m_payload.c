#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_actionable_elements_v1_response_m_payload.h"



static ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsignsignature,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_actionable_elements_v1_response_m_payload_t));
    if (!ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var->a_obj_ezsignsignature = a_obj_ezsignsignature;
    ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload_create(
    list_t *a_obj_ezsignsignature,
    list_t *a_obj_ezsignformfieldgroup
    ) {
    return ezsignfolder_get_actionable_elements_v1_response_m_payload_create_internal (
        a_obj_ezsignsignature,
        a_obj_ezsignformfieldgroup
        );
}

void ezsignfolder_get_actionable_elements_v1_response_m_payload_free(ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_actionable_elements_v1_response_m_payload){
        return ;
    }
    if(ezsignfolder_get_actionable_elements_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_get_actionable_elements_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature) {
        list_ForEach(listEntry, ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature) {
            ezsignsignature_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature);
        ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature = NULL;
    }
    if (ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
            ezsignformfieldgroup_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup);
        ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup = NULL;
    }
    free(ezsignfolder_get_actionable_elements_v1_response_m_payload);
}

cJSON *ezsignfolder_get_actionable_elements_v1_response_m_payload_convertToJSON(ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature
    if (!ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignature = cJSON_AddArrayToObject(item, "a_objEzsignsignature");
    if(a_obj_ezsignsignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureListEntry;
    if (ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature) {
    list_ForEach(a_obj_ezsignsignatureListEntry, ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature) {
    cJSON *itemLocal = ezsignsignature_response_compound_convertToJSON(a_obj_ezsignsignatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignature, itemLocal);
    }
    }


    // ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup
    if (!ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = ezsignformfieldgroup_response_compound_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_actionable_elements_v1_response_m_payloadJSON){

    ezsignfolder_get_actionable_elements_v1_response_m_payload_t *ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature
    list_t *a_obj_ezsignsignatureList = NULL;

    // define the local list for ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignsignature
    cJSON *a_obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_actionable_elements_v1_response_m_payloadJSON, "a_objEzsignsignature");
    if (cJSON_IsNull(a_obj_ezsignsignature)) {
        a_obj_ezsignsignature = NULL;
    }
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

    // ezsignfolder_get_actionable_elements_v1_response_m_payload->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_actionable_elements_v1_response_m_payloadJSON, "a_objEzsignformfieldgroup");
    if (cJSON_IsNull(a_obj_ezsignformfieldgroup)) {
        a_obj_ezsignformfieldgroup = NULL;
    }
    if (!a_obj_ezsignformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroup_local_nonprimitive,a_obj_ezsignformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroup_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroup_response_compound_t *a_obj_ezsignformfieldgroupItem = ezsignformfieldgroup_response_compound_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }


    ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var = ezsignfolder_get_actionable_elements_v1_response_m_payload_create_internal (
        a_obj_ezsignsignatureList,
        a_obj_ezsignformfieldgroupList
        );

    return ezsignfolder_get_actionable_elements_v1_response_m_payload_local_var;
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
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            ezsignformfieldgroup_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    return NULL;

}

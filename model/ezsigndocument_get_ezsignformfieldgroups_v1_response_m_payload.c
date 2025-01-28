#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload.h"



static ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t));
    if (!ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_create(
    list_t *a_obj_ezsignformfieldgroup
    ) {
    return ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_create_internal (
        a_obj_ezsignformfieldgroup
        );
}

void ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_free(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload){
        return ;
    }
    if(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
            ezsignformfieldgroup_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup);
        ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup = NULL;
    }
    free(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload);
}

cJSON *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup
    if (!ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup) {
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

ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payloadJSON){

    ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payloadJSON, "a_objEzsignformfieldgroup");
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


    ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var = ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_create_internal (
        a_obj_ezsignformfieldgroupList
        );

    return ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_local_var;
end:
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

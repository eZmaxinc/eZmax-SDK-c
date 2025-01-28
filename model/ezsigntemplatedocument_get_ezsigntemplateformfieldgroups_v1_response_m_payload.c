#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload.h"



static ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsigntemplateformfieldgroup
    ) {
    ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var->a_obj_ezsigntemplateformfieldgroup = a_obj_ezsigntemplateformfieldgroup;

    ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplateformfieldgroup
    ) {
    return ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_create_internal (
        a_obj_ezsigntemplateformfieldgroup
        );
}

void ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_free(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup) {
        list_ForEach(listEntry, ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup) {
            ezsigntemplateformfieldgroup_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup);
        ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup = NULL;
    }
    free(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup
    if (!ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroup");
    if(a_obj_ezsigntemplateformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupListEntry;
    if (ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupListEntry, ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup) {
    cJSON *itemLocal = ezsigntemplateformfieldgroup_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payloadJSON){

    ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup
    list_t *a_obj_ezsigntemplateformfieldgroupList = NULL;

    // ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload->a_obj_ezsigntemplateformfieldgroup
    cJSON *a_obj_ezsigntemplateformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payloadJSON, "a_objEzsigntemplateformfieldgroup");
    if (cJSON_IsNull(a_obj_ezsigntemplateformfieldgroup)) {
        a_obj_ezsigntemplateformfieldgroup = NULL;
    }
    if (!a_obj_ezsigntemplateformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive,a_obj_ezsigntemplateformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfieldgroup_response_compound_t *a_obj_ezsigntemplateformfieldgroupItem = ezsigntemplateformfieldgroup_response_compound_parseFromJSON(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupList, a_obj_ezsigntemplateformfieldgroupItem);
    }


    ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var = ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_create_internal (
        a_obj_ezsigntemplateformfieldgroupList
        );

    return ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplateformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupList) {
            ezsigntemplateformfieldgroup_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupList);
        a_obj_ezsigntemplateformfieldgroupList = NULL;
    }
    return NULL;

}

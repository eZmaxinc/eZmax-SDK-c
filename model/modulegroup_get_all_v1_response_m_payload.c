#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulegroup_get_all_v1_response_m_payload.h"



modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload_create(
    list_t *a_obj_modulegroup
    ) {
    modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload_local_var = malloc(sizeof(modulegroup_get_all_v1_response_m_payload_t));
    if (!modulegroup_get_all_v1_response_m_payload_local_var) {
        return NULL;
    }
    modulegroup_get_all_v1_response_m_payload_local_var->a_obj_modulegroup = a_obj_modulegroup;

    return modulegroup_get_all_v1_response_m_payload_local_var;
}


void modulegroup_get_all_v1_response_m_payload_free(modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload) {
    if(NULL == modulegroup_get_all_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup) {
        list_ForEach(listEntry, modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup) {
            modulegroup_response_compound_free(listEntry->data);
        }
        list_freeList(modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup);
        modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup = NULL;
    }
    free(modulegroup_get_all_v1_response_m_payload);
}

cJSON *modulegroup_get_all_v1_response_m_payload_convertToJSON(modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup
    if (!modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup) {
        goto fail;
    }
    cJSON *a_obj_modulegroup = cJSON_AddArrayToObject(item, "a_objModulegroup");
    if(a_obj_modulegroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_modulegroupListEntry;
    if (modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup) {
    list_ForEach(a_obj_modulegroupListEntry, modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup) {
    cJSON *itemLocal = modulegroup_response_compound_convertToJSON(a_obj_modulegroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_modulegroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload_parseFromJSON(cJSON *modulegroup_get_all_v1_response_m_payloadJSON){

    modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload_local_var = NULL;

    // define the local list for modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup
    list_t *a_obj_modulegroupList = NULL;

    // modulegroup_get_all_v1_response_m_payload->a_obj_modulegroup
    cJSON *a_obj_modulegroup = cJSON_GetObjectItemCaseSensitive(modulegroup_get_all_v1_response_m_payloadJSON, "a_objModulegroup");
    if (!a_obj_modulegroup) {
        goto end;
    }

    
    cJSON *a_obj_modulegroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_modulegroup)){
        goto end; //nonprimitive container
    }

    a_obj_modulegroupList = list_createList();

    cJSON_ArrayForEach(a_obj_modulegroup_local_nonprimitive,a_obj_modulegroup )
    {
        if(!cJSON_IsObject(a_obj_modulegroup_local_nonprimitive)){
            goto end;
        }
        modulegroup_response_compound_t *a_obj_modulegroupItem = modulegroup_response_compound_parseFromJSON(a_obj_modulegroup_local_nonprimitive);

        list_addElement(a_obj_modulegroupList, a_obj_modulegroupItem);
    }


    modulegroup_get_all_v1_response_m_payload_local_var = modulegroup_get_all_v1_response_m_payload_create (
        a_obj_modulegroupList
        );

    return modulegroup_get_all_v1_response_m_payload_local_var;
end:
    if (a_obj_modulegroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_modulegroupList) {
            modulegroup_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_modulegroupList);
        a_obj_modulegroupList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_get_permissions_v1_response_m_payload.h"



apikey_get_permissions_v1_response_m_payload_t *apikey_get_permissions_v1_response_m_payload_create(
    list_t *a_obj_modulegroup
    ) {
    apikey_get_permissions_v1_response_m_payload_t *apikey_get_permissions_v1_response_m_payload_local_var = malloc(sizeof(apikey_get_permissions_v1_response_m_payload_t));
    if (!apikey_get_permissions_v1_response_m_payload_local_var) {
        return NULL;
    }
    apikey_get_permissions_v1_response_m_payload_local_var->a_obj_modulegroup = a_obj_modulegroup;

    return apikey_get_permissions_v1_response_m_payload_local_var;
}


void apikey_get_permissions_v1_response_m_payload_free(apikey_get_permissions_v1_response_m_payload_t *apikey_get_permissions_v1_response_m_payload) {
    if(NULL == apikey_get_permissions_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
        list_ForEach(listEntry, apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
            modulegroup_response_compound_free(listEntry->data);
        }
        list_freeList(apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup);
        apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup = NULL;
    }
    free(apikey_get_permissions_v1_response_m_payload);
}

cJSON *apikey_get_permissions_v1_response_m_payload_convertToJSON(apikey_get_permissions_v1_response_m_payload_t *apikey_get_permissions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup
    if (!apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
        goto fail;
    }
    cJSON *a_obj_modulegroup = cJSON_AddArrayToObject(item, "a_objModulegroup");
    if(a_obj_modulegroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_modulegroupListEntry;
    if (apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
    list_ForEach(a_obj_modulegroupListEntry, apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
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

apikey_get_permissions_v1_response_m_payload_t *apikey_get_permissions_v1_response_m_payload_parseFromJSON(cJSON *apikey_get_permissions_v1_response_m_payloadJSON){

    apikey_get_permissions_v1_response_m_payload_t *apikey_get_permissions_v1_response_m_payload_local_var = NULL;

    // define the local list for apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup
    list_t *a_obj_modulegroupList = NULL;

    // apikey_get_permissions_v1_response_m_payload->a_obj_modulegroup
    cJSON *a_obj_modulegroup = cJSON_GetObjectItemCaseSensitive(apikey_get_permissions_v1_response_m_payloadJSON, "a_objModulegroup");
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


    apikey_get_permissions_v1_response_m_payload_local_var = apikey_get_permissions_v1_response_m_payload_create (
        a_obj_modulegroupList
        );

    return apikey_get_permissions_v1_response_m_payload_local_var;
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

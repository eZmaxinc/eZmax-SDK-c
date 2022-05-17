#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_obj_debug_payload.h"



common_response_obj_debug_payload_t *common_response_obj_debug_payload_create(
    int i_version_min,
    int i_version_max,
    list_t *a_required_permission
    ) {
    common_response_obj_debug_payload_t *common_response_obj_debug_payload_local_var = malloc(sizeof(common_response_obj_debug_payload_t));
    if (!common_response_obj_debug_payload_local_var) {
        return NULL;
    }
    common_response_obj_debug_payload_local_var->i_version_min = i_version_min;
    common_response_obj_debug_payload_local_var->i_version_max = i_version_max;
    common_response_obj_debug_payload_local_var->a_required_permission = a_required_permission;

    return common_response_obj_debug_payload_local_var;
}


void common_response_obj_debug_payload_free(common_response_obj_debug_payload_t *common_response_obj_debug_payload) {
    if(NULL == common_response_obj_debug_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_obj_debug_payload->a_required_permission) {
        list_ForEach(listEntry, common_response_obj_debug_payload->a_required_permission) {
            free(listEntry->data);
        }
        list_freeList(common_response_obj_debug_payload->a_required_permission);
        common_response_obj_debug_payload->a_required_permission = NULL;
    }
    free(common_response_obj_debug_payload);
}

cJSON *common_response_obj_debug_payload_convertToJSON(common_response_obj_debug_payload_t *common_response_obj_debug_payload) {
    cJSON *item = cJSON_CreateObject();

    // common_response_obj_debug_payload->i_version_min
    if (!common_response_obj_debug_payload->i_version_min) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iVersionMin", common_response_obj_debug_payload->i_version_min) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug_payload->i_version_max
    if (!common_response_obj_debug_payload->i_version_max) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iVersionMax", common_response_obj_debug_payload->i_version_max) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug_payload->a_required_permission
    if (!common_response_obj_debug_payload->a_required_permission) {
        goto fail;
    }
    cJSON *a_required_permission = cJSON_AddArrayToObject(item, "a_RequiredPermission");
    if(a_required_permission == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_required_permissionListEntry;
    list_ForEach(a_required_permissionListEntry, common_response_obj_debug_payload->a_required_permission) {
    if(cJSON_AddNumberToObject(a_required_permission, "", *(double *)a_required_permissionListEntry->data) == NULL)
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

common_response_obj_debug_payload_t *common_response_obj_debug_payload_parseFromJSON(cJSON *common_response_obj_debug_payloadJSON){

    common_response_obj_debug_payload_t *common_response_obj_debug_payload_local_var = NULL;

    // define the local list for common_response_obj_debug_payload->a_required_permission
    list_t *a_required_permissionList = NULL;

    // common_response_obj_debug_payload->i_version_min
    cJSON *i_version_min = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payloadJSON, "iVersionMin");
    if (!i_version_min) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_version_min))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug_payload->i_version_max
    cJSON *i_version_max = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payloadJSON, "iVersionMax");
    if (!i_version_max) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_version_max))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug_payload->a_required_permission
    cJSON *a_required_permission = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payloadJSON, "a_RequiredPermission");
    if (!a_required_permission) {
        goto end;
    }

    
    cJSON *a_required_permission_local = NULL;
    if(!cJSON_IsArray(a_required_permission)) {
        goto end;//primitive container
    }
    a_required_permissionList = list_createList();

    cJSON_ArrayForEach(a_required_permission_local, a_required_permission)
    {
        if(!cJSON_IsNumber(a_required_permission_local))
        {
            goto end;
        }
        double *a_required_permission_local_value = (double *)calloc(1, sizeof(double));
        if(!a_required_permission_local_value)
        {
            goto end;
        }
        *a_required_permission_local_value = a_required_permission_local->valuedouble;
        list_addElement(a_required_permissionList , a_required_permission_local_value);
    }


    common_response_obj_debug_payload_local_var = common_response_obj_debug_payload_create (
        i_version_min->valuedouble,
        i_version_max->valuedouble,
        a_required_permissionList
        );

    return common_response_obj_debug_payload_local_var;
end:
    if (a_required_permissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_required_permissionList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_required_permissionList);
        a_required_permissionList = NULL;
    }
    return NULL;

}

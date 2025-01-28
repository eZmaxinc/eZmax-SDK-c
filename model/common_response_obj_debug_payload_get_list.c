#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_obj_debug_payload_get_list.h"



static common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_create_internal(
    int i_version_min,
    int i_version_max,
    list_t *a_required_permission,
    int b_version_deprecated,
    char *dt_response_date,
    common_response_filter_t *a_filter,
    list_t* a_order_by,
    int i_row_max,
    int i_row_offset
    ) {
    common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_local_var = malloc(sizeof(common_response_obj_debug_payload_get_list_t));
    if (!common_response_obj_debug_payload_get_list_local_var) {
        return NULL;
    }
    common_response_obj_debug_payload_get_list_local_var->i_version_min = i_version_min;
    common_response_obj_debug_payload_get_list_local_var->i_version_max = i_version_max;
    common_response_obj_debug_payload_get_list_local_var->a_required_permission = a_required_permission;
    common_response_obj_debug_payload_get_list_local_var->b_version_deprecated = b_version_deprecated;
    common_response_obj_debug_payload_get_list_local_var->dt_response_date = dt_response_date;
    common_response_obj_debug_payload_get_list_local_var->a_filter = a_filter;
    common_response_obj_debug_payload_get_list_local_var->a_order_by = a_order_by;
    common_response_obj_debug_payload_get_list_local_var->i_row_max = i_row_max;
    common_response_obj_debug_payload_get_list_local_var->i_row_offset = i_row_offset;

    common_response_obj_debug_payload_get_list_local_var->_library_owned = 1;
    return common_response_obj_debug_payload_get_list_local_var;
}

__attribute__((deprecated)) common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_create(
    int i_version_min,
    int i_version_max,
    list_t *a_required_permission,
    int b_version_deprecated,
    char *dt_response_date,
    common_response_filter_t *a_filter,
    list_t* a_order_by,
    int i_row_max,
    int i_row_offset
    ) {
    return common_response_obj_debug_payload_get_list_create_internal (
        i_version_min,
        i_version_max,
        a_required_permission,
        b_version_deprecated,
        dt_response_date,
        a_filter,
        a_order_by,
        i_row_max,
        i_row_offset
        );
}

void common_response_obj_debug_payload_get_list_free(common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list) {
    if(NULL == common_response_obj_debug_payload_get_list){
        return ;
    }
    if(common_response_obj_debug_payload_get_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_response_obj_debug_payload_get_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_obj_debug_payload_get_list->a_required_permission) {
        list_ForEach(listEntry, common_response_obj_debug_payload_get_list->a_required_permission) {
            free(listEntry->data);
        }
        list_freeList(common_response_obj_debug_payload_get_list->a_required_permission);
        common_response_obj_debug_payload_get_list->a_required_permission = NULL;
    }
    if (common_response_obj_debug_payload_get_list->dt_response_date) {
        free(common_response_obj_debug_payload_get_list->dt_response_date);
        common_response_obj_debug_payload_get_list->dt_response_date = NULL;
    }
    if (common_response_obj_debug_payload_get_list->a_filter) {
        common_response_filter_free(common_response_obj_debug_payload_get_list->a_filter);
        common_response_obj_debug_payload_get_list->a_filter = NULL;
    }
    if (common_response_obj_debug_payload_get_list->a_order_by) {
        list_ForEach(listEntry, common_response_obj_debug_payload_get_list->a_order_by) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(common_response_obj_debug_payload_get_list->a_order_by);
        common_response_obj_debug_payload_get_list->a_order_by = NULL;
    }
    free(common_response_obj_debug_payload_get_list);
}

cJSON *common_response_obj_debug_payload_get_list_convertToJSON(common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list) {
    cJSON *item = cJSON_CreateObject();

    // common_response_obj_debug_payload_get_list->i_version_min
    if (!common_response_obj_debug_payload_get_list->i_version_min) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iVersionMin", common_response_obj_debug_payload_get_list->i_version_min) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug_payload_get_list->i_version_max
    if (!common_response_obj_debug_payload_get_list->i_version_max) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iVersionMax", common_response_obj_debug_payload_get_list->i_version_max) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug_payload_get_list->a_required_permission
    if (!common_response_obj_debug_payload_get_list->a_required_permission) {
        goto fail;
    }
    cJSON *a_required_permission = cJSON_AddArrayToObject(item, "a_RequiredPermission");
    if(a_required_permission == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_required_permissionListEntry;
    list_ForEach(a_required_permissionListEntry, common_response_obj_debug_payload_get_list->a_required_permission) {
    if(cJSON_AddNumberToObject(a_required_permission, "", *(double *)a_required_permissionListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // common_response_obj_debug_payload_get_list->b_version_deprecated
    if (!common_response_obj_debug_payload_get_list->b_version_deprecated) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bVersionDeprecated", common_response_obj_debug_payload_get_list->b_version_deprecated) == NULL) {
    goto fail; //Bool
    }


    // common_response_obj_debug_payload_get_list->dt_response_date
    if (!common_response_obj_debug_payload_get_list->dt_response_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtResponseDate", common_response_obj_debug_payload_get_list->dt_response_date) == NULL) {
    goto fail; //String
    }


    // common_response_obj_debug_payload_get_list->a_filter
    if (!common_response_obj_debug_payload_get_list->a_filter) {
        goto fail;
    }
    cJSON *a_filter_local_JSON = common_response_filter_convertToJSON(common_response_obj_debug_payload_get_list->a_filter);
    if(a_filter_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "a_Filter", a_filter_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_response_obj_debug_payload_get_list->a_order_by
    if (!common_response_obj_debug_payload_get_list->a_order_by) {
        goto fail;
    }
    cJSON *a_order_by = cJSON_AddObjectToObject(item, "a_OrderBy");
    if(a_order_by == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = a_order_by;
    listEntry_t *a_order_byListEntry;
    if (common_response_obj_debug_payload_get_list->a_order_by) {
    list_ForEach(a_order_byListEntry, common_response_obj_debug_payload_get_list->a_order_by) {
        keyValuePair_t *localKeyValue = a_order_byListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }


    // common_response_obj_debug_payload_get_list->i_row_max
    if (!common_response_obj_debug_payload_get_list->i_row_max) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowMax", common_response_obj_debug_payload_get_list->i_row_max) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug_payload_get_list->i_row_offset
    if (!common_response_obj_debug_payload_get_list->i_row_offset) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowOffset", common_response_obj_debug_payload_get_list->i_row_offset) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_parseFromJSON(cJSON *common_response_obj_debug_payload_get_listJSON){

    common_response_obj_debug_payload_get_list_t *common_response_obj_debug_payload_get_list_local_var = NULL;

    // define the local list for common_response_obj_debug_payload_get_list->a_required_permission
    list_t *a_required_permissionList = NULL;

    // define the local variable for common_response_obj_debug_payload_get_list->a_filter
    common_response_filter_t *a_filter_local_nonprim = NULL;

    // define the local map for common_response_obj_debug_payload_get_list->a_order_by
    list_t *a_order_byList = NULL;

    // common_response_obj_debug_payload_get_list->i_version_min
    cJSON *i_version_min = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "iVersionMin");
    if (cJSON_IsNull(i_version_min)) {
        i_version_min = NULL;
    }
    if (!i_version_min) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_version_min))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug_payload_get_list->i_version_max
    cJSON *i_version_max = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "iVersionMax");
    if (cJSON_IsNull(i_version_max)) {
        i_version_max = NULL;
    }
    if (!i_version_max) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_version_max))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug_payload_get_list->a_required_permission
    cJSON *a_required_permission = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "a_RequiredPermission");
    if (cJSON_IsNull(a_required_permission)) {
        a_required_permission = NULL;
    }
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
        double *a_required_permission_local_value = calloc(1, sizeof(double));
        if(!a_required_permission_local_value)
        {
            goto end;
        }
        *a_required_permission_local_value = a_required_permission_local->valuedouble;
        list_addElement(a_required_permissionList , a_required_permission_local_value);
    }

    // common_response_obj_debug_payload_get_list->b_version_deprecated
    cJSON *b_version_deprecated = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "bVersionDeprecated");
    if (cJSON_IsNull(b_version_deprecated)) {
        b_version_deprecated = NULL;
    }
    if (!b_version_deprecated) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_version_deprecated))
    {
    goto end; //Bool
    }

    // common_response_obj_debug_payload_get_list->dt_response_date
    cJSON *dt_response_date = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "dtResponseDate");
    if (cJSON_IsNull(dt_response_date)) {
        dt_response_date = NULL;
    }
    if (!dt_response_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_response_date))
    {
    goto end; //String
    }

    // common_response_obj_debug_payload_get_list->a_filter
    cJSON *a_filter = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "a_Filter");
    if (cJSON_IsNull(a_filter)) {
        a_filter = NULL;
    }
    if (!a_filter) {
        goto end;
    }

    
    a_filter_local_nonprim = common_response_filter_parseFromJSON(a_filter); //nonprimitive

    // common_response_obj_debug_payload_get_list->a_order_by
    cJSON *a_order_by = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "a_OrderBy");
    if (cJSON_IsNull(a_order_by)) {
        a_order_by = NULL;
    }
    if (!a_order_by) {
        goto end;
    }

    
    cJSON *a_order_by_local_map = NULL;
    if(!cJSON_IsObject(a_order_by) && !cJSON_IsNull(a_order_by))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(a_order_by))
    {
        a_order_byList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(a_order_by_local_map, a_order_by)
        {
            cJSON *localMapObject = a_order_by_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(a_order_byList , localMapKeyPair);
        }
    }

    // common_response_obj_debug_payload_get_list->i_row_max
    cJSON *i_row_max = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "iRowMax");
    if (cJSON_IsNull(i_row_max)) {
        i_row_max = NULL;
    }
    if (!i_row_max) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_max))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug_payload_get_list->i_row_offset
    cJSON *i_row_offset = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_listJSON, "iRowOffset");
    if (cJSON_IsNull(i_row_offset)) {
        i_row_offset = NULL;
    }
    if (!i_row_offset) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_offset))
    {
    goto end; //Numeric
    }


    common_response_obj_debug_payload_get_list_local_var = common_response_obj_debug_payload_get_list_create_internal (
        i_version_min->valuedouble,
        i_version_max->valuedouble,
        a_required_permissionList,
        b_version_deprecated->valueint,
        strdup(dt_response_date->valuestring),
        a_filter_local_nonprim,
        a_order_byList,
        i_row_max->valuedouble,
        i_row_offset->valuedouble
        );

    return common_response_obj_debug_payload_get_list_local_var;
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
    if (a_filter_local_nonprim) {
        common_response_filter_free(a_filter_local_nonprim);
        a_filter_local_nonprim = NULL;
    }
    if (a_order_byList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_order_byList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(a_order_byList);
        a_order_byList = NULL;
    }
    return NULL;

}

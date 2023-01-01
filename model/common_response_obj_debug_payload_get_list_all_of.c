#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_obj_debug_payload_get_list_all_of.h"



common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of_create(
    common_response_filter_t *a_filter,
    list_t* a_order_by
    ) {
    common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of_local_var = malloc(sizeof(common_response_obj_debug_payload_get_list_all_of_t));
    if (!common_response_obj_debug_payload_get_list_all_of_local_var) {
        return NULL;
    }
    common_response_obj_debug_payload_get_list_all_of_local_var->a_filter = a_filter;
    common_response_obj_debug_payload_get_list_all_of_local_var->a_order_by = a_order_by;

    return common_response_obj_debug_payload_get_list_all_of_local_var;
}


void common_response_obj_debug_payload_get_list_all_of_free(common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of) {
    if(NULL == common_response_obj_debug_payload_get_list_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_obj_debug_payload_get_list_all_of->a_filter) {
        common_response_filter_free(common_response_obj_debug_payload_get_list_all_of->a_filter);
        common_response_obj_debug_payload_get_list_all_of->a_filter = NULL;
    }
    if (common_response_obj_debug_payload_get_list_all_of->a_order_by) {
        list_ForEach(listEntry, common_response_obj_debug_payload_get_list_all_of->a_order_by) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(common_response_obj_debug_payload_get_list_all_of->a_order_by);
        common_response_obj_debug_payload_get_list_all_of->a_order_by = NULL;
    }
    free(common_response_obj_debug_payload_get_list_all_of);
}

cJSON *common_response_obj_debug_payload_get_list_all_of_convertToJSON(common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of) {
    cJSON *item = cJSON_CreateObject();

    // common_response_obj_debug_payload_get_list_all_of->a_filter
    if (!common_response_obj_debug_payload_get_list_all_of->a_filter) {
        goto fail;
    }
    cJSON *a_filter_local_JSON = common_response_filter_convertToJSON(common_response_obj_debug_payload_get_list_all_of->a_filter);
    if(a_filter_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "a_Filter", a_filter_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_response_obj_debug_payload_get_list_all_of->a_order_by
    if (!common_response_obj_debug_payload_get_list_all_of->a_order_by) {
        goto fail;
    }
    cJSON *a_order_by = cJSON_AddObjectToObject(item, "a_OrderBy");
    if(a_order_by == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = a_order_by;
    listEntry_t *a_order_byListEntry;
    if (common_response_obj_debug_payload_get_list_all_of->a_order_by) {
    list_ForEach(a_order_byListEntry, common_response_obj_debug_payload_get_list_all_of->a_order_by) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)a_order_byListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of_parseFromJSON(cJSON *common_response_obj_debug_payload_get_list_all_ofJSON){

    common_response_obj_debug_payload_get_list_all_of_t *common_response_obj_debug_payload_get_list_all_of_local_var = NULL;

    // define the local variable for common_response_obj_debug_payload_get_list_all_of->a_filter
    common_response_filter_t *a_filter_local_nonprim = NULL;

    // define the local map for common_response_obj_debug_payload_get_list_all_of->a_order_by
    list_t *a_order_byList = NULL;

    // common_response_obj_debug_payload_get_list_all_of->a_filter
    cJSON *a_filter = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_list_all_ofJSON, "a_Filter");
    if (!a_filter) {
        goto end;
    }

    
    a_filter_local_nonprim = common_response_filter_parseFromJSON(a_filter); //nonprimitive

    // common_response_obj_debug_payload_get_list_all_of->a_order_by
    cJSON *a_order_by = cJSON_GetObjectItemCaseSensitive(common_response_obj_debug_payload_get_list_all_ofJSON, "a_OrderBy");
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


    common_response_obj_debug_payload_get_list_all_of_local_var = common_response_obj_debug_payload_get_list_all_of_create (
        a_filter_local_nonprim,
        a_order_byList
        );

    return common_response_obj_debug_payload_get_list_all_of_local_var;
end:
    if (a_filter_local_nonprim) {
        common_response_filter_free(a_filter_local_nonprim);
        a_filter_local_nonprim = NULL;
    }
    if (a_order_byList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_order_byList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
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

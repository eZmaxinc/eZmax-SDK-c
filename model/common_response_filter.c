#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_filter.h"



common_response_filter_t *common_response_filter_create(
    list_t* a_auto_type,
    list_t* a_enum
    ) {
    common_response_filter_t *common_response_filter_local_var = malloc(sizeof(common_response_filter_t));
    if (!common_response_filter_local_var) {
        return NULL;
    }
    common_response_filter_local_var->a_auto_type = a_auto_type;
    common_response_filter_local_var->a_enum = a_enum;

    return common_response_filter_local_var;
}


void common_response_filter_free(common_response_filter_t *common_response_filter) {
    if(NULL == common_response_filter){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_filter->a_auto_type) {
        list_ForEach(listEntry, common_response_filter->a_auto_type) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(common_response_filter->a_auto_type);
        common_response_filter->a_auto_type = NULL;
    }
    if (common_response_filter->a_enum) {
        list_ForEach(listEntry, common_response_filter->a_enum) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(common_response_filter->a_enum);
        common_response_filter->a_enum = NULL;
    }
    free(common_response_filter);
}

cJSON *common_response_filter_convertToJSON(common_response_filter_t *common_response_filter) {
    cJSON *item = cJSON_CreateObject();

    // common_response_filter->a_auto_type
    if(common_response_filter->a_auto_type) { 
    cJSON *a_auto_type = cJSON_AddObjectToObject(item, "a_AutoType");
    if(a_auto_type == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = a_auto_type;
    listEntry_t *a_auto_typeListEntry;
    if (common_response_filter->a_auto_type) {
    list_ForEach(a_auto_typeListEntry, common_response_filter->a_auto_type) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)a_auto_typeListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // common_response_filter->a_enum
    if(common_response_filter->a_enum) { 
    cJSON *a_enum = cJSON_AddObjectToObject(item, "a_Enum");
    if(a_enum == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = a_enum;
    listEntry_t *a_enumListEntry;
    if (common_response_filter->a_enum) {
    list_ForEach(a_enumListEntry, common_response_filter->a_enum) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)a_enumListEntry->data;
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

common_response_filter_t *common_response_filter_parseFromJSON(cJSON *common_response_filterJSON){

    common_response_filter_t *common_response_filter_local_var = NULL;

    // common_response_filter->a_auto_type
    cJSON *a_auto_type = cJSON_GetObjectItemCaseSensitive(common_response_filterJSON, "a_AutoType");
    list_t *a_auto_typeList;
    if (a_auto_type) { 
    cJSON *a_auto_type_local_map;
    if(!cJSON_IsObject(a_auto_type)) {
        goto end;//primitive map container
    }
    a_auto_typeList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(a_auto_type_local_map, a_auto_type)
    {
		cJSON *localMapObject = a_auto_type_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(a_auto_typeList , localMapKeyPair);
    }
    }

    // common_response_filter->a_enum
    cJSON *a_enum = cJSON_GetObjectItemCaseSensitive(common_response_filterJSON, "a_Enum");
    list_t *a_enumList;
    if (a_enum) { 
    cJSON *a_enum_local_map;
    if(!cJSON_IsObject(a_enum)) {
        goto end;//primitive map container
    }
    a_enumList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(a_enum_local_map, a_enum)
    {
		cJSON *localMapObject = a_enum_local_map;
        list_addElement(a_enumList , localMapKeyPair);
    }
    }


    common_response_filter_local_var = common_response_filter_create (
        a_auto_type ? a_auto_typeList : NULL,
        a_enum ? a_enumList : NULL
        );

    return common_response_filter_local_var;
end:
    return NULL;

}

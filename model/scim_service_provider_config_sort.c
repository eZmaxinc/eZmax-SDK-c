#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_sort.h"



static scim_service_provider_config_sort_t *scim_service_provider_config_sort_create_internal(
    int *supported
    ) {
    scim_service_provider_config_sort_t *scim_service_provider_config_sort_local_var = malloc(sizeof(scim_service_provider_config_sort_t));
    if (!scim_service_provider_config_sort_local_var) {
        return NULL;
    }
    memset(scim_service_provider_config_sort_local_var, 0, sizeof(scim_service_provider_config_sort_t));
    scim_service_provider_config_sort_local_var->_library_owned = 1;
    scim_service_provider_config_sort_local_var->supported = supported;
    return scim_service_provider_config_sort_local_var;
}

__attribute__((deprecated)) scim_service_provider_config_sort_t *scim_service_provider_config_sort_create(
    int *supported
    ) {
    int *supported_copy = NULL;
    if (supported) {
        supported_copy = malloc(sizeof(int));
        if (supported_copy) *supported_copy = *supported;
    }
    scim_service_provider_config_sort_t *result = scim_service_provider_config_sort_create_internal (
        supported_copy
        );
    if (!result) {
        free(supported_copy);
    }
    return result;
}

void scim_service_provider_config_sort_free(scim_service_provider_config_sort_t *scim_service_provider_config_sort) {
    if(NULL == scim_service_provider_config_sort){
        return ;
    }
    if(scim_service_provider_config_sort->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_service_provider_config_sort_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_service_provider_config_sort->supported) {
        free(scim_service_provider_config_sort->supported);
        scim_service_provider_config_sort->supported = NULL;
    }
    free(scim_service_provider_config_sort);
}

cJSON *scim_service_provider_config_sort_convertToJSON(scim_service_provider_config_sort_t *scim_service_provider_config_sort) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_sort->supported
    if (!scim_service_provider_config_sort->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", *scim_service_provider_config_sort->supported) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_sort_t *scim_service_provider_config_sort_parseFromJSON(cJSON *scim_service_provider_config_sortJSON){

    scim_service_provider_config_sort_t *scim_service_provider_config_sort_local_var = NULL;

    // define the local variable for scim_service_provider_config_sort->supported
    int *supported_local_var = NULL;

    // scim_service_provider_config_sort->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_sortJSON, "supported");
    if (cJSON_IsNull(supported)) {
        supported = NULL;
    }
    if (!supported) {
        goto end;
    }

    
    if(!cJSON_IsBool(supported))
    {
    goto end; //Bool
    }
    supported_local_var = malloc(sizeof(int));
    if(!supported_local_var)
    {
        goto end;
    }
    *supported_local_var = supported->valueint;



    scim_service_provider_config_sort_local_var = scim_service_provider_config_sort_create_internal (
        supported_local_var
        );

    if (!scim_service_provider_config_sort_local_var) {
        goto end;
    }

    return scim_service_provider_config_sort_local_var;
end:
    if (supported_local_var) {
        free(supported_local_var);
        supported_local_var = NULL;
    }
    return NULL;

}

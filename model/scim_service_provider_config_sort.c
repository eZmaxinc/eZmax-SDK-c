#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_sort.h"



scim_service_provider_config_sort_t *scim_service_provider_config_sort_create(
    int supported
    ) {
    scim_service_provider_config_sort_t *scim_service_provider_config_sort_local_var = malloc(sizeof(scim_service_provider_config_sort_t));
    if (!scim_service_provider_config_sort_local_var) {
        return NULL;
    }
    scim_service_provider_config_sort_local_var->supported = supported;

    return scim_service_provider_config_sort_local_var;
}


void scim_service_provider_config_sort_free(scim_service_provider_config_sort_t *scim_service_provider_config_sort) {
    if(NULL == scim_service_provider_config_sort){
        return ;
    }
    listEntry_t *listEntry;
    free(scim_service_provider_config_sort);
}

cJSON *scim_service_provider_config_sort_convertToJSON(scim_service_provider_config_sort_t *scim_service_provider_config_sort) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_sort->supported
    if (!scim_service_provider_config_sort->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", scim_service_provider_config_sort->supported) == NULL) {
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

    // scim_service_provider_config_sort->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_sortJSON, "supported");
    if (!supported) {
        goto end;
    }

    
    if(!cJSON_IsBool(supported))
    {
    goto end; //Bool
    }


    scim_service_provider_config_sort_local_var = scim_service_provider_config_sort_create (
        supported->valueint
        );

    return scim_service_provider_config_sort_local_var;
end:
    return NULL;

}

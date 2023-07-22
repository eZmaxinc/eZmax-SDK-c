#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_patch.h"



scim_service_provider_config_patch_t *scim_service_provider_config_patch_create(
    int supported
    ) {
    scim_service_provider_config_patch_t *scim_service_provider_config_patch_local_var = malloc(sizeof(scim_service_provider_config_patch_t));
    if (!scim_service_provider_config_patch_local_var) {
        return NULL;
    }
    scim_service_provider_config_patch_local_var->supported = supported;

    return scim_service_provider_config_patch_local_var;
}


void scim_service_provider_config_patch_free(scim_service_provider_config_patch_t *scim_service_provider_config_patch) {
    if(NULL == scim_service_provider_config_patch){
        return ;
    }
    listEntry_t *listEntry;
    free(scim_service_provider_config_patch);
}

cJSON *scim_service_provider_config_patch_convertToJSON(scim_service_provider_config_patch_t *scim_service_provider_config_patch) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_patch->supported
    if (!scim_service_provider_config_patch->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", scim_service_provider_config_patch->supported) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_patch_t *scim_service_provider_config_patch_parseFromJSON(cJSON *scim_service_provider_config_patchJSON){

    scim_service_provider_config_patch_t *scim_service_provider_config_patch_local_var = NULL;

    // scim_service_provider_config_patch->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_patchJSON, "supported");
    if (!supported) {
        goto end;
    }

    
    if(!cJSON_IsBool(supported))
    {
    goto end; //Bool
    }


    scim_service_provider_config_patch_local_var = scim_service_provider_config_patch_create (
        supported->valueint
        );

    return scim_service_provider_config_patch_local_var;
end:
    return NULL;

}

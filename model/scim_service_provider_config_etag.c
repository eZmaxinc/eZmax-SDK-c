#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_etag.h"



static scim_service_provider_config_etag_t *scim_service_provider_config_etag_create_internal(
    int supported
    ) {
    scim_service_provider_config_etag_t *scim_service_provider_config_etag_local_var = malloc(sizeof(scim_service_provider_config_etag_t));
    if (!scim_service_provider_config_etag_local_var) {
        return NULL;
    }
    scim_service_provider_config_etag_local_var->supported = supported;

    scim_service_provider_config_etag_local_var->_library_owned = 1;
    return scim_service_provider_config_etag_local_var;
}

__attribute__((deprecated)) scim_service_provider_config_etag_t *scim_service_provider_config_etag_create(
    int supported
    ) {
    return scim_service_provider_config_etag_create_internal (
        supported
        );
}

void scim_service_provider_config_etag_free(scim_service_provider_config_etag_t *scim_service_provider_config_etag) {
    if(NULL == scim_service_provider_config_etag){
        return ;
    }
    if(scim_service_provider_config_etag->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_service_provider_config_etag_free");
        return ;
    }
    listEntry_t *listEntry;
    free(scim_service_provider_config_etag);
}

cJSON *scim_service_provider_config_etag_convertToJSON(scim_service_provider_config_etag_t *scim_service_provider_config_etag) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_etag->supported
    if (!scim_service_provider_config_etag->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", scim_service_provider_config_etag->supported) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_etag_t *scim_service_provider_config_etag_parseFromJSON(cJSON *scim_service_provider_config_etagJSON){

    scim_service_provider_config_etag_t *scim_service_provider_config_etag_local_var = NULL;

    // scim_service_provider_config_etag->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_etagJSON, "supported");
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


    scim_service_provider_config_etag_local_var = scim_service_provider_config_etag_create_internal (
        supported->valueint
        );

    return scim_service_provider_config_etag_local_var;
end:
    return NULL;

}

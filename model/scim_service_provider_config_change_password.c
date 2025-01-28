#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_change_password.h"



static scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_create_internal(
    int supported
    ) {
    scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_local_var = malloc(sizeof(scim_service_provider_config_change_password_t));
    if (!scim_service_provider_config_change_password_local_var) {
        return NULL;
    }
    scim_service_provider_config_change_password_local_var->supported = supported;

    scim_service_provider_config_change_password_local_var->_library_owned = 1;
    return scim_service_provider_config_change_password_local_var;
}

__attribute__((deprecated)) scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_create(
    int supported
    ) {
    return scim_service_provider_config_change_password_create_internal (
        supported
        );
}

void scim_service_provider_config_change_password_free(scim_service_provider_config_change_password_t *scim_service_provider_config_change_password) {
    if(NULL == scim_service_provider_config_change_password){
        return ;
    }
    if(scim_service_provider_config_change_password->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_service_provider_config_change_password_free");
        return ;
    }
    listEntry_t *listEntry;
    free(scim_service_provider_config_change_password);
}

cJSON *scim_service_provider_config_change_password_convertToJSON(scim_service_provider_config_change_password_t *scim_service_provider_config_change_password) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_change_password->supported
    if (!scim_service_provider_config_change_password->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", scim_service_provider_config_change_password->supported) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_parseFromJSON(cJSON *scim_service_provider_config_change_passwordJSON){

    scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_local_var = NULL;

    // scim_service_provider_config_change_password->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_change_passwordJSON, "supported");
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


    scim_service_provider_config_change_password_local_var = scim_service_provider_config_change_password_create_internal (
        supported->valueint
        );

    return scim_service_provider_config_change_password_local_var;
end:
    return NULL;

}

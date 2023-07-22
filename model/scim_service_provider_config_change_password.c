#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_change_password.h"



scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_create(
    int supported
    ) {
    scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_local_var = malloc(sizeof(scim_service_provider_config_change_password_t));
    if (!scim_service_provider_config_change_password_local_var) {
        return NULL;
    }
    scim_service_provider_config_change_password_local_var->supported = supported;

    return scim_service_provider_config_change_password_local_var;
}


void scim_service_provider_config_change_password_free(scim_service_provider_config_change_password_t *scim_service_provider_config_change_password) {
    if(NULL == scim_service_provider_config_change_password){
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
    if (!supported) {
        goto end;
    }

    
    if(!cJSON_IsBool(supported))
    {
    goto end; //Bool
    }


    scim_service_provider_config_change_password_local_var = scim_service_provider_config_change_password_create (
        supported->valueint
        );

    return scim_service_provider_config_change_password_local_var;
end:
    return NULL;

}

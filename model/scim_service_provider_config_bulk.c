#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_bulk.h"



scim_service_provider_config_bulk_t *scim_service_provider_config_bulk_create(
    int supported,
    int max_operations,
    int max_payload_size
    ) {
    scim_service_provider_config_bulk_t *scim_service_provider_config_bulk_local_var = malloc(sizeof(scim_service_provider_config_bulk_t));
    if (!scim_service_provider_config_bulk_local_var) {
        return NULL;
    }
    scim_service_provider_config_bulk_local_var->supported = supported;
    scim_service_provider_config_bulk_local_var->max_operations = max_operations;
    scim_service_provider_config_bulk_local_var->max_payload_size = max_payload_size;

    return scim_service_provider_config_bulk_local_var;
}


void scim_service_provider_config_bulk_free(scim_service_provider_config_bulk_t *scim_service_provider_config_bulk) {
    if(NULL == scim_service_provider_config_bulk){
        return ;
    }
    listEntry_t *listEntry;
    free(scim_service_provider_config_bulk);
}

cJSON *scim_service_provider_config_bulk_convertToJSON(scim_service_provider_config_bulk_t *scim_service_provider_config_bulk) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_bulk->supported
    if (!scim_service_provider_config_bulk->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", scim_service_provider_config_bulk->supported) == NULL) {
    goto fail; //Bool
    }


    // scim_service_provider_config_bulk->max_operations
    if (!scim_service_provider_config_bulk->max_operations) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "maxOperations", scim_service_provider_config_bulk->max_operations) == NULL) {
    goto fail; //Numeric
    }


    // scim_service_provider_config_bulk->max_payload_size
    if (!scim_service_provider_config_bulk->max_payload_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "maxPayloadSize", scim_service_provider_config_bulk->max_payload_size) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_bulk_t *scim_service_provider_config_bulk_parseFromJSON(cJSON *scim_service_provider_config_bulkJSON){

    scim_service_provider_config_bulk_t *scim_service_provider_config_bulk_local_var = NULL;

    // scim_service_provider_config_bulk->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_bulkJSON, "supported");
    if (!supported) {
        goto end;
    }

    
    if(!cJSON_IsBool(supported))
    {
    goto end; //Bool
    }

    // scim_service_provider_config_bulk->max_operations
    cJSON *max_operations = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_bulkJSON, "maxOperations");
    if (!max_operations) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_operations))
    {
    goto end; //Numeric
    }

    // scim_service_provider_config_bulk->max_payload_size
    cJSON *max_payload_size = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_bulkJSON, "maxPayloadSize");
    if (!max_payload_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_payload_size))
    {
    goto end; //Numeric
    }


    scim_service_provider_config_bulk_local_var = scim_service_provider_config_bulk_create (
        supported->valueint,
        max_operations->valuedouble,
        max_payload_size->valuedouble
        );

    return scim_service_provider_config_bulk_local_var;
end:
    return NULL;

}

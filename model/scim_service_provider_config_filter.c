#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_filter.h"



scim_service_provider_config_filter_t *scim_service_provider_config_filter_create(
    int supported,
    int max_results
    ) {
    scim_service_provider_config_filter_t *scim_service_provider_config_filter_local_var = malloc(sizeof(scim_service_provider_config_filter_t));
    if (!scim_service_provider_config_filter_local_var) {
        return NULL;
    }
    scim_service_provider_config_filter_local_var->supported = supported;
    scim_service_provider_config_filter_local_var->max_results = max_results;

    return scim_service_provider_config_filter_local_var;
}


void scim_service_provider_config_filter_free(scim_service_provider_config_filter_t *scim_service_provider_config_filter) {
    if(NULL == scim_service_provider_config_filter){
        return ;
    }
    listEntry_t *listEntry;
    free(scim_service_provider_config_filter);
}

cJSON *scim_service_provider_config_filter_convertToJSON(scim_service_provider_config_filter_t *scim_service_provider_config_filter) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_filter->supported
    if (!scim_service_provider_config_filter->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", scim_service_provider_config_filter->supported) == NULL) {
    goto fail; //Bool
    }


    // scim_service_provider_config_filter->max_results
    if (!scim_service_provider_config_filter->max_results) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "maxResults", scim_service_provider_config_filter->max_results) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_filter_t *scim_service_provider_config_filter_parseFromJSON(cJSON *scim_service_provider_config_filterJSON){

    scim_service_provider_config_filter_t *scim_service_provider_config_filter_local_var = NULL;

    // scim_service_provider_config_filter->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_filterJSON, "supported");
    if (!supported) {
        goto end;
    }

    
    if(!cJSON_IsBool(supported))
    {
    goto end; //Bool
    }

    // scim_service_provider_config_filter->max_results
    cJSON *max_results = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_filterJSON, "maxResults");
    if (!max_results) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_results))
    {
    goto end; //Numeric
    }


    scim_service_provider_config_filter_local_var = scim_service_provider_config_filter_create (
        supported->valueint,
        max_results->valuedouble
        );

    return scim_service_provider_config_filter_local_var;
end:
    return NULL;

}

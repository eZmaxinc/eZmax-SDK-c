#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config_filter.h"



static scim_service_provider_config_filter_t *scim_service_provider_config_filter_create_internal(
    int *supported,
    int *max_results
    ) {
    scim_service_provider_config_filter_t *scim_service_provider_config_filter_local_var = malloc(sizeof(scim_service_provider_config_filter_t));
    if (!scim_service_provider_config_filter_local_var) {
        return NULL;
    }
    memset(scim_service_provider_config_filter_local_var, 0, sizeof(scim_service_provider_config_filter_t));
    scim_service_provider_config_filter_local_var->_library_owned = 1;
    scim_service_provider_config_filter_local_var->supported = supported;
    scim_service_provider_config_filter_local_var->max_results = max_results;
    return scim_service_provider_config_filter_local_var;
}

__attribute__((deprecated)) scim_service_provider_config_filter_t *scim_service_provider_config_filter_create(
    int *supported,
    int *max_results
    ) {
    int *supported_copy = NULL;
    if (supported) {
        supported_copy = malloc(sizeof(int));
        if (supported_copy) *supported_copy = *supported;
    }
    int *max_results_copy = NULL;
    if (max_results) {
        max_results_copy = malloc(sizeof(int));
        if (max_results_copy) *max_results_copy = *max_results;
    }
    scim_service_provider_config_filter_t *result = scim_service_provider_config_filter_create_internal (
        supported_copy,
        max_results_copy
        );
    if (!result) {
        free(supported_copy);
        free(max_results_copy);
    }
    return result;
}

void scim_service_provider_config_filter_free(scim_service_provider_config_filter_t *scim_service_provider_config_filter) {
    if(NULL == scim_service_provider_config_filter){
        return ;
    }
    if(scim_service_provider_config_filter->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_service_provider_config_filter_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_service_provider_config_filter->supported) {
        free(scim_service_provider_config_filter->supported);
        scim_service_provider_config_filter->supported = NULL;
    }
    if (scim_service_provider_config_filter->max_results) {
        free(scim_service_provider_config_filter->max_results);
        scim_service_provider_config_filter->max_results = NULL;
    }
    free(scim_service_provider_config_filter);
}

cJSON *scim_service_provider_config_filter_convertToJSON(scim_service_provider_config_filter_t *scim_service_provider_config_filter) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config_filter->supported
    if (!scim_service_provider_config_filter->supported) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "supported", *scim_service_provider_config_filter->supported) == NULL) {
    goto fail; //Bool
    }


    // scim_service_provider_config_filter->max_results
    if (!scim_service_provider_config_filter->max_results) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "maxResults", *scim_service_provider_config_filter->max_results) == NULL) {
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

    // define the local variable for scim_service_provider_config_filter->supported
    int *supported_local_var = NULL;

    // define the local variable for scim_service_provider_config_filter->max_results
    int *max_results_local_var = NULL;

    // scim_service_provider_config_filter->supported
    cJSON *supported = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_filterJSON, "supported");
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

    // scim_service_provider_config_filter->max_results
    cJSON *max_results = cJSON_GetObjectItemCaseSensitive(scim_service_provider_config_filterJSON, "maxResults");
    if (cJSON_IsNull(max_results)) {
        max_results = NULL;
    }
    if (!max_results) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_results))
    {
    goto end; //Numeric
    }
    max_results_local_var = malloc(sizeof(int));
    if(!max_results_local_var)
    {
        goto end;
    }
    *max_results_local_var = max_results->valuedouble;



    scim_service_provider_config_filter_local_var = scim_service_provider_config_filter_create_internal (
        supported_local_var,
        max_results_local_var
        );

    if (!scim_service_provider_config_filter_local_var) {
        goto end;
    }

    return scim_service_provider_config_filter_local_var;
end:
    if (supported_local_var) {
        free(supported_local_var);
        supported_local_var = NULL;
    }
    if (max_results_local_var) {
        free(max_results_local_var);
        max_results_local_var = NULL;
    }
    return NULL;

}

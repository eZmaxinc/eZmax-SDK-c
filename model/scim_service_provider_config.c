#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_service_provider_config.h"



static scim_service_provider_config_t *scim_service_provider_config_create_internal(
    list_t *authentication_schemes,
    scim_service_provider_config_bulk_t *bulk,
    scim_service_provider_config_change_password_t *change_password,
    char *documentation_uri,
    scim_service_provider_config_etag_t *etag,
    scim_service_provider_config_filter_t *filter,
    scim_service_provider_config_patch_t *patch,
    scim_service_provider_config_sort_t *sort
    ) {
    scim_service_provider_config_t *scim_service_provider_config_local_var = malloc(sizeof(scim_service_provider_config_t));
    if (!scim_service_provider_config_local_var) {
        return NULL;
    }
    scim_service_provider_config_local_var->authentication_schemes = authentication_schemes;
    scim_service_provider_config_local_var->bulk = bulk;
    scim_service_provider_config_local_var->change_password = change_password;
    scim_service_provider_config_local_var->documentation_uri = documentation_uri;
    scim_service_provider_config_local_var->etag = etag;
    scim_service_provider_config_local_var->filter = filter;
    scim_service_provider_config_local_var->patch = patch;
    scim_service_provider_config_local_var->sort = sort;

    scim_service_provider_config_local_var->_library_owned = 1;
    return scim_service_provider_config_local_var;
}

__attribute__((deprecated)) scim_service_provider_config_t *scim_service_provider_config_create(
    list_t *authentication_schemes,
    scim_service_provider_config_bulk_t *bulk,
    scim_service_provider_config_change_password_t *change_password,
    char *documentation_uri,
    scim_service_provider_config_etag_t *etag,
    scim_service_provider_config_filter_t *filter,
    scim_service_provider_config_patch_t *patch,
    scim_service_provider_config_sort_t *sort
    ) {
    return scim_service_provider_config_create_internal (
        authentication_schemes,
        bulk,
        change_password,
        documentation_uri,
        etag,
        filter,
        patch,
        sort
        );
}

void scim_service_provider_config_free(scim_service_provider_config_t *scim_service_provider_config) {
    if(NULL == scim_service_provider_config){
        return ;
    }
    if(scim_service_provider_config->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_service_provider_config_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_service_provider_config->authentication_schemes) {
        list_ForEach(listEntry, scim_service_provider_config->authentication_schemes) {
            scim_authentication_scheme_free(listEntry->data);
        }
        list_freeList(scim_service_provider_config->authentication_schemes);
        scim_service_provider_config->authentication_schemes = NULL;
    }
    if (scim_service_provider_config->bulk) {
        scim_service_provider_config_bulk_free(scim_service_provider_config->bulk);
        scim_service_provider_config->bulk = NULL;
    }
    if (scim_service_provider_config->change_password) {
        scim_service_provider_config_change_password_free(scim_service_provider_config->change_password);
        scim_service_provider_config->change_password = NULL;
    }
    if (scim_service_provider_config->documentation_uri) {
        free(scim_service_provider_config->documentation_uri);
        scim_service_provider_config->documentation_uri = NULL;
    }
    if (scim_service_provider_config->etag) {
        scim_service_provider_config_etag_free(scim_service_provider_config->etag);
        scim_service_provider_config->etag = NULL;
    }
    if (scim_service_provider_config->filter) {
        scim_service_provider_config_filter_free(scim_service_provider_config->filter);
        scim_service_provider_config->filter = NULL;
    }
    if (scim_service_provider_config->patch) {
        scim_service_provider_config_patch_free(scim_service_provider_config->patch);
        scim_service_provider_config->patch = NULL;
    }
    if (scim_service_provider_config->sort) {
        scim_service_provider_config_sort_free(scim_service_provider_config->sort);
        scim_service_provider_config->sort = NULL;
    }
    free(scim_service_provider_config);
}

cJSON *scim_service_provider_config_convertToJSON(scim_service_provider_config_t *scim_service_provider_config) {
    cJSON *item = cJSON_CreateObject();

    // scim_service_provider_config->authentication_schemes
    if (!scim_service_provider_config->authentication_schemes) {
        goto fail;
    }
    cJSON *authentication_schemes = cJSON_AddArrayToObject(item, "authenticationSchemes");
    if(authentication_schemes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *authentication_schemesListEntry;
    if (scim_service_provider_config->authentication_schemes) {
    list_ForEach(authentication_schemesListEntry, scim_service_provider_config->authentication_schemes) {
    cJSON *itemLocal = scim_authentication_scheme_convertToJSON(authentication_schemesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(authentication_schemes, itemLocal);
    }
    }


    // scim_service_provider_config->bulk
    if (!scim_service_provider_config->bulk) {
        goto fail;
    }
    cJSON *bulk_local_JSON = scim_service_provider_config_bulk_convertToJSON(scim_service_provider_config->bulk);
    if(bulk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bulk", bulk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // scim_service_provider_config->change_password
    if (!scim_service_provider_config->change_password) {
        goto fail;
    }
    cJSON *change_password_local_JSON = scim_service_provider_config_change_password_convertToJSON(scim_service_provider_config->change_password);
    if(change_password_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "changePassword", change_password_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // scim_service_provider_config->documentation_uri
    if (!scim_service_provider_config->documentation_uri) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "documentationUri", scim_service_provider_config->documentation_uri) == NULL) {
    goto fail; //String
    }


    // scim_service_provider_config->etag
    if (!scim_service_provider_config->etag) {
        goto fail;
    }
    cJSON *etag_local_JSON = scim_service_provider_config_etag_convertToJSON(scim_service_provider_config->etag);
    if(etag_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "etag", etag_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // scim_service_provider_config->filter
    if (!scim_service_provider_config->filter) {
        goto fail;
    }
    cJSON *filter_local_JSON = scim_service_provider_config_filter_convertToJSON(scim_service_provider_config->filter);
    if(filter_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "filter", filter_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // scim_service_provider_config->patch
    if (!scim_service_provider_config->patch) {
        goto fail;
    }
    cJSON *patch_local_JSON = scim_service_provider_config_patch_convertToJSON(scim_service_provider_config->patch);
    if(patch_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "patch", patch_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // scim_service_provider_config->sort
    if (!scim_service_provider_config->sort) {
        goto fail;
    }
    cJSON *sort_local_JSON = scim_service_provider_config_sort_convertToJSON(scim_service_provider_config->sort);
    if(sort_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sort", sort_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_service_provider_config_t *scim_service_provider_config_parseFromJSON(cJSON *scim_service_provider_configJSON){

    scim_service_provider_config_t *scim_service_provider_config_local_var = NULL;

    // define the local list for scim_service_provider_config->authentication_schemes
    list_t *authentication_schemesList = NULL;

    // define the local variable for scim_service_provider_config->bulk
    scim_service_provider_config_bulk_t *bulk_local_nonprim = NULL;

    // define the local variable for scim_service_provider_config->change_password
    scim_service_provider_config_change_password_t *change_password_local_nonprim = NULL;

    // define the local variable for scim_service_provider_config->etag
    scim_service_provider_config_etag_t *etag_local_nonprim = NULL;

    // define the local variable for scim_service_provider_config->filter
    scim_service_provider_config_filter_t *filter_local_nonprim = NULL;

    // define the local variable for scim_service_provider_config->patch
    scim_service_provider_config_patch_t *patch_local_nonprim = NULL;

    // define the local variable for scim_service_provider_config->sort
    scim_service_provider_config_sort_t *sort_local_nonprim = NULL;

    // scim_service_provider_config->authentication_schemes
    cJSON *authentication_schemes = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "authenticationSchemes");
    if (cJSON_IsNull(authentication_schemes)) {
        authentication_schemes = NULL;
    }
    if (!authentication_schemes) {
        goto end;
    }

    
    cJSON *authentication_schemes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(authentication_schemes)){
        goto end; //nonprimitive container
    }

    authentication_schemesList = list_createList();

    cJSON_ArrayForEach(authentication_schemes_local_nonprimitive,authentication_schemes )
    {
        if(!cJSON_IsObject(authentication_schemes_local_nonprimitive)){
            goto end;
        }
        scim_authentication_scheme_t *authentication_schemesItem = scim_authentication_scheme_parseFromJSON(authentication_schemes_local_nonprimitive);

        list_addElement(authentication_schemesList, authentication_schemesItem);
    }

    // scim_service_provider_config->bulk
    cJSON *bulk = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "bulk");
    if (cJSON_IsNull(bulk)) {
        bulk = NULL;
    }
    if (!bulk) {
        goto end;
    }

    
    bulk_local_nonprim = scim_service_provider_config_bulk_parseFromJSON(bulk); //nonprimitive

    // scim_service_provider_config->change_password
    cJSON *change_password = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "changePassword");
    if (cJSON_IsNull(change_password)) {
        change_password = NULL;
    }
    if (!change_password) {
        goto end;
    }

    
    change_password_local_nonprim = scim_service_provider_config_change_password_parseFromJSON(change_password); //nonprimitive

    // scim_service_provider_config->documentation_uri
    cJSON *documentation_uri = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "documentationUri");
    if (cJSON_IsNull(documentation_uri)) {
        documentation_uri = NULL;
    }
    if (!documentation_uri) {
        goto end;
    }

    
    if(!cJSON_IsString(documentation_uri))
    {
    goto end; //String
    }

    // scim_service_provider_config->etag
    cJSON *etag = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "etag");
    if (cJSON_IsNull(etag)) {
        etag = NULL;
    }
    if (!etag) {
        goto end;
    }

    
    etag_local_nonprim = scim_service_provider_config_etag_parseFromJSON(etag); //nonprimitive

    // scim_service_provider_config->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "filter");
    if (cJSON_IsNull(filter)) {
        filter = NULL;
    }
    if (!filter) {
        goto end;
    }

    
    filter_local_nonprim = scim_service_provider_config_filter_parseFromJSON(filter); //nonprimitive

    // scim_service_provider_config->patch
    cJSON *patch = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "patch");
    if (cJSON_IsNull(patch)) {
        patch = NULL;
    }
    if (!patch) {
        goto end;
    }

    
    patch_local_nonprim = scim_service_provider_config_patch_parseFromJSON(patch); //nonprimitive

    // scim_service_provider_config->sort
    cJSON *sort = cJSON_GetObjectItemCaseSensitive(scim_service_provider_configJSON, "sort");
    if (cJSON_IsNull(sort)) {
        sort = NULL;
    }
    if (!sort) {
        goto end;
    }

    
    sort_local_nonprim = scim_service_provider_config_sort_parseFromJSON(sort); //nonprimitive


    scim_service_provider_config_local_var = scim_service_provider_config_create_internal (
        authentication_schemesList,
        bulk_local_nonprim,
        change_password_local_nonprim,
        strdup(documentation_uri->valuestring),
        etag_local_nonprim,
        filter_local_nonprim,
        patch_local_nonprim,
        sort_local_nonprim
        );

    return scim_service_provider_config_local_var;
end:
    if (authentication_schemesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, authentication_schemesList) {
            scim_authentication_scheme_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(authentication_schemesList);
        authentication_schemesList = NULL;
    }
    if (bulk_local_nonprim) {
        scim_service_provider_config_bulk_free(bulk_local_nonprim);
        bulk_local_nonprim = NULL;
    }
    if (change_password_local_nonprim) {
        scim_service_provider_config_change_password_free(change_password_local_nonprim);
        change_password_local_nonprim = NULL;
    }
    if (etag_local_nonprim) {
        scim_service_provider_config_etag_free(etag_local_nonprim);
        etag_local_nonprim = NULL;
    }
    if (filter_local_nonprim) {
        scim_service_provider_config_filter_free(filter_local_nonprim);
        filter_local_nonprim = NULL;
    }
    if (patch_local_nonprim) {
        scim_service_provider_config_patch_free(patch_local_nonprim);
        patch_local_nonprim = NULL;
    }
    if (sort_local_nonprim) {
        scim_service_provider_config_sort_free(sort_local_nonprim);
        sort_local_nonprim = NULL;
    }
    return NULL;

}

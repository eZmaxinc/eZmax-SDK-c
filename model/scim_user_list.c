#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_user_list.h"



static scim_user_list_t *scim_user_list_create_internal(
    int total_results,
    int items_per_page,
    int start_index,
    list_t *schemas,
    list_t *resources
    ) {
    scim_user_list_t *scim_user_list_local_var = malloc(sizeof(scim_user_list_t));
    if (!scim_user_list_local_var) {
        return NULL;
    }
    scim_user_list_local_var->total_results = total_results;
    scim_user_list_local_var->items_per_page = items_per_page;
    scim_user_list_local_var->start_index = start_index;
    scim_user_list_local_var->schemas = schemas;
    scim_user_list_local_var->resources = resources;

    scim_user_list_local_var->_library_owned = 1;
    return scim_user_list_local_var;
}

__attribute__((deprecated)) scim_user_list_t *scim_user_list_create(
    int total_results,
    int items_per_page,
    int start_index,
    list_t *schemas,
    list_t *resources
    ) {
    return scim_user_list_create_internal (
        total_results,
        items_per_page,
        start_index,
        schemas,
        resources
        );
}

void scim_user_list_free(scim_user_list_t *scim_user_list) {
    if(NULL == scim_user_list){
        return ;
    }
    if(scim_user_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_user_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_user_list->schemas) {
        list_ForEach(listEntry, scim_user_list->schemas) {
            free(listEntry->data);
        }
        list_freeList(scim_user_list->schemas);
        scim_user_list->schemas = NULL;
    }
    if (scim_user_list->resources) {
        list_ForEach(listEntry, scim_user_list->resources) {
            scim_user_free(listEntry->data);
        }
        list_freeList(scim_user_list->resources);
        scim_user_list->resources = NULL;
    }
    free(scim_user_list);
}

cJSON *scim_user_list_convertToJSON(scim_user_list_t *scim_user_list) {
    cJSON *item = cJSON_CreateObject();

    // scim_user_list->total_results
    if(scim_user_list->total_results) {
    if(cJSON_AddNumberToObject(item, "totalResults", scim_user_list->total_results) == NULL) {
    goto fail; //Numeric
    }
    }


    // scim_user_list->items_per_page
    if(scim_user_list->items_per_page) {
    if(cJSON_AddNumberToObject(item, "itemsPerPage", scim_user_list->items_per_page) == NULL) {
    goto fail; //Numeric
    }
    }


    // scim_user_list->start_index
    if(scim_user_list->start_index) {
    if(cJSON_AddNumberToObject(item, "startIndex", scim_user_list->start_index) == NULL) {
    goto fail; //Numeric
    }
    }


    // scim_user_list->schemas
    if(scim_user_list->schemas) {
    cJSON *schemas = cJSON_AddArrayToObject(item, "schemas");
    if(schemas == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *schemasListEntry;
    list_ForEach(schemasListEntry, scim_user_list->schemas) {
    if(cJSON_AddStringToObject(schemas, "", schemasListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // scim_user_list->resources
    if(scim_user_list->resources) {
    cJSON *resources = cJSON_AddArrayToObject(item, "Resources");
    if(resources == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resourcesListEntry;
    if (scim_user_list->resources) {
    list_ForEach(resourcesListEntry, scim_user_list->resources) {
    cJSON *itemLocal = scim_user_convertToJSON(resourcesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(resources, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_user_list_t *scim_user_list_parseFromJSON(cJSON *scim_user_listJSON){

    scim_user_list_t *scim_user_list_local_var = NULL;

    // define the local list for scim_user_list->schemas
    list_t *schemasList = NULL;

    // define the local list for scim_user_list->resources
    list_t *resourcesList = NULL;

    // scim_user_list->total_results
    cJSON *total_results = cJSON_GetObjectItemCaseSensitive(scim_user_listJSON, "totalResults");
    if (cJSON_IsNull(total_results)) {
        total_results = NULL;
    }
    if (total_results) { 
    if(!cJSON_IsNumber(total_results))
    {
    goto end; //Numeric
    }
    }

    // scim_user_list->items_per_page
    cJSON *items_per_page = cJSON_GetObjectItemCaseSensitive(scim_user_listJSON, "itemsPerPage");
    if (cJSON_IsNull(items_per_page)) {
        items_per_page = NULL;
    }
    if (items_per_page) { 
    if(!cJSON_IsNumber(items_per_page))
    {
    goto end; //Numeric
    }
    }

    // scim_user_list->start_index
    cJSON *start_index = cJSON_GetObjectItemCaseSensitive(scim_user_listJSON, "startIndex");
    if (cJSON_IsNull(start_index)) {
        start_index = NULL;
    }
    if (start_index) { 
    if(!cJSON_IsNumber(start_index))
    {
    goto end; //Numeric
    }
    }

    // scim_user_list->schemas
    cJSON *schemas = cJSON_GetObjectItemCaseSensitive(scim_user_listJSON, "schemas");
    if (cJSON_IsNull(schemas)) {
        schemas = NULL;
    }
    if (schemas) { 
    cJSON *schemas_local = NULL;
    if(!cJSON_IsArray(schemas)) {
        goto end;//primitive container
    }
    schemasList = list_createList();

    cJSON_ArrayForEach(schemas_local, schemas)
    {
        if(!cJSON_IsString(schemas_local))
        {
            goto end;
        }
        list_addElement(schemasList , strdup(schemas_local->valuestring));
    }
    }

    // scim_user_list->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(scim_user_listJSON, "Resources");
    if (cJSON_IsNull(resources)) {
        resources = NULL;
    }
    if (resources) { 
    cJSON *resources_local_nonprimitive = NULL;
    if(!cJSON_IsArray(resources)){
        goto end; //nonprimitive container
    }

    resourcesList = list_createList();

    cJSON_ArrayForEach(resources_local_nonprimitive,resources )
    {
        if(!cJSON_IsObject(resources_local_nonprimitive)){
            goto end;
        }
        scim_user_t *resourcesItem = scim_user_parseFromJSON(resources_local_nonprimitive);

        list_addElement(resourcesList, resourcesItem);
    }
    }


    scim_user_list_local_var = scim_user_list_create_internal (
        total_results ? total_results->valuedouble : 0,
        items_per_page ? items_per_page->valuedouble : 0,
        start_index ? start_index->valuedouble : 0,
        schemas ? schemasList : NULL,
        resources ? resourcesList : NULL
        );

    return scim_user_list_local_var;
end:
    if (schemasList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, schemasList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(schemasList);
        schemasList = NULL;
    }
    if (resourcesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resourcesList) {
            scim_user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resourcesList);
        resourcesList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_user_list.h"



static scim_user_list_t *scim_user_list_create_internal(
    int *total_results,
    int *items_per_page,
    int *start_index,
    list_t *schemas,
    list_t *resources
    ) {
    scim_user_list_t *scim_user_list_local_var = malloc(sizeof(scim_user_list_t));
    if (!scim_user_list_local_var) {
        return NULL;
    }
    memset(scim_user_list_local_var, 0, sizeof(scim_user_list_t));
    scim_user_list_local_var->_library_owned = 1;
    scim_user_list_local_var->total_results = total_results;
    scim_user_list_local_var->items_per_page = items_per_page;
    scim_user_list_local_var->start_index = start_index;
    scim_user_list_local_var->schemas = schemas;
    scim_user_list_local_var->resources = resources;
    return scim_user_list_local_var;
}

__attribute__((deprecated)) scim_user_list_t *scim_user_list_create(
    int *total_results,
    int *items_per_page,
    int *start_index,
    list_t *schemas,
    list_t *resources
    ) {
    int *total_results_copy = NULL;
    if (total_results) {
        total_results_copy = malloc(sizeof(int));
        if (total_results_copy) *total_results_copy = *total_results;
    }
    int *items_per_page_copy = NULL;
    if (items_per_page) {
        items_per_page_copy = malloc(sizeof(int));
        if (items_per_page_copy) *items_per_page_copy = *items_per_page;
    }
    int *start_index_copy = NULL;
    if (start_index) {
        start_index_copy = malloc(sizeof(int));
        if (start_index_copy) *start_index_copy = *start_index;
    }
    scim_user_list_t *result = scim_user_list_create_internal (
        total_results_copy,
        items_per_page_copy,
        start_index_copy,
        schemas,
        resources
        );
    if (!result) {
        free(total_results_copy);
        free(items_per_page_copy);
        free(start_index_copy);
    }
    return result;
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
    if (scim_user_list->total_results) {
        free(scim_user_list->total_results);
        scim_user_list->total_results = NULL;
    }
    if (scim_user_list->items_per_page) {
        free(scim_user_list->items_per_page);
        scim_user_list->items_per_page = NULL;
    }
    if (scim_user_list->start_index) {
        free(scim_user_list->start_index);
        scim_user_list->start_index = NULL;
    }
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
    if(cJSON_AddNumberToObject(item, "totalResults", *scim_user_list->total_results) == NULL) {
    goto fail; //Numeric
    }
    }


    // scim_user_list->items_per_page
    if(scim_user_list->items_per_page) {
    if(cJSON_AddNumberToObject(item, "itemsPerPage", *scim_user_list->items_per_page) == NULL) {
    goto fail; //Numeric
    }
    }


    // scim_user_list->start_index
    if(scim_user_list->start_index) {
    if(cJSON_AddNumberToObject(item, "startIndex", *scim_user_list->start_index) == NULL) {
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

    // define the local variable for scim_user_list->total_results
    int *total_results_local_var = NULL;

    // define the local variable for scim_user_list->items_per_page
    int *items_per_page_local_var = NULL;

    // define the local variable for scim_user_list->start_index
    int *start_index_local_var = NULL;

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
    total_results_local_var = malloc(sizeof(int));
    if(!total_results_local_var)
    {
        goto end;
    }
    *total_results_local_var = total_results->valuedouble;
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
    items_per_page_local_var = malloc(sizeof(int));
    if(!items_per_page_local_var)
    {
        goto end;
    }
    *items_per_page_local_var = items_per_page->valuedouble;
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
    start_index_local_var = malloc(sizeof(int));
    if(!start_index_local_var)
    {
        goto end;
    }
    *start_index_local_var = start_index->valuedouble;
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
        total_results_local_var,
        items_per_page_local_var,
        start_index_local_var,
        schemas ? schemasList : NULL,
        resources ? resourcesList : NULL
        );

    if (!scim_user_list_local_var) {
        goto end;
    }

    return scim_user_list_local_var;
end:
    if (total_results_local_var) {
        free(total_results_local_var);
        total_results_local_var = NULL;
    }
    if (items_per_page_local_var) {
        free(items_per_page_local_var);
        items_per_page_local_var = NULL;
    }
    if (start_index_local_var) {
        free(start_index_local_var);
        start_index_local_var = NULL;
    }
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

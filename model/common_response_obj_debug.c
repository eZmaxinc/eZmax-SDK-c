#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_obj_debug.h"



common_response_obj_debug_t *common_response_obj_debug_create(
    char *s_memory_usage,
    char *s_run_time,
    int i_sql_selects,
    int i_sql_queries,
    list_t *a_obj_sql_query
    ) {
    common_response_obj_debug_t *common_response_obj_debug_local_var = malloc(sizeof(common_response_obj_debug_t));
    if (!common_response_obj_debug_local_var) {
        return NULL;
    }
    common_response_obj_debug_local_var->s_memory_usage = s_memory_usage;
    common_response_obj_debug_local_var->s_run_time = s_run_time;
    common_response_obj_debug_local_var->i_sql_selects = i_sql_selects;
    common_response_obj_debug_local_var->i_sql_queries = i_sql_queries;
    common_response_obj_debug_local_var->a_obj_sql_query = a_obj_sql_query;

    return common_response_obj_debug_local_var;
}


void common_response_obj_debug_free(common_response_obj_debug_t *common_response_obj_debug) {
    if(NULL == common_response_obj_debug){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_obj_debug->s_memory_usage) {
        free(common_response_obj_debug->s_memory_usage);
        common_response_obj_debug->s_memory_usage = NULL;
    }
    if (common_response_obj_debug->s_run_time) {
        free(common_response_obj_debug->s_run_time);
        common_response_obj_debug->s_run_time = NULL;
    }
    if (common_response_obj_debug->a_obj_sql_query) {
        list_ForEach(listEntry, common_response_obj_debug->a_obj_sql_query) {
            common_response_obj_sql_query_free(listEntry->data);
        }
        list_freeList(common_response_obj_debug->a_obj_sql_query);
        common_response_obj_debug->a_obj_sql_query = NULL;
    }
    free(common_response_obj_debug);
}

cJSON *common_response_obj_debug_convertToJSON(common_response_obj_debug_t *common_response_obj_debug) {
    cJSON *item = cJSON_CreateObject();

    // common_response_obj_debug->s_memory_usage
    if (!common_response_obj_debug->s_memory_usage) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sMemoryUsage", common_response_obj_debug->s_memory_usage) == NULL) {
    goto fail; //String
    }


    // common_response_obj_debug->s_run_time
    if (!common_response_obj_debug->s_run_time) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sRunTime", common_response_obj_debug->s_run_time) == NULL) {
    goto fail; //String
    }


    // common_response_obj_debug->i_sql_selects
    if (!common_response_obj_debug->i_sql_selects) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iSQLSelects", common_response_obj_debug->i_sql_selects) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug->i_sql_queries
    if (!common_response_obj_debug->i_sql_queries) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iSQLQueries", common_response_obj_debug->i_sql_queries) == NULL) {
    goto fail; //Numeric
    }


    // common_response_obj_debug->a_obj_sql_query
    if (!common_response_obj_debug->a_obj_sql_query) {
        goto fail;
    }
    
    cJSON *a_obj_sql_query = cJSON_AddArrayToObject(item, "a_objSQLQuery");
    if(a_obj_sql_query == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_sql_queryListEntry;
    if (common_response_obj_debug->a_obj_sql_query) {
    list_ForEach(a_obj_sql_queryListEntry, common_response_obj_debug->a_obj_sql_query) {
    cJSON *itemLocal = common_response_obj_sql_query_convertToJSON(a_obj_sql_queryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_sql_query, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_obj_debug_t *common_response_obj_debug_parseFromJSON(cJSON *common_response_obj_debugJSON){

    common_response_obj_debug_t *common_response_obj_debug_local_var = NULL;

    // common_response_obj_debug->s_memory_usage
    cJSON *s_memory_usage = cJSON_GetObjectItemCaseSensitive(common_response_obj_debugJSON, "sMemoryUsage");
    if (!s_memory_usage) {
        goto end;
    }

    
    if(!cJSON_IsString(s_memory_usage))
    {
    goto end; //String
    }

    // common_response_obj_debug->s_run_time
    cJSON *s_run_time = cJSON_GetObjectItemCaseSensitive(common_response_obj_debugJSON, "sRunTime");
    if (!s_run_time) {
        goto end;
    }

    
    if(!cJSON_IsString(s_run_time))
    {
    goto end; //String
    }

    // common_response_obj_debug->i_sql_selects
    cJSON *i_sql_selects = cJSON_GetObjectItemCaseSensitive(common_response_obj_debugJSON, "iSQLSelects");
    if (!i_sql_selects) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_sql_selects))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug->i_sql_queries
    cJSON *i_sql_queries = cJSON_GetObjectItemCaseSensitive(common_response_obj_debugJSON, "iSQLQueries");
    if (!i_sql_queries) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_sql_queries))
    {
    goto end; //Numeric
    }

    // common_response_obj_debug->a_obj_sql_query
    cJSON *a_obj_sql_query = cJSON_GetObjectItemCaseSensitive(common_response_obj_debugJSON, "a_objSQLQuery");
    if (!a_obj_sql_query) {
        goto end;
    }

    list_t *a_obj_sql_queryList;
    
    cJSON *a_obj_sql_query_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_sql_query)){
        goto end; //nonprimitive container
    }

    a_obj_sql_queryList = list_createList();

    cJSON_ArrayForEach(a_obj_sql_query_local_nonprimitive,a_obj_sql_query )
    {
        if(!cJSON_IsObject(a_obj_sql_query_local_nonprimitive)){
            goto end;
        }
        common_response_obj_sql_query_t *a_obj_sql_queryItem = common_response_obj_sql_query_parseFromJSON(a_obj_sql_query_local_nonprimitive);

        list_addElement(a_obj_sql_queryList, a_obj_sql_queryItem);
    }


    common_response_obj_debug_local_var = common_response_obj_debug_create (
        strdup(s_memory_usage->valuestring),
        strdup(s_run_time->valuestring),
        i_sql_selects->valuedouble,
        i_sql_queries->valuedouble,
        a_obj_sql_queryList
        );

    return common_response_obj_debug_local_var;
end:
    return NULL;

}

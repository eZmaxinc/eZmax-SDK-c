#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_obj_sql_query.h"



common_response_obj_sql_query_t *common_response_obj_sql_query_create(
    char *s_query,
    float f_duration
    ) {
    common_response_obj_sql_query_t *common_response_obj_sql_query_local_var = malloc(sizeof(common_response_obj_sql_query_t));
    if (!common_response_obj_sql_query_local_var) {
        return NULL;
    }
    common_response_obj_sql_query_local_var->s_query = s_query;
    common_response_obj_sql_query_local_var->f_duration = f_duration;

    return common_response_obj_sql_query_local_var;
}


void common_response_obj_sql_query_free(common_response_obj_sql_query_t *common_response_obj_sql_query) {
    if(NULL == common_response_obj_sql_query){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_obj_sql_query->s_query) {
        free(common_response_obj_sql_query->s_query);
        common_response_obj_sql_query->s_query = NULL;
    }
    free(common_response_obj_sql_query);
}

cJSON *common_response_obj_sql_query_convertToJSON(common_response_obj_sql_query_t *common_response_obj_sql_query) {
    cJSON *item = cJSON_CreateObject();

    // common_response_obj_sql_query->s_query
    if (!common_response_obj_sql_query->s_query) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sQuery", common_response_obj_sql_query->s_query) == NULL) {
    goto fail; //String
    }


    // common_response_obj_sql_query->f_duration
    if (!common_response_obj_sql_query->f_duration) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fDuration", common_response_obj_sql_query->f_duration) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_obj_sql_query_t *common_response_obj_sql_query_parseFromJSON(cJSON *common_response_obj_sql_queryJSON){

    common_response_obj_sql_query_t *common_response_obj_sql_query_local_var = NULL;

    // common_response_obj_sql_query->s_query
    cJSON *s_query = cJSON_GetObjectItemCaseSensitive(common_response_obj_sql_queryJSON, "sQuery");
    if (!s_query) {
        goto end;
    }

    
    if(!cJSON_IsString(s_query))
    {
    goto end; //String
    }

    // common_response_obj_sql_query->f_duration
    cJSON *f_duration = cJSON_GetObjectItemCaseSensitive(common_response_obj_sql_queryJSON, "fDuration");
    if (!f_duration) {
        goto end;
    }

    
    if(!cJSON_IsNumber(f_duration))
    {
    goto end; //Numeric
    }


    common_response_obj_sql_query_local_var = common_response_obj_sql_query_create (
        strdup(s_query->valuestring),
        f_duration->valuedouble
        );

    return common_response_obj_sql_query_local_var;
end:
    return NULL;

}

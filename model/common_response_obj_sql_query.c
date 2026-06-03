#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_obj_sql_query.h"



static common_response_obj_sql_query_t *common_response_obj_sql_query_create_internal(
    char *s_query,
    float *f_duration
    ) {
    common_response_obj_sql_query_t *common_response_obj_sql_query_local_var = malloc(sizeof(common_response_obj_sql_query_t));
    if (!common_response_obj_sql_query_local_var) {
        return NULL;
    }
    memset(common_response_obj_sql_query_local_var, 0, sizeof(common_response_obj_sql_query_t));
    common_response_obj_sql_query_local_var->_library_owned = 1;
    common_response_obj_sql_query_local_var->s_query = s_query;
    common_response_obj_sql_query_local_var->f_duration = f_duration;
    return common_response_obj_sql_query_local_var;
}

__attribute__((deprecated)) common_response_obj_sql_query_t *common_response_obj_sql_query_create(
    char *s_query,
    float *f_duration
    ) {
    float *f_duration_copy = NULL;
    if (f_duration) {
        f_duration_copy = malloc(sizeof(float));
        if (f_duration_copy) *f_duration_copy = *f_duration;
    }
    common_response_obj_sql_query_t *result = common_response_obj_sql_query_create_internal (
        s_query,
        f_duration_copy
        );
    if (!result) {
        free(f_duration_copy);
    }
    return result;
}

void common_response_obj_sql_query_free(common_response_obj_sql_query_t *common_response_obj_sql_query) {
    if(NULL == common_response_obj_sql_query){
        return ;
    }
    if(common_response_obj_sql_query->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_response_obj_sql_query_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_obj_sql_query->s_query) {
        free(common_response_obj_sql_query->s_query);
        common_response_obj_sql_query->s_query = NULL;
    }
    if (common_response_obj_sql_query->f_duration) {
        free(common_response_obj_sql_query->f_duration);
        common_response_obj_sql_query->f_duration = NULL;
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
    if(cJSON_AddNumberToObject(item, "fDuration", *common_response_obj_sql_query->f_duration) == NULL) {
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

    char *s_query_local_str = NULL;

    // define the local variable for common_response_obj_sql_query->f_duration
    float *f_duration_local_var = NULL;

    // common_response_obj_sql_query->s_query
    cJSON *s_query = cJSON_GetObjectItemCaseSensitive(common_response_obj_sql_queryJSON, "sQuery");
    if (cJSON_IsNull(s_query)) {
        s_query = NULL;
    }
    if (!s_query) {
        goto end;
    }

    
    if(!cJSON_IsString(s_query))
    {
    goto end; //String
    }

    // common_response_obj_sql_query->f_duration
    cJSON *f_duration = cJSON_GetObjectItemCaseSensitive(common_response_obj_sql_queryJSON, "fDuration");
    if (cJSON_IsNull(f_duration)) {
        f_duration = NULL;
    }
    if (!f_duration) {
        goto end;
    }

    
    if(!cJSON_IsNumber(f_duration))
    {
    goto end; //Numeric
    }
    f_duration_local_var = malloc(sizeof(float));
    if(!f_duration_local_var)
    {
        goto end;
    }
    *f_duration_local_var = f_duration->valuedouble;


    if (s_query && !cJSON_IsNull(s_query)) s_query_local_str = strdup(s_query->valuestring);

    common_response_obj_sql_query_local_var = common_response_obj_sql_query_create_internal (
        s_query_local_str,
        f_duration_local_var
        );

    if (!common_response_obj_sql_query_local_var) {
        goto end;
    }

    return common_response_obj_sql_query_local_var;
end:
    if (s_query_local_str) {
        free(s_query_local_str);
        s_query_local_str = NULL;
    }
    if (f_duration_local_var) {
        free(f_duration_local_var);
        f_duration_local_var = NULL;
    }
    return NULL;

}

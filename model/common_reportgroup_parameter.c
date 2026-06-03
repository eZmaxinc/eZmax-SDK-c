#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportgroup_parameter.h"



static common_reportgroup_parameter_t *common_reportgroup_parameter_create_internal(
    char *s_reportgroup_parameter_name,
    char *s_reportgroup_parameter_value,
    list_t *a_s_reportgroup_parameter_value
    ) {
    common_reportgroup_parameter_t *common_reportgroup_parameter_local_var = malloc(sizeof(common_reportgroup_parameter_t));
    if (!common_reportgroup_parameter_local_var) {
        return NULL;
    }
    memset(common_reportgroup_parameter_local_var, 0, sizeof(common_reportgroup_parameter_t));
    common_reportgroup_parameter_local_var->_library_owned = 1;
    common_reportgroup_parameter_local_var->s_reportgroup_parameter_name = s_reportgroup_parameter_name;
    common_reportgroup_parameter_local_var->s_reportgroup_parameter_value = s_reportgroup_parameter_value;
    common_reportgroup_parameter_local_var->a_s_reportgroup_parameter_value = a_s_reportgroup_parameter_value;
    return common_reportgroup_parameter_local_var;
}

__attribute__((deprecated)) common_reportgroup_parameter_t *common_reportgroup_parameter_create(
    char *s_reportgroup_parameter_name,
    char *s_reportgroup_parameter_value,
    list_t *a_s_reportgroup_parameter_value
    ) {
    common_reportgroup_parameter_t *result = common_reportgroup_parameter_create_internal (
        s_reportgroup_parameter_name,
        s_reportgroup_parameter_value,
        a_s_reportgroup_parameter_value
        );
    if (!result) {
    }
    return result;
}

void common_reportgroup_parameter_free(common_reportgroup_parameter_t *common_reportgroup_parameter) {
    if(NULL == common_reportgroup_parameter){
        return ;
    }
    if(common_reportgroup_parameter->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportgroup_parameter_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportgroup_parameter->s_reportgroup_parameter_name) {
        free(common_reportgroup_parameter->s_reportgroup_parameter_name);
        common_reportgroup_parameter->s_reportgroup_parameter_name = NULL;
    }
    if (common_reportgroup_parameter->s_reportgroup_parameter_value) {
        free(common_reportgroup_parameter->s_reportgroup_parameter_value);
        common_reportgroup_parameter->s_reportgroup_parameter_value = NULL;
    }
    if (common_reportgroup_parameter->a_s_reportgroup_parameter_value) {
        list_ForEach(listEntry, common_reportgroup_parameter->a_s_reportgroup_parameter_value) {
            free(listEntry->data);
        }
        list_freeList(common_reportgroup_parameter->a_s_reportgroup_parameter_value);
        common_reportgroup_parameter->a_s_reportgroup_parameter_value = NULL;
    }
    free(common_reportgroup_parameter);
}

cJSON *common_reportgroup_parameter_convertToJSON(common_reportgroup_parameter_t *common_reportgroup_parameter) {
    cJSON *item = cJSON_CreateObject();

    // common_reportgroup_parameter->s_reportgroup_parameter_name
    if (!common_reportgroup_parameter->s_reportgroup_parameter_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sReportgroupParameterName", common_reportgroup_parameter->s_reportgroup_parameter_name) == NULL) {
    goto fail; //String
    }


    // common_reportgroup_parameter->s_reportgroup_parameter_value
    if(common_reportgroup_parameter->s_reportgroup_parameter_value) {
    if(cJSON_AddStringToObject(item, "sReportgroupParameterValue", common_reportgroup_parameter->s_reportgroup_parameter_value) == NULL) {
    goto fail; //String
    }
    }


    // common_reportgroup_parameter->a_s_reportgroup_parameter_value
    if(common_reportgroup_parameter->a_s_reportgroup_parameter_value) {
    cJSON *a_s_reportgroup_parameter_value = cJSON_AddArrayToObject(item, "a_sReportgroupParameterValue");
    if(a_s_reportgroup_parameter_value == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_reportgroup_parameter_valueListEntry;
    list_ForEach(a_s_reportgroup_parameter_valueListEntry, common_reportgroup_parameter->a_s_reportgroup_parameter_value) {
    if(cJSON_AddStringToObject(a_s_reportgroup_parameter_value, "", a_s_reportgroup_parameter_valueListEntry->data) == NULL)
    {
        goto fail;
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

common_reportgroup_parameter_t *common_reportgroup_parameter_parseFromJSON(cJSON *common_reportgroup_parameterJSON){

    common_reportgroup_parameter_t *common_reportgroup_parameter_local_var = NULL;

    char *s_reportgroup_parameter_name_local_str = NULL;

    char *s_reportgroup_parameter_value_local_str = NULL;

    // define the local list for common_reportgroup_parameter->a_s_reportgroup_parameter_value
    list_t *a_s_reportgroup_parameter_valueList = NULL;

    // common_reportgroup_parameter->s_reportgroup_parameter_name
    cJSON *s_reportgroup_parameter_name = cJSON_GetObjectItemCaseSensitive(common_reportgroup_parameterJSON, "sReportgroupParameterName");
    if (cJSON_IsNull(s_reportgroup_parameter_name)) {
        s_reportgroup_parameter_name = NULL;
    }
    if (!s_reportgroup_parameter_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_reportgroup_parameter_name))
    {
    goto end; //String
    }

    // common_reportgroup_parameter->s_reportgroup_parameter_value
    cJSON *s_reportgroup_parameter_value = cJSON_GetObjectItemCaseSensitive(common_reportgroup_parameterJSON, "sReportgroupParameterValue");
    if (cJSON_IsNull(s_reportgroup_parameter_value)) {
        s_reportgroup_parameter_value = NULL;
    }
    if (s_reportgroup_parameter_value) { 
    if(!cJSON_IsString(s_reportgroup_parameter_value) && !cJSON_IsNull(s_reportgroup_parameter_value))
    {
    goto end; //String
    }
    }

    // common_reportgroup_parameter->a_s_reportgroup_parameter_value
    cJSON *a_s_reportgroup_parameter_value = cJSON_GetObjectItemCaseSensitive(common_reportgroup_parameterJSON, "a_sReportgroupParameterValue");
    if (cJSON_IsNull(a_s_reportgroup_parameter_value)) {
        a_s_reportgroup_parameter_value = NULL;
    }
    if (a_s_reportgroup_parameter_value) { 
    cJSON *a_s_reportgroup_parameter_value_local = NULL;
    if(!cJSON_IsArray(a_s_reportgroup_parameter_value)) {
        goto end;//primitive container
    }
    a_s_reportgroup_parameter_valueList = list_createList();

    cJSON_ArrayForEach(a_s_reportgroup_parameter_value_local, a_s_reportgroup_parameter_value)
    {
        if(!cJSON_IsString(a_s_reportgroup_parameter_value_local))
        {
            goto end;
        }
        list_addElement(a_s_reportgroup_parameter_valueList , strdup(a_s_reportgroup_parameter_value_local->valuestring));
    }
    }


    if (s_reportgroup_parameter_name && !cJSON_IsNull(s_reportgroup_parameter_name)) s_reportgroup_parameter_name_local_str = strdup(s_reportgroup_parameter_name->valuestring);
    if (s_reportgroup_parameter_value && !cJSON_IsNull(s_reportgroup_parameter_value)) s_reportgroup_parameter_value_local_str = strdup(s_reportgroup_parameter_value->valuestring);

    common_reportgroup_parameter_local_var = common_reportgroup_parameter_create_internal (
        s_reportgroup_parameter_name_local_str,
        s_reportgroup_parameter_value_local_str,
        a_s_reportgroup_parameter_value ? a_s_reportgroup_parameter_valueList : NULL
        );

    if (!common_reportgroup_parameter_local_var) {
        goto end;
    }

    return common_reportgroup_parameter_local_var;
end:
    if (s_reportgroup_parameter_name_local_str) {
        free(s_reportgroup_parameter_name_local_str);
        s_reportgroup_parameter_name_local_str = NULL;
    }
    if (s_reportgroup_parameter_value_local_str) {
        free(s_reportgroup_parameter_value_local_str);
        s_reportgroup_parameter_value_local_str = NULL;
    }
    if (a_s_reportgroup_parameter_valueList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_reportgroup_parameter_valueList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_reportgroup_parameter_valueList);
        a_s_reportgroup_parameter_valueList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportgroup.h"



static common_reportgroup_t *common_reportgroup_create_internal(
    list_t *a_obj_report,
    list_t *a_obj_reportcellstyle_custom,
    list_t *a_obj_reportgroup_parameter,
    char *s_reportgroup_filename
    ) {
    common_reportgroup_t *common_reportgroup_local_var = malloc(sizeof(common_reportgroup_t));
    if (!common_reportgroup_local_var) {
        return NULL;
    }
    memset(common_reportgroup_local_var, 0, sizeof(common_reportgroup_t));
    common_reportgroup_local_var->_library_owned = 1;
    common_reportgroup_local_var->a_obj_report = a_obj_report;
    common_reportgroup_local_var->a_obj_reportcellstyle_custom = a_obj_reportcellstyle_custom;
    common_reportgroup_local_var->a_obj_reportgroup_parameter = a_obj_reportgroup_parameter;
    common_reportgroup_local_var->s_reportgroup_filename = s_reportgroup_filename;
    return common_reportgroup_local_var;
}

__attribute__((deprecated)) common_reportgroup_t *common_reportgroup_create(
    list_t *a_obj_report,
    list_t *a_obj_reportcellstyle_custom,
    list_t *a_obj_reportgroup_parameter,
    char *s_reportgroup_filename
    ) {
    common_reportgroup_t *result = common_reportgroup_create_internal (
        a_obj_report,
        a_obj_reportcellstyle_custom,
        a_obj_reportgroup_parameter,
        s_reportgroup_filename
        );
    if (!result) {
    }
    return result;
}

void common_reportgroup_free(common_reportgroup_t *common_reportgroup) {
    if(NULL == common_reportgroup){
        return ;
    }
    if(common_reportgroup->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportgroup_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportgroup->a_obj_report) {
        list_ForEach(listEntry, common_reportgroup->a_obj_report) {
            common_report_free(listEntry->data);
        }
        list_freeList(common_reportgroup->a_obj_report);
        common_reportgroup->a_obj_report = NULL;
    }
    if (common_reportgroup->a_obj_reportcellstyle_custom) {
        list_ForEach(listEntry, common_reportgroup->a_obj_reportcellstyle_custom) {
            common_reportcellstyle_free(listEntry->data);
        }
        list_freeList(common_reportgroup->a_obj_reportcellstyle_custom);
        common_reportgroup->a_obj_reportcellstyle_custom = NULL;
    }
    if (common_reportgroup->a_obj_reportgroup_parameter) {
        list_ForEach(listEntry, common_reportgroup->a_obj_reportgroup_parameter) {
            common_reportgroup_parameter_free(listEntry->data);
        }
        list_freeList(common_reportgroup->a_obj_reportgroup_parameter);
        common_reportgroup->a_obj_reportgroup_parameter = NULL;
    }
    if (common_reportgroup->s_reportgroup_filename) {
        free(common_reportgroup->s_reportgroup_filename);
        common_reportgroup->s_reportgroup_filename = NULL;
    }
    free(common_reportgroup);
}

cJSON *common_reportgroup_convertToJSON(common_reportgroup_t *common_reportgroup) {
    cJSON *item = cJSON_CreateObject();

    // common_reportgroup->a_obj_report
    if (!common_reportgroup->a_obj_report) {
        goto fail;
    }
    cJSON *a_obj_report = cJSON_AddArrayToObject(item, "a_objReport");
    if(a_obj_report == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportListEntry;
    if (common_reportgroup->a_obj_report) {
    list_ForEach(a_obj_reportListEntry, common_reportgroup->a_obj_report) {
    cJSON *itemLocal = common_report_convertToJSON(a_obj_reportListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_report, itemLocal);
    }
    }


    // common_reportgroup->a_obj_reportcellstyle_custom
    if (!common_reportgroup->a_obj_reportcellstyle_custom) {
        goto fail;
    }
    cJSON *a_obj_reportcellstyle_custom = cJSON_AddArrayToObject(item, "a_objReportcellstyleCustom");
    if(a_obj_reportcellstyle_custom == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportcellstyle_customListEntry;
    if (common_reportgroup->a_obj_reportcellstyle_custom) {
    list_ForEach(a_obj_reportcellstyle_customListEntry, common_reportgroup->a_obj_reportcellstyle_custom) {
    cJSON *itemLocal = common_reportcellstyle_convertToJSON(a_obj_reportcellstyle_customListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportcellstyle_custom, itemLocal);
    }
    }


    // common_reportgroup->a_obj_reportgroup_parameter
    if (!common_reportgroup->a_obj_reportgroup_parameter) {
        goto fail;
    }
    cJSON *a_obj_reportgroup_parameter = cJSON_AddArrayToObject(item, "a_objReportgroupParameter");
    if(a_obj_reportgroup_parameter == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportgroup_parameterListEntry;
    if (common_reportgroup->a_obj_reportgroup_parameter) {
    list_ForEach(a_obj_reportgroup_parameterListEntry, common_reportgroup->a_obj_reportgroup_parameter) {
    cJSON *itemLocal = common_reportgroup_parameter_convertToJSON(a_obj_reportgroup_parameterListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportgroup_parameter, itemLocal);
    }
    }


    // common_reportgroup->s_reportgroup_filename
    if (!common_reportgroup->s_reportgroup_filename) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sReportgroupFilename", common_reportgroup->s_reportgroup_filename) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_reportgroup_t *common_reportgroup_parseFromJSON(cJSON *common_reportgroupJSON){

    common_reportgroup_t *common_reportgroup_local_var = NULL;

    // define the local list for common_reportgroup->a_obj_report
    list_t *a_obj_reportList = NULL;

    // define the local list for common_reportgroup->a_obj_reportcellstyle_custom
    list_t *a_obj_reportcellstyle_customList = NULL;

    // define the local list for common_reportgroup->a_obj_reportgroup_parameter
    list_t *a_obj_reportgroup_parameterList = NULL;

    char *s_reportgroup_filename_local_str = NULL;

    // common_reportgroup->a_obj_report
    cJSON *a_obj_report = cJSON_GetObjectItemCaseSensitive(common_reportgroupJSON, "a_objReport");
    if (cJSON_IsNull(a_obj_report)) {
        a_obj_report = NULL;
    }
    if (!a_obj_report) {
        goto end;
    }

    
    cJSON *a_obj_report_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_report)){
        goto end; //nonprimitive container
    }

    a_obj_reportList = list_createList();

    cJSON_ArrayForEach(a_obj_report_local_nonprimitive,a_obj_report )
    {
        if(!cJSON_IsObject(a_obj_report_local_nonprimitive)){
            goto end;
        }
        common_report_t *a_obj_reportItem = common_report_parseFromJSON(a_obj_report_local_nonprimitive);

        list_addElement(a_obj_reportList, a_obj_reportItem);
    }

    // common_reportgroup->a_obj_reportcellstyle_custom
    cJSON *a_obj_reportcellstyle_custom = cJSON_GetObjectItemCaseSensitive(common_reportgroupJSON, "a_objReportcellstyleCustom");
    if (cJSON_IsNull(a_obj_reportcellstyle_custom)) {
        a_obj_reportcellstyle_custom = NULL;
    }
    if (!a_obj_reportcellstyle_custom) {
        goto end;
    }

    
    cJSON *a_obj_reportcellstyle_custom_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportcellstyle_custom)){
        goto end; //nonprimitive container
    }

    a_obj_reportcellstyle_customList = list_createList();

    cJSON_ArrayForEach(a_obj_reportcellstyle_custom_local_nonprimitive,a_obj_reportcellstyle_custom )
    {
        if(!cJSON_IsObject(a_obj_reportcellstyle_custom_local_nonprimitive)){
            goto end;
        }
        common_reportcellstyle_t *a_obj_reportcellstyle_customItem = common_reportcellstyle_parseFromJSON(a_obj_reportcellstyle_custom_local_nonprimitive);

        list_addElement(a_obj_reportcellstyle_customList, a_obj_reportcellstyle_customItem);
    }

    // common_reportgroup->a_obj_reportgroup_parameter
    cJSON *a_obj_reportgroup_parameter = cJSON_GetObjectItemCaseSensitive(common_reportgroupJSON, "a_objReportgroupParameter");
    if (cJSON_IsNull(a_obj_reportgroup_parameter)) {
        a_obj_reportgroup_parameter = NULL;
    }
    if (!a_obj_reportgroup_parameter) {
        goto end;
    }

    
    cJSON *a_obj_reportgroup_parameter_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportgroup_parameter)){
        goto end; //nonprimitive container
    }

    a_obj_reportgroup_parameterList = list_createList();

    cJSON_ArrayForEach(a_obj_reportgroup_parameter_local_nonprimitive,a_obj_reportgroup_parameter )
    {
        if(!cJSON_IsObject(a_obj_reportgroup_parameter_local_nonprimitive)){
            goto end;
        }
        common_reportgroup_parameter_t *a_obj_reportgroup_parameterItem = common_reportgroup_parameter_parseFromJSON(a_obj_reportgroup_parameter_local_nonprimitive);

        list_addElement(a_obj_reportgroup_parameterList, a_obj_reportgroup_parameterItem);
    }

    // common_reportgroup->s_reportgroup_filename
    cJSON *s_reportgroup_filename = cJSON_GetObjectItemCaseSensitive(common_reportgroupJSON, "sReportgroupFilename");
    if (cJSON_IsNull(s_reportgroup_filename)) {
        s_reportgroup_filename = NULL;
    }
    if (!s_reportgroup_filename) {
        goto end;
    }

    
    if(!cJSON_IsString(s_reportgroup_filename))
    {
    goto end; //String
    }


    if (s_reportgroup_filename && !cJSON_IsNull(s_reportgroup_filename)) s_reportgroup_filename_local_str = strdup(s_reportgroup_filename->valuestring);

    common_reportgroup_local_var = common_reportgroup_create_internal (
        a_obj_reportList,
        a_obj_reportcellstyle_customList,
        a_obj_reportgroup_parameterList,
        s_reportgroup_filename_local_str
        );

    if (!common_reportgroup_local_var) {
        goto end;
    }

    return common_reportgroup_local_var;
end:
    if (a_obj_reportList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportList) {
            common_report_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportList);
        a_obj_reportList = NULL;
    }
    if (a_obj_reportcellstyle_customList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportcellstyle_customList) {
            common_reportcellstyle_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportcellstyle_customList);
        a_obj_reportcellstyle_customList = NULL;
    }
    if (a_obj_reportgroup_parameterList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportgroup_parameterList) {
            common_reportgroup_parameter_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportgroup_parameterList);
        a_obj_reportgroup_parameterList = NULL;
    }
    if (s_reportgroup_filename_local_str) {
        free(s_reportgroup_filename_local_str);
        s_reportgroup_filename_local_str = NULL;
    }
    return NULL;

}

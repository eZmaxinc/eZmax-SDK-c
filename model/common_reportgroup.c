#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportgroup.h"



static common_reportgroup_t *common_reportgroup_create_internal(
    list_t *a_obj_report,
    list_t *a_obj_reportcellstyle_custom
    ) {
    common_reportgroup_t *common_reportgroup_local_var = malloc(sizeof(common_reportgroup_t));
    if (!common_reportgroup_local_var) {
        return NULL;
    }
    common_reportgroup_local_var->a_obj_report = a_obj_report;
    common_reportgroup_local_var->a_obj_reportcellstyle_custom = a_obj_reportcellstyle_custom;

    common_reportgroup_local_var->_library_owned = 1;
    return common_reportgroup_local_var;
}

__attribute__((deprecated)) common_reportgroup_t *common_reportgroup_create(
    list_t *a_obj_report,
    list_t *a_obj_reportcellstyle_custom
    ) {
    return common_reportgroup_create_internal (
        a_obj_report,
        a_obj_reportcellstyle_custom
        );
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


    common_reportgroup_local_var = common_reportgroup_create_internal (
        a_obj_reportList,
        a_obj_reportcellstyle_customList
        );

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
    return NULL;

}

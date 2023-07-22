#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_report.h"



common_report_t *common_report_create(
    list_t *a_obj_reportsection
    ) {
    common_report_t *common_report_local_var = malloc(sizeof(common_report_t));
    if (!common_report_local_var) {
        return NULL;
    }
    common_report_local_var->a_obj_reportsection = a_obj_reportsection;

    return common_report_local_var;
}


void common_report_free(common_report_t *common_report) {
    if(NULL == common_report){
        return ;
    }
    listEntry_t *listEntry;
    if (common_report->a_obj_reportsection) {
        list_ForEach(listEntry, common_report->a_obj_reportsection) {
            common_reportsection_free(listEntry->data);
        }
        list_freeList(common_report->a_obj_reportsection);
        common_report->a_obj_reportsection = NULL;
    }
    free(common_report);
}

cJSON *common_report_convertToJSON(common_report_t *common_report) {
    cJSON *item = cJSON_CreateObject();

    // common_report->a_obj_reportsection
    if (!common_report->a_obj_reportsection) {
        goto fail;
    }
    cJSON *a_obj_reportsection = cJSON_AddArrayToObject(item, "a_objReportsection");
    if(a_obj_reportsection == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportsectionListEntry;
    if (common_report->a_obj_reportsection) {
    list_ForEach(a_obj_reportsectionListEntry, common_report->a_obj_reportsection) {
    cJSON *itemLocal = common_reportsection_convertToJSON(a_obj_reportsectionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportsection, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_report_t *common_report_parseFromJSON(cJSON *common_reportJSON){

    common_report_t *common_report_local_var = NULL;

    // define the local list for common_report->a_obj_reportsection
    list_t *a_obj_reportsectionList = NULL;

    // common_report->a_obj_reportsection
    cJSON *a_obj_reportsection = cJSON_GetObjectItemCaseSensitive(common_reportJSON, "a_objReportsection");
    if (!a_obj_reportsection) {
        goto end;
    }

    
    cJSON *a_obj_reportsection_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportsection)){
        goto end; //nonprimitive container
    }

    a_obj_reportsectionList = list_createList();

    cJSON_ArrayForEach(a_obj_reportsection_local_nonprimitive,a_obj_reportsection )
    {
        if(!cJSON_IsObject(a_obj_reportsection_local_nonprimitive)){
            goto end;
        }
        common_reportsection_t *a_obj_reportsectionItem = common_reportsection_parseFromJSON(a_obj_reportsection_local_nonprimitive);

        list_addElement(a_obj_reportsectionList, a_obj_reportsectionItem);
    }


    common_report_local_var = common_report_create (
        a_obj_reportsectionList
        );

    return common_report_local_var;
end:
    if (a_obj_reportsectionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportsectionList) {
            common_reportsection_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportsectionList);
        a_obj_reportsectionList = NULL;
    }
    return NULL;

}

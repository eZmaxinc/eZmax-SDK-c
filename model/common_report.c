#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_report.h"



static common_report_t *common_report_create_internal(
    list_t *a_obj_reportsection,
    int *b_report_paginate,
    char *s_report_title
    ) {
    common_report_t *common_report_local_var = malloc(sizeof(common_report_t));
    if (!common_report_local_var) {
        return NULL;
    }
    memset(common_report_local_var, 0, sizeof(common_report_t));
    common_report_local_var->_library_owned = 1;
    common_report_local_var->a_obj_reportsection = a_obj_reportsection;
    common_report_local_var->b_report_paginate = b_report_paginate;
    common_report_local_var->s_report_title = s_report_title;
    return common_report_local_var;
}

__attribute__((deprecated)) common_report_t *common_report_create(
    list_t *a_obj_reportsection,
    int *b_report_paginate,
    char *s_report_title
    ) {
    int *b_report_paginate_copy = NULL;
    if (b_report_paginate) {
        b_report_paginate_copy = malloc(sizeof(int));
        if (b_report_paginate_copy) *b_report_paginate_copy = *b_report_paginate;
    }
    common_report_t *result = common_report_create_internal (
        a_obj_reportsection,
        b_report_paginate_copy,
        s_report_title
        );
    if (!result) {
        free(b_report_paginate_copy);
    }
    return result;
}

void common_report_free(common_report_t *common_report) {
    if(NULL == common_report){
        return ;
    }
    if(common_report->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_report_free");
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
    if (common_report->b_report_paginate) {
        free(common_report->b_report_paginate);
        common_report->b_report_paginate = NULL;
    }
    if (common_report->s_report_title) {
        free(common_report->s_report_title);
        common_report->s_report_title = NULL;
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


    // common_report->b_report_paginate
    if(common_report->b_report_paginate) {
    if(cJSON_AddBoolToObject(item, "bReportPaginate", *common_report->b_report_paginate) == NULL) {
    goto fail; //Bool
    }
    }


    // common_report->s_report_title
    if(common_report->s_report_title) {
    if(cJSON_AddStringToObject(item, "sReportTitle", common_report->s_report_title) == NULL) {
    goto fail; //String
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

    // define the local variable for common_report->b_report_paginate
    int *b_report_paginate_local_var = NULL;

    char *s_report_title_local_str = NULL;

    // common_report->a_obj_reportsection
    cJSON *a_obj_reportsection = cJSON_GetObjectItemCaseSensitive(common_reportJSON, "a_objReportsection");
    if (cJSON_IsNull(a_obj_reportsection)) {
        a_obj_reportsection = NULL;
    }
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

    // common_report->b_report_paginate
    cJSON *b_report_paginate = cJSON_GetObjectItemCaseSensitive(common_reportJSON, "bReportPaginate");
    if (cJSON_IsNull(b_report_paginate)) {
        b_report_paginate = NULL;
    }
    if (b_report_paginate) { 
    if(!cJSON_IsBool(b_report_paginate))
    {
    goto end; //Bool
    }
    b_report_paginate_local_var = malloc(sizeof(int));
    if(!b_report_paginate_local_var)
    {
        goto end;
    }
    *b_report_paginate_local_var = b_report_paginate->valueint;
    }

    // common_report->s_report_title
    cJSON *s_report_title = cJSON_GetObjectItemCaseSensitive(common_reportJSON, "sReportTitle");
    if (cJSON_IsNull(s_report_title)) {
        s_report_title = NULL;
    }
    if (s_report_title) { 
    if(!cJSON_IsString(s_report_title) && !cJSON_IsNull(s_report_title))
    {
    goto end; //String
    }
    }


    if (s_report_title && !cJSON_IsNull(s_report_title)) s_report_title_local_str = strdup(s_report_title->valuestring);

    common_report_local_var = common_report_create_internal (
        a_obj_reportsectionList,
        b_report_paginate_local_var,
        s_report_title_local_str
        );

    if (!common_report_local_var) {
        goto end;
    }

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
    if (b_report_paginate_local_var) {
        free(b_report_paginate_local_var);
        b_report_paginate_local_var = NULL;
    }
    if (s_report_title_local_str) {
        free(s_report_title_local_str);
        s_report_title_local_str = NULL;
    }
    return NULL;

}

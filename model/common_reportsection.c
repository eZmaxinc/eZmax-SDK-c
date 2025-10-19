#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportsection.h"



static common_reportsection_t *common_reportsection_create_internal(
    list_t *a_obj_reportsubsection,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportsection_horizontalalignment,
    char *s_reportsection_title
    ) {
    common_reportsection_t *common_reportsection_local_var = malloc(sizeof(common_reportsection_t));
    if (!common_reportsection_local_var) {
        return NULL;
    }
    common_reportsection_local_var->a_obj_reportsubsection = a_obj_reportsubsection;
    common_reportsection_local_var->e_reportsection_horizontalalignment = e_reportsection_horizontalalignment;
    common_reportsection_local_var->s_reportsection_title = s_reportsection_title;

    common_reportsection_local_var->_library_owned = 1;
    return common_reportsection_local_var;
}

__attribute__((deprecated)) common_reportsection_t *common_reportsection_create(
    list_t *a_obj_reportsubsection,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportsection_horizontalalignment,
    char *s_reportsection_title
    ) {
    return common_reportsection_create_internal (
        a_obj_reportsubsection,
        e_reportsection_horizontalalignment,
        s_reportsection_title
        );
}

void common_reportsection_free(common_reportsection_t *common_reportsection) {
    if(NULL == common_reportsection){
        return ;
    }
    if(common_reportsection->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportsection_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportsection->a_obj_reportsubsection) {
        list_ForEach(listEntry, common_reportsection->a_obj_reportsubsection) {
            common_reportsubsection_free(listEntry->data);
        }
        list_freeList(common_reportsection->a_obj_reportsubsection);
        common_reportsection->a_obj_reportsubsection = NULL;
    }
    if (common_reportsection->s_reportsection_title) {
        free(common_reportsection->s_reportsection_title);
        common_reportsection->s_reportsection_title = NULL;
    }
    free(common_reportsection);
}

cJSON *common_reportsection_convertToJSON(common_reportsection_t *common_reportsection) {
    cJSON *item = cJSON_CreateObject();

    // common_reportsection->a_obj_reportsubsection
    if (!common_reportsection->a_obj_reportsubsection) {
        goto fail;
    }
    cJSON *a_obj_reportsubsection = cJSON_AddArrayToObject(item, "a_objReportsubsection");
    if(a_obj_reportsubsection == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportsubsectionListEntry;
    if (common_reportsection->a_obj_reportsubsection) {
    list_ForEach(a_obj_reportsubsectionListEntry, common_reportsection->a_obj_reportsubsection) {
    cJSON *itemLocal = common_reportsubsection_convertToJSON(a_obj_reportsubsectionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportsubsection, itemLocal);
    }
    }


    // common_reportsection->e_reportsection_horizontalalignment
    if (ezmax_api_definition__full_enum_horizontalalignment__NULL == common_reportsection->e_reportsection_horizontalalignment) {
        goto fail;
    }
    cJSON *e_reportsection_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(common_reportsection->e_reportsection_horizontalalignment);
    if(e_reportsection_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportsectionHorizontalalignment", e_reportsection_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportsection->s_reportsection_title
    if(common_reportsection->s_reportsection_title) {
    if(cJSON_AddStringToObject(item, "sReportsectionTitle", common_reportsection->s_reportsection_title) == NULL) {
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

common_reportsection_t *common_reportsection_parseFromJSON(cJSON *common_reportsectionJSON){

    common_reportsection_t *common_reportsection_local_var = NULL;

    // define the local list for common_reportsection->a_obj_reportsubsection
    list_t *a_obj_reportsubsectionList = NULL;

    // define the local variable for common_reportsection->e_reportsection_horizontalalignment
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportsection_horizontalalignment_local_nonprim = 0;

    // common_reportsection->a_obj_reportsubsection
    cJSON *a_obj_reportsubsection = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "a_objReportsubsection");
    if (cJSON_IsNull(a_obj_reportsubsection)) {
        a_obj_reportsubsection = NULL;
    }
    if (!a_obj_reportsubsection) {
        goto end;
    }

    
    cJSON *a_obj_reportsubsection_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportsubsection)){
        goto end; //nonprimitive container
    }

    a_obj_reportsubsectionList = list_createList();

    cJSON_ArrayForEach(a_obj_reportsubsection_local_nonprimitive,a_obj_reportsubsection )
    {
        if(!cJSON_IsObject(a_obj_reportsubsection_local_nonprimitive)){
            goto end;
        }
        common_reportsubsection_t *a_obj_reportsubsectionItem = common_reportsubsection_parseFromJSON(a_obj_reportsubsection_local_nonprimitive);

        list_addElement(a_obj_reportsubsectionList, a_obj_reportsubsectionItem);
    }

    // common_reportsection->e_reportsection_horizontalalignment
    cJSON *e_reportsection_horizontalalignment = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "eReportsectionHorizontalalignment");
    if (cJSON_IsNull(e_reportsection_horizontalalignment)) {
        e_reportsection_horizontalalignment = NULL;
    }
    if (!e_reportsection_horizontalalignment) {
        goto end;
    }

    
    e_reportsection_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_reportsection_horizontalalignment); //custom

    // common_reportsection->s_reportsection_title
    cJSON *s_reportsection_title = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "sReportsectionTitle");
    if (cJSON_IsNull(s_reportsection_title)) {
        s_reportsection_title = NULL;
    }
    if (s_reportsection_title) { 
    if(!cJSON_IsString(s_reportsection_title) && !cJSON_IsNull(s_reportsection_title))
    {
    goto end; //String
    }
    }


    common_reportsection_local_var = common_reportsection_create_internal (
        a_obj_reportsubsectionList,
        e_reportsection_horizontalalignment_local_nonprim,
        s_reportsection_title && !cJSON_IsNull(s_reportsection_title) ? strdup(s_reportsection_title->valuestring) : NULL
        );

    return common_reportsection_local_var;
end:
    if (a_obj_reportsubsectionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportsubsectionList) {
            common_reportsubsection_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportsubsectionList);
        a_obj_reportsubsectionList = NULL;
    }
    if (e_reportsection_horizontalalignment_local_nonprim) {
        e_reportsection_horizontalalignment_local_nonprim = 0;
    }
    return NULL;

}

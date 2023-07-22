#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportsection.h"


char* e_reportsection_horizontalalignmentcommon_reportsection_ToString(ezmax_api_definition__full_common_reportsection__e e_reportsection_horizontalalignment) {
    char* e_reportsection_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
	return e_reportsection_horizontalalignmentArray[e_reportsection_horizontalalignment];
}

ezmax_api_definition__full_common_reportsection__e e_reportsection_horizontalalignmentcommon_reportsection_FromString(char* e_reportsection_horizontalalignment){
    int stringToReturn = 0;
    char *e_reportsection_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    size_t sizeofArray = sizeof(e_reportsection_horizontalalignmentArray) / sizeof(e_reportsection_horizontalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_reportsection_horizontalalignment, e_reportsection_horizontalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

common_reportsection_t *common_reportsection_create(
    list_t *a_obj_reportsubsection,
    list_t *a_obj_reportcolumn,
    enum_horizontalalignment_t *e_reportsection_horizontalalignment,
    int i_reportsection_columncount,
    int i_reportsection_width
    ) {
    common_reportsection_t *common_reportsection_local_var = malloc(sizeof(common_reportsection_t));
    if (!common_reportsection_local_var) {
        return NULL;
    }
    common_reportsection_local_var->a_obj_reportsubsection = a_obj_reportsubsection;
    common_reportsection_local_var->a_obj_reportcolumn = a_obj_reportcolumn;
    common_reportsection_local_var->e_reportsection_horizontalalignment = e_reportsection_horizontalalignment;
    common_reportsection_local_var->i_reportsection_columncount = i_reportsection_columncount;
    common_reportsection_local_var->i_reportsection_width = i_reportsection_width;

    return common_reportsection_local_var;
}


void common_reportsection_free(common_reportsection_t *common_reportsection) {
    if(NULL == common_reportsection){
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
    if (common_reportsection->a_obj_reportcolumn) {
        list_ForEach(listEntry, common_reportsection->a_obj_reportcolumn) {
            common_reportcolumn_free(listEntry->data);
        }
        list_freeList(common_reportsection->a_obj_reportcolumn);
        common_reportsection->a_obj_reportcolumn = NULL;
    }
    if (common_reportsection->e_reportsection_horizontalalignment) {
        enum_horizontalalignment_free(common_reportsection->e_reportsection_horizontalalignment);
        common_reportsection->e_reportsection_horizontalalignment = NULL;
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


    // common_reportsection->a_obj_reportcolumn
    if (!common_reportsection->a_obj_reportcolumn) {
        goto fail;
    }
    cJSON *a_obj_reportcolumn = cJSON_AddArrayToObject(item, "a_objReportcolumn");
    if(a_obj_reportcolumn == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportcolumnListEntry;
    if (common_reportsection->a_obj_reportcolumn) {
    list_ForEach(a_obj_reportcolumnListEntry, common_reportsection->a_obj_reportcolumn) {
    cJSON *itemLocal = common_reportcolumn_convertToJSON(a_obj_reportcolumnListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportcolumn, itemLocal);
    }
    }


    // common_reportsection->e_reportsection_horizontalalignment
    if (ezmax_api_definition__full_common_reportsection__NULL == common_reportsection->e_reportsection_horizontalalignment) {
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


    // common_reportsection->i_reportsection_columncount
    if (!common_reportsection->i_reportsection_columncount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportsectionColumncount", common_reportsection->i_reportsection_columncount) == NULL) {
    goto fail; //Numeric
    }


    // common_reportsection->i_reportsection_width
    if (!common_reportsection->i_reportsection_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportsectionWidth", common_reportsection->i_reportsection_width) == NULL) {
    goto fail; //Numeric
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

    // define the local list for common_reportsection->a_obj_reportcolumn
    list_t *a_obj_reportcolumnList = NULL;

    // define the local variable for common_reportsection->e_reportsection_horizontalalignment
    enum_horizontalalignment_t *e_reportsection_horizontalalignment_local_nonprim = NULL;

    // common_reportsection->a_obj_reportsubsection
    cJSON *a_obj_reportsubsection = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "a_objReportsubsection");
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

    // common_reportsection->a_obj_reportcolumn
    cJSON *a_obj_reportcolumn = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "a_objReportcolumn");
    if (!a_obj_reportcolumn) {
        goto end;
    }

    
    cJSON *a_obj_reportcolumn_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportcolumn)){
        goto end; //nonprimitive container
    }

    a_obj_reportcolumnList = list_createList();

    cJSON_ArrayForEach(a_obj_reportcolumn_local_nonprimitive,a_obj_reportcolumn )
    {
        if(!cJSON_IsObject(a_obj_reportcolumn_local_nonprimitive)){
            goto end;
        }
        common_reportcolumn_t *a_obj_reportcolumnItem = common_reportcolumn_parseFromJSON(a_obj_reportcolumn_local_nonprimitive);

        list_addElement(a_obj_reportcolumnList, a_obj_reportcolumnItem);
    }

    // common_reportsection->e_reportsection_horizontalalignment
    cJSON *e_reportsection_horizontalalignment = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "eReportsectionHorizontalalignment");
    if (!e_reportsection_horizontalalignment) {
        goto end;
    }

    
    e_reportsection_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_reportsection_horizontalalignment); //custom

    // common_reportsection->i_reportsection_columncount
    cJSON *i_reportsection_columncount = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "iReportsectionColumncount");
    if (!i_reportsection_columncount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportsection_columncount))
    {
    goto end; //Numeric
    }

    // common_reportsection->i_reportsection_width
    cJSON *i_reportsection_width = cJSON_GetObjectItemCaseSensitive(common_reportsectionJSON, "iReportsectionWidth");
    if (!i_reportsection_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportsection_width))
    {
    goto end; //Numeric
    }


    common_reportsection_local_var = common_reportsection_create (
        a_obj_reportsubsectionList,
        a_obj_reportcolumnList,
        e_reportsection_horizontalalignment_local_nonprim,
        i_reportsection_columncount->valuedouble,
        i_reportsection_width->valuedouble
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
    if (a_obj_reportcolumnList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportcolumnList) {
            common_reportcolumn_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportcolumnList);
        a_obj_reportcolumnList = NULL;
    }
    if (e_reportsection_horizontalalignment_local_nonprim) {
        enum_horizontalalignment_free(e_reportsection_horizontalalignment_local_nonprim);
        e_reportsection_horizontalalignment_local_nonprim = NULL;
    }
    return NULL;

}

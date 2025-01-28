#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportrow.h"



static common_reportrow_t *common_reportrow_create_internal(
    list_t *a_obj_reportcell,
    int i_reportrow_height
    ) {
    common_reportrow_t *common_reportrow_local_var = malloc(sizeof(common_reportrow_t));
    if (!common_reportrow_local_var) {
        return NULL;
    }
    common_reportrow_local_var->a_obj_reportcell = a_obj_reportcell;
    common_reportrow_local_var->i_reportrow_height = i_reportrow_height;

    common_reportrow_local_var->_library_owned = 1;
    return common_reportrow_local_var;
}

__attribute__((deprecated)) common_reportrow_t *common_reportrow_create(
    list_t *a_obj_reportcell,
    int i_reportrow_height
    ) {
    return common_reportrow_create_internal (
        a_obj_reportcell,
        i_reportrow_height
        );
}

void common_reportrow_free(common_reportrow_t *common_reportrow) {
    if(NULL == common_reportrow){
        return ;
    }
    if(common_reportrow->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportrow_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportrow->a_obj_reportcell) {
        list_ForEach(listEntry, common_reportrow->a_obj_reportcell) {
            common_reportcell_free(listEntry->data);
        }
        list_freeList(common_reportrow->a_obj_reportcell);
        common_reportrow->a_obj_reportcell = NULL;
    }
    free(common_reportrow);
}

cJSON *common_reportrow_convertToJSON(common_reportrow_t *common_reportrow) {
    cJSON *item = cJSON_CreateObject();

    // common_reportrow->a_obj_reportcell
    if (!common_reportrow->a_obj_reportcell) {
        goto fail;
    }
    cJSON *a_obj_reportcell = cJSON_AddArrayToObject(item, "a_objReportcell");
    if(a_obj_reportcell == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportcellListEntry;
    if (common_reportrow->a_obj_reportcell) {
    list_ForEach(a_obj_reportcellListEntry, common_reportrow->a_obj_reportcell) {
    cJSON *itemLocal = common_reportcell_convertToJSON(a_obj_reportcellListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportcell, itemLocal);
    }
    }


    // common_reportrow->i_reportrow_height
    if (!common_reportrow->i_reportrow_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportrowHeight", common_reportrow->i_reportrow_height) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_reportrow_t *common_reportrow_parseFromJSON(cJSON *common_reportrowJSON){

    common_reportrow_t *common_reportrow_local_var = NULL;

    // define the local list for common_reportrow->a_obj_reportcell
    list_t *a_obj_reportcellList = NULL;

    // common_reportrow->a_obj_reportcell
    cJSON *a_obj_reportcell = cJSON_GetObjectItemCaseSensitive(common_reportrowJSON, "a_objReportcell");
    if (cJSON_IsNull(a_obj_reportcell)) {
        a_obj_reportcell = NULL;
    }
    if (!a_obj_reportcell) {
        goto end;
    }

    
    cJSON *a_obj_reportcell_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportcell)){
        goto end; //nonprimitive container
    }

    a_obj_reportcellList = list_createList();

    cJSON_ArrayForEach(a_obj_reportcell_local_nonprimitive,a_obj_reportcell )
    {
        if(!cJSON_IsObject(a_obj_reportcell_local_nonprimitive)){
            goto end;
        }
        common_reportcell_t *a_obj_reportcellItem = common_reportcell_parseFromJSON(a_obj_reportcell_local_nonprimitive);

        list_addElement(a_obj_reportcellList, a_obj_reportcellItem);
    }

    // common_reportrow->i_reportrow_height
    cJSON *i_reportrow_height = cJSON_GetObjectItemCaseSensitive(common_reportrowJSON, "iReportrowHeight");
    if (cJSON_IsNull(i_reportrow_height)) {
        i_reportrow_height = NULL;
    }
    if (!i_reportrow_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportrow_height))
    {
    goto end; //Numeric
    }


    common_reportrow_local_var = common_reportrow_create_internal (
        a_obj_reportcellList,
        i_reportrow_height->valuedouble
        );

    return common_reportrow_local_var;
end:
    if (a_obj_reportcellList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportcellList) {
            common_reportcell_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportcellList);
        a_obj_reportcellList = NULL;
    }
    return NULL;

}

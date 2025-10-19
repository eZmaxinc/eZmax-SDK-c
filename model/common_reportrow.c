#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportrow.h"



static common_reportrow_t *common_reportrow_create_internal(
    list_t *a_obj_reportcell,
    list_t* obj_variableobject,
    int i_reportrow_height,
    common_reportcellstylecustom_t *obj_reportcellstyle_custom
    ) {
    common_reportrow_t *common_reportrow_local_var = malloc(sizeof(common_reportrow_t));
    if (!common_reportrow_local_var) {
        return NULL;
    }
    common_reportrow_local_var->a_obj_reportcell = a_obj_reportcell;
    common_reportrow_local_var->obj_variableobject = obj_variableobject;
    common_reportrow_local_var->i_reportrow_height = i_reportrow_height;
    common_reportrow_local_var->obj_reportcellstyle_custom = obj_reportcellstyle_custom;

    common_reportrow_local_var->_library_owned = 1;
    return common_reportrow_local_var;
}

__attribute__((deprecated)) common_reportrow_t *common_reportrow_create(
    list_t *a_obj_reportcell,
    list_t* obj_variableobject,
    int i_reportrow_height,
    common_reportcellstylecustom_t *obj_reportcellstyle_custom
    ) {
    return common_reportrow_create_internal (
        a_obj_reportcell,
        obj_variableobject,
        i_reportrow_height,
        obj_reportcellstyle_custom
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
    if (common_reportrow->obj_variableobject) {
        list_ForEach(listEntry, common_reportrow->obj_variableobject) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(common_reportrow->obj_variableobject);
        common_reportrow->obj_variableobject = NULL;
    }
    if (common_reportrow->obj_reportcellstyle_custom) {
        common_reportcellstylecustom_free(common_reportrow->obj_reportcellstyle_custom);
        common_reportrow->obj_reportcellstyle_custom = NULL;
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


    // common_reportrow->obj_variableobject
    if (!common_reportrow->obj_variableobject) {
        goto fail;
    }
    cJSON *obj_variableobject = cJSON_AddObjectToObject(item, "objVariableobject");
    if(obj_variableobject == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = obj_variableobject;
    listEntry_t *obj_variableobjectListEntry;
    if (common_reportrow->obj_variableobject) {
    list_ForEach(obj_variableobjectListEntry, common_reportrow->obj_variableobject) {
        keyValuePair_t *localKeyValue = obj_variableobjectListEntry->data;
    }
    }


    // common_reportrow->i_reportrow_height
    if (!common_reportrow->i_reportrow_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportrowHeight", common_reportrow->i_reportrow_height) == NULL) {
    goto fail; //Numeric
    }


    // common_reportrow->obj_reportcellstyle_custom
    if(common_reportrow->obj_reportcellstyle_custom) {
    cJSON *obj_reportcellstyle_custom_local_JSON = common_reportcellstylecustom_convertToJSON(common_reportrow->obj_reportcellstyle_custom);
    if(obj_reportcellstyle_custom_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportcellstyleCustom", obj_reportcellstyle_custom_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
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

    // define the local map for common_reportrow->obj_variableobject
    list_t *obj_variableobjectList = NULL;

    // define the local variable for common_reportrow->obj_reportcellstyle_custom
    common_reportcellstylecustom_t *obj_reportcellstyle_custom_local_nonprim = NULL;

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

    // common_reportrow->obj_variableobject
    cJSON *obj_variableobject = cJSON_GetObjectItemCaseSensitive(common_reportrowJSON, "objVariableobject");
    if (cJSON_IsNull(obj_variableobject)) {
        obj_variableobject = NULL;
    }
    if (!obj_variableobject) {
        goto end;
    }

    
    cJSON *obj_variableobject_local_map = NULL;
    if(!cJSON_IsObject(obj_variableobject) && !cJSON_IsNull(obj_variableobject))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(obj_variableobject))
    {
        obj_variableobjectList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(obj_variableobject_local_map, obj_variableobject)
        {
            cJSON *localMapObject = obj_variableobject_local_map;
            list_addElement(obj_variableobjectList , localMapKeyPair);
        }
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

    // common_reportrow->obj_reportcellstyle_custom
    cJSON *obj_reportcellstyle_custom = cJSON_GetObjectItemCaseSensitive(common_reportrowJSON, "objReportcellstyleCustom");
    if (cJSON_IsNull(obj_reportcellstyle_custom)) {
        obj_reportcellstyle_custom = NULL;
    }
    if (obj_reportcellstyle_custom) { 
    obj_reportcellstyle_custom_local_nonprim = common_reportcellstylecustom_parseFromJSON(obj_reportcellstyle_custom); //nonprimitive
    }


    common_reportrow_local_var = common_reportrow_create_internal (
        a_obj_reportcellList,
        obj_variableobjectList,
        i_reportrow_height->valuedouble,
        obj_reportcellstyle_custom ? obj_reportcellstyle_custom_local_nonprim : NULL
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
    if (obj_variableobjectList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, obj_variableobjectList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(obj_variableobjectList);
        obj_variableobjectList = NULL;
    }
    if (obj_reportcellstyle_custom_local_nonprim) {
        common_reportcellstylecustom_free(obj_reportcellstyle_custom_local_nonprim);
        obj_reportcellstyle_custom_local_nonprim = NULL;
    }
    return NULL;

}

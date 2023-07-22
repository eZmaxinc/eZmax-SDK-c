#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulegroup_response_compound_all_of.h"



modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of_create(
    list_t *a_obj_module
    ) {
    modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of_local_var = malloc(sizeof(modulegroup_response_compound_all_of_t));
    if (!modulegroup_response_compound_all_of_local_var) {
        return NULL;
    }
    modulegroup_response_compound_all_of_local_var->a_obj_module = a_obj_module;

    return modulegroup_response_compound_all_of_local_var;
}


void modulegroup_response_compound_all_of_free(modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of) {
    if(NULL == modulegroup_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (modulegroup_response_compound_all_of->a_obj_module) {
        list_ForEach(listEntry, modulegroup_response_compound_all_of->a_obj_module) {
            module_response_compound_free(listEntry->data);
        }
        list_freeList(modulegroup_response_compound_all_of->a_obj_module);
        modulegroup_response_compound_all_of->a_obj_module = NULL;
    }
    free(modulegroup_response_compound_all_of);
}

cJSON *modulegroup_response_compound_all_of_convertToJSON(modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // modulegroup_response_compound_all_of->a_obj_module
    if(modulegroup_response_compound_all_of->a_obj_module) {
    cJSON *a_obj_module = cJSON_AddArrayToObject(item, "a_objModule");
    if(a_obj_module == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_moduleListEntry;
    if (modulegroup_response_compound_all_of->a_obj_module) {
    list_ForEach(a_obj_moduleListEntry, modulegroup_response_compound_all_of->a_obj_module) {
    cJSON *itemLocal = module_response_compound_convertToJSON(a_obj_moduleListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_module, itemLocal);
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

modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of_parseFromJSON(cJSON *modulegroup_response_compound_all_ofJSON){

    modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of_local_var = NULL;

    // define the local list for modulegroup_response_compound_all_of->a_obj_module
    list_t *a_obj_moduleList = NULL;

    // modulegroup_response_compound_all_of->a_obj_module
    cJSON *a_obj_module = cJSON_GetObjectItemCaseSensitive(modulegroup_response_compound_all_ofJSON, "a_objModule");
    if (a_obj_module) { 
    cJSON *a_obj_module_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_module)){
        goto end; //nonprimitive container
    }

    a_obj_moduleList = list_createList();

    cJSON_ArrayForEach(a_obj_module_local_nonprimitive,a_obj_module )
    {
        if(!cJSON_IsObject(a_obj_module_local_nonprimitive)){
            goto end;
        }
        module_response_compound_t *a_obj_moduleItem = module_response_compound_parseFromJSON(a_obj_module_local_nonprimitive);

        list_addElement(a_obj_moduleList, a_obj_moduleItem);
    }
    }


    modulegroup_response_compound_all_of_local_var = modulegroup_response_compound_all_of_create (
        a_obj_module ? a_obj_moduleList : NULL
        );

    return modulegroup_response_compound_all_of_local_var;
end:
    if (a_obj_moduleList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_moduleList) {
            module_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_moduleList);
        a_obj_moduleList = NULL;
    }
    return NULL;

}

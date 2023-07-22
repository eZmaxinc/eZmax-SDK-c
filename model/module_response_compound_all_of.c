#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_response_compound_all_of.h"



module_response_compound_all_of_t *module_response_compound_all_of_create(
    list_t *a_obj_modulesection
    ) {
    module_response_compound_all_of_t *module_response_compound_all_of_local_var = malloc(sizeof(module_response_compound_all_of_t));
    if (!module_response_compound_all_of_local_var) {
        return NULL;
    }
    module_response_compound_all_of_local_var->a_obj_modulesection = a_obj_modulesection;

    return module_response_compound_all_of_local_var;
}


void module_response_compound_all_of_free(module_response_compound_all_of_t *module_response_compound_all_of) {
    if(NULL == module_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (module_response_compound_all_of->a_obj_modulesection) {
        list_ForEach(listEntry, module_response_compound_all_of->a_obj_modulesection) {
            modulesection_response_compound_free(listEntry->data);
        }
        list_freeList(module_response_compound_all_of->a_obj_modulesection);
        module_response_compound_all_of->a_obj_modulesection = NULL;
    }
    free(module_response_compound_all_of);
}

cJSON *module_response_compound_all_of_convertToJSON(module_response_compound_all_of_t *module_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // module_response_compound_all_of->a_obj_modulesection
    if(module_response_compound_all_of->a_obj_modulesection) {
    cJSON *a_obj_modulesection = cJSON_AddArrayToObject(item, "a_objModulesection");
    if(a_obj_modulesection == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_modulesectionListEntry;
    if (module_response_compound_all_of->a_obj_modulesection) {
    list_ForEach(a_obj_modulesectionListEntry, module_response_compound_all_of->a_obj_modulesection) {
    cJSON *itemLocal = modulesection_response_compound_convertToJSON(a_obj_modulesectionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_modulesection, itemLocal);
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

module_response_compound_all_of_t *module_response_compound_all_of_parseFromJSON(cJSON *module_response_compound_all_ofJSON){

    module_response_compound_all_of_t *module_response_compound_all_of_local_var = NULL;

    // define the local list for module_response_compound_all_of->a_obj_modulesection
    list_t *a_obj_modulesectionList = NULL;

    // module_response_compound_all_of->a_obj_modulesection
    cJSON *a_obj_modulesection = cJSON_GetObjectItemCaseSensitive(module_response_compound_all_ofJSON, "a_objModulesection");
    if (a_obj_modulesection) { 
    cJSON *a_obj_modulesection_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_modulesection)){
        goto end; //nonprimitive container
    }

    a_obj_modulesectionList = list_createList();

    cJSON_ArrayForEach(a_obj_modulesection_local_nonprimitive,a_obj_modulesection )
    {
        if(!cJSON_IsObject(a_obj_modulesection_local_nonprimitive)){
            goto end;
        }
        modulesection_response_compound_t *a_obj_modulesectionItem = modulesection_response_compound_parseFromJSON(a_obj_modulesection_local_nonprimitive);

        list_addElement(a_obj_modulesectionList, a_obj_modulesectionItem);
    }
    }


    module_response_compound_all_of_local_var = module_response_compound_all_of_create (
        a_obj_modulesection ? a_obj_modulesectionList : NULL
        );

    return module_response_compound_all_of_local_var;
end:
    if (a_obj_modulesectionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_modulesectionList) {
            modulesection_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_modulesectionList);
        a_obj_modulesectionList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulegroup_response_compound.h"



static modulegroup_response_compound_t *modulegroup_response_compound_create_internal(
    int pki_modulegroup_id,
    char *s_modulegroup_name_x,
    list_t *a_obj_module
    ) {
    modulegroup_response_compound_t *modulegroup_response_compound_local_var = malloc(sizeof(modulegroup_response_compound_t));
    if (!modulegroup_response_compound_local_var) {
        return NULL;
    }
    modulegroup_response_compound_local_var->pki_modulegroup_id = pki_modulegroup_id;
    modulegroup_response_compound_local_var->s_modulegroup_name_x = s_modulegroup_name_x;
    modulegroup_response_compound_local_var->a_obj_module = a_obj_module;

    modulegroup_response_compound_local_var->_library_owned = 1;
    return modulegroup_response_compound_local_var;
}

__attribute__((deprecated)) modulegroup_response_compound_t *modulegroup_response_compound_create(
    int pki_modulegroup_id,
    char *s_modulegroup_name_x,
    list_t *a_obj_module
    ) {
    return modulegroup_response_compound_create_internal (
        pki_modulegroup_id,
        s_modulegroup_name_x,
        a_obj_module
        );
}

void modulegroup_response_compound_free(modulegroup_response_compound_t *modulegroup_response_compound) {
    if(NULL == modulegroup_response_compound){
        return ;
    }
    if(modulegroup_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "modulegroup_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (modulegroup_response_compound->s_modulegroup_name_x) {
        free(modulegroup_response_compound->s_modulegroup_name_x);
        modulegroup_response_compound->s_modulegroup_name_x = NULL;
    }
    if (modulegroup_response_compound->a_obj_module) {
        list_ForEach(listEntry, modulegroup_response_compound->a_obj_module) {
            module_response_compound_free(listEntry->data);
        }
        list_freeList(modulegroup_response_compound->a_obj_module);
        modulegroup_response_compound->a_obj_module = NULL;
    }
    free(modulegroup_response_compound);
}

cJSON *modulegroup_response_compound_convertToJSON(modulegroup_response_compound_t *modulegroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // modulegroup_response_compound->pki_modulegroup_id
    if (!modulegroup_response_compound->pki_modulegroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModulegroupID", modulegroup_response_compound->pki_modulegroup_id) == NULL) {
    goto fail; //Numeric
    }


    // modulegroup_response_compound->s_modulegroup_name_x
    if (!modulegroup_response_compound->s_modulegroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModulegroupNameX", modulegroup_response_compound->s_modulegroup_name_x) == NULL) {
    goto fail; //String
    }


    // modulegroup_response_compound->a_obj_module
    if(modulegroup_response_compound->a_obj_module) {
    cJSON *a_obj_module = cJSON_AddArrayToObject(item, "a_objModule");
    if(a_obj_module == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_moduleListEntry;
    if (modulegroup_response_compound->a_obj_module) {
    list_ForEach(a_obj_moduleListEntry, modulegroup_response_compound->a_obj_module) {
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

modulegroup_response_compound_t *modulegroup_response_compound_parseFromJSON(cJSON *modulegroup_response_compoundJSON){

    modulegroup_response_compound_t *modulegroup_response_compound_local_var = NULL;

    // define the local list for modulegroup_response_compound->a_obj_module
    list_t *a_obj_moduleList = NULL;

    // modulegroup_response_compound->pki_modulegroup_id
    cJSON *pki_modulegroup_id = cJSON_GetObjectItemCaseSensitive(modulegroup_response_compoundJSON, "pkiModulegroupID");
    if (cJSON_IsNull(pki_modulegroup_id)) {
        pki_modulegroup_id = NULL;
    }
    if (!pki_modulegroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_modulegroup_id))
    {
    goto end; //Numeric
    }

    // modulegroup_response_compound->s_modulegroup_name_x
    cJSON *s_modulegroup_name_x = cJSON_GetObjectItemCaseSensitive(modulegroup_response_compoundJSON, "sModulegroupNameX");
    if (cJSON_IsNull(s_modulegroup_name_x)) {
        s_modulegroup_name_x = NULL;
    }
    if (!s_modulegroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_modulegroup_name_x))
    {
    goto end; //String
    }

    // modulegroup_response_compound->a_obj_module
    cJSON *a_obj_module = cJSON_GetObjectItemCaseSensitive(modulegroup_response_compoundJSON, "a_objModule");
    if (cJSON_IsNull(a_obj_module)) {
        a_obj_module = NULL;
    }
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


    modulegroup_response_compound_local_var = modulegroup_response_compound_create_internal (
        pki_modulegroup_id->valuedouble,
        strdup(s_modulegroup_name_x->valuestring),
        a_obj_module ? a_obj_moduleList : NULL
        );

    return modulegroup_response_compound_local_var;
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

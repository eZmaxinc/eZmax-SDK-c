#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulesection_response_compound.h"



static modulesection_response_compound_t *modulesection_response_compound_create_internal(
    int pki_modulesection_id,
    int fki_module_id,
    char *s_modulesection_internalname,
    char *s_modulesection_name_x,
    list_t *a_obj_permission
    ) {
    modulesection_response_compound_t *modulesection_response_compound_local_var = malloc(sizeof(modulesection_response_compound_t));
    if (!modulesection_response_compound_local_var) {
        return NULL;
    }
    modulesection_response_compound_local_var->pki_modulesection_id = pki_modulesection_id;
    modulesection_response_compound_local_var->fki_module_id = fki_module_id;
    modulesection_response_compound_local_var->s_modulesection_internalname = s_modulesection_internalname;
    modulesection_response_compound_local_var->s_modulesection_name_x = s_modulesection_name_x;
    modulesection_response_compound_local_var->a_obj_permission = a_obj_permission;

    modulesection_response_compound_local_var->_library_owned = 1;
    return modulesection_response_compound_local_var;
}

__attribute__((deprecated)) modulesection_response_compound_t *modulesection_response_compound_create(
    int pki_modulesection_id,
    int fki_module_id,
    char *s_modulesection_internalname,
    char *s_modulesection_name_x,
    list_t *a_obj_permission
    ) {
    return modulesection_response_compound_create_internal (
        pki_modulesection_id,
        fki_module_id,
        s_modulesection_internalname,
        s_modulesection_name_x,
        a_obj_permission
        );
}

void modulesection_response_compound_free(modulesection_response_compound_t *modulesection_response_compound) {
    if(NULL == modulesection_response_compound){
        return ;
    }
    if(modulesection_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "modulesection_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (modulesection_response_compound->s_modulesection_internalname) {
        free(modulesection_response_compound->s_modulesection_internalname);
        modulesection_response_compound->s_modulesection_internalname = NULL;
    }
    if (modulesection_response_compound->s_modulesection_name_x) {
        free(modulesection_response_compound->s_modulesection_name_x);
        modulesection_response_compound->s_modulesection_name_x = NULL;
    }
    if (modulesection_response_compound->a_obj_permission) {
        list_ForEach(listEntry, modulesection_response_compound->a_obj_permission) {
            permission_response_compound_free(listEntry->data);
        }
        list_freeList(modulesection_response_compound->a_obj_permission);
        modulesection_response_compound->a_obj_permission = NULL;
    }
    free(modulesection_response_compound);
}

cJSON *modulesection_response_compound_convertToJSON(modulesection_response_compound_t *modulesection_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // modulesection_response_compound->pki_modulesection_id
    if (!modulesection_response_compound->pki_modulesection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModulesectionID", modulesection_response_compound->pki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }


    // modulesection_response_compound->fki_module_id
    if (!modulesection_response_compound->fki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModuleID", modulesection_response_compound->fki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // modulesection_response_compound->s_modulesection_internalname
    if (!modulesection_response_compound->s_modulesection_internalname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModulesectionInternalname", modulesection_response_compound->s_modulesection_internalname) == NULL) {
    goto fail; //String
    }


    // modulesection_response_compound->s_modulesection_name_x
    if (!modulesection_response_compound->s_modulesection_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModulesectionNameX", modulesection_response_compound->s_modulesection_name_x) == NULL) {
    goto fail; //String
    }


    // modulesection_response_compound->a_obj_permission
    if(modulesection_response_compound->a_obj_permission) {
    cJSON *a_obj_permission = cJSON_AddArrayToObject(item, "a_objPermission");
    if(a_obj_permission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_permissionListEntry;
    if (modulesection_response_compound->a_obj_permission) {
    list_ForEach(a_obj_permissionListEntry, modulesection_response_compound->a_obj_permission) {
    cJSON *itemLocal = permission_response_compound_convertToJSON(a_obj_permissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_permission, itemLocal);
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

modulesection_response_compound_t *modulesection_response_compound_parseFromJSON(cJSON *modulesection_response_compoundJSON){

    modulesection_response_compound_t *modulesection_response_compound_local_var = NULL;

    // define the local list for modulesection_response_compound->a_obj_permission
    list_t *a_obj_permissionList = NULL;

    // modulesection_response_compound->pki_modulesection_id
    cJSON *pki_modulesection_id = cJSON_GetObjectItemCaseSensitive(modulesection_response_compoundJSON, "pkiModulesectionID");
    if (cJSON_IsNull(pki_modulesection_id)) {
        pki_modulesection_id = NULL;
    }
    if (!pki_modulesection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_modulesection_id))
    {
    goto end; //Numeric
    }

    // modulesection_response_compound->fki_module_id
    cJSON *fki_module_id = cJSON_GetObjectItemCaseSensitive(modulesection_response_compoundJSON, "fkiModuleID");
    if (cJSON_IsNull(fki_module_id)) {
        fki_module_id = NULL;
    }
    if (!fki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_module_id))
    {
    goto end; //Numeric
    }

    // modulesection_response_compound->s_modulesection_internalname
    cJSON *s_modulesection_internalname = cJSON_GetObjectItemCaseSensitive(modulesection_response_compoundJSON, "sModulesectionInternalname");
    if (cJSON_IsNull(s_modulesection_internalname)) {
        s_modulesection_internalname = NULL;
    }
    if (!s_modulesection_internalname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_modulesection_internalname))
    {
    goto end; //String
    }

    // modulesection_response_compound->s_modulesection_name_x
    cJSON *s_modulesection_name_x = cJSON_GetObjectItemCaseSensitive(modulesection_response_compoundJSON, "sModulesectionNameX");
    if (cJSON_IsNull(s_modulesection_name_x)) {
        s_modulesection_name_x = NULL;
    }
    if (!s_modulesection_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_modulesection_name_x))
    {
    goto end; //String
    }

    // modulesection_response_compound->a_obj_permission
    cJSON *a_obj_permission = cJSON_GetObjectItemCaseSensitive(modulesection_response_compoundJSON, "a_objPermission");
    if (cJSON_IsNull(a_obj_permission)) {
        a_obj_permission = NULL;
    }
    if (a_obj_permission) { 
    cJSON *a_obj_permission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_permission)){
        goto end; //nonprimitive container
    }

    a_obj_permissionList = list_createList();

    cJSON_ArrayForEach(a_obj_permission_local_nonprimitive,a_obj_permission )
    {
        if(!cJSON_IsObject(a_obj_permission_local_nonprimitive)){
            goto end;
        }
        permission_response_compound_t *a_obj_permissionItem = permission_response_compound_parseFromJSON(a_obj_permission_local_nonprimitive);

        list_addElement(a_obj_permissionList, a_obj_permissionItem);
    }
    }


    modulesection_response_compound_local_var = modulesection_response_compound_create_internal (
        pki_modulesection_id->valuedouble,
        fki_module_id->valuedouble,
        strdup(s_modulesection_internalname->valuestring),
        strdup(s_modulesection_name_x->valuestring),
        a_obj_permission ? a_obj_permissionList : NULL
        );

    return modulesection_response_compound_local_var;
end:
    if (a_obj_permissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_permissionList) {
            permission_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_permissionList);
        a_obj_permissionList = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_response_compound.h"



module_response_compound_t *module_response_compound_create(
    int pki_module_id,
    int fki_modulegroup_id,
    char *e_module_internalname,
    char *s_module_name_x,
    int b_module_registered,
    int b_module_registeredapi,
    list_t *a_obj_modulesection
    ) {
    module_response_compound_t *module_response_compound_local_var = malloc(sizeof(module_response_compound_t));
    if (!module_response_compound_local_var) {
        return NULL;
    }
    module_response_compound_local_var->pki_module_id = pki_module_id;
    module_response_compound_local_var->fki_modulegroup_id = fki_modulegroup_id;
    module_response_compound_local_var->e_module_internalname = e_module_internalname;
    module_response_compound_local_var->s_module_name_x = s_module_name_x;
    module_response_compound_local_var->b_module_registered = b_module_registered;
    module_response_compound_local_var->b_module_registeredapi = b_module_registeredapi;
    module_response_compound_local_var->a_obj_modulesection = a_obj_modulesection;

    return module_response_compound_local_var;
}


void module_response_compound_free(module_response_compound_t *module_response_compound) {
    if(NULL == module_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (module_response_compound->e_module_internalname) {
        free(module_response_compound->e_module_internalname);
        module_response_compound->e_module_internalname = NULL;
    }
    if (module_response_compound->s_module_name_x) {
        free(module_response_compound->s_module_name_x);
        module_response_compound->s_module_name_x = NULL;
    }
    if (module_response_compound->a_obj_modulesection) {
        list_ForEach(listEntry, module_response_compound->a_obj_modulesection) {
            modulesection_response_compound_free(listEntry->data);
        }
        list_freeList(module_response_compound->a_obj_modulesection);
        module_response_compound->a_obj_modulesection = NULL;
    }
    free(module_response_compound);
}

cJSON *module_response_compound_convertToJSON(module_response_compound_t *module_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // module_response_compound->pki_module_id
    if (!module_response_compound->pki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModuleID", module_response_compound->pki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // module_response_compound->fki_modulegroup_id
    if (!module_response_compound->fki_modulegroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulegroupID", module_response_compound->fki_modulegroup_id) == NULL) {
    goto fail; //Numeric
    }


    // module_response_compound->e_module_internalname
    if (!module_response_compound->e_module_internalname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eModuleInternalname", module_response_compound->e_module_internalname) == NULL) {
    goto fail; //String
    }


    // module_response_compound->s_module_name_x
    if (!module_response_compound->s_module_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModuleNameX", module_response_compound->s_module_name_x) == NULL) {
    goto fail; //String
    }


    // module_response_compound->b_module_registered
    if (!module_response_compound->b_module_registered) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bModuleRegistered", module_response_compound->b_module_registered) == NULL) {
    goto fail; //Bool
    }


    // module_response_compound->b_module_registeredapi
    if (!module_response_compound->b_module_registeredapi) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bModuleRegisteredapi", module_response_compound->b_module_registeredapi) == NULL) {
    goto fail; //Bool
    }


    // module_response_compound->a_obj_modulesection
    if (!module_response_compound->a_obj_modulesection) {
        goto fail;
    }
    cJSON *a_obj_modulesection = cJSON_AddArrayToObject(item, "a_objModulesection");
    if(a_obj_modulesection == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_modulesectionListEntry;
    if (module_response_compound->a_obj_modulesection) {
    list_ForEach(a_obj_modulesectionListEntry, module_response_compound->a_obj_modulesection) {
    cJSON *itemLocal = modulesection_response_compound_convertToJSON(a_obj_modulesectionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_modulesection, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

module_response_compound_t *module_response_compound_parseFromJSON(cJSON *module_response_compoundJSON){

    module_response_compound_t *module_response_compound_local_var = NULL;

    // define the local list for module_response_compound->a_obj_modulesection
    list_t *a_obj_modulesectionList = NULL;

    // module_response_compound->pki_module_id
    cJSON *pki_module_id = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "pkiModuleID");
    if (!pki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_module_id))
    {
    goto end; //Numeric
    }

    // module_response_compound->fki_modulegroup_id
    cJSON *fki_modulegroup_id = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "fkiModulegroupID");
    if (!fki_modulegroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_modulegroup_id))
    {
    goto end; //Numeric
    }

    // module_response_compound->e_module_internalname
    cJSON *e_module_internalname = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "eModuleInternalname");
    if (!e_module_internalname) {
        goto end;
    }

    
    if(!cJSON_IsString(e_module_internalname))
    {
    goto end; //String
    }

    // module_response_compound->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "sModuleNameX");
    if (!s_module_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_module_name_x))
    {
    goto end; //String
    }

    // module_response_compound->b_module_registered
    cJSON *b_module_registered = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "bModuleRegistered");
    if (!b_module_registered) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_registered))
    {
    goto end; //Bool
    }

    // module_response_compound->b_module_registeredapi
    cJSON *b_module_registeredapi = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "bModuleRegisteredapi");
    if (!b_module_registeredapi) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_registeredapi))
    {
    goto end; //Bool
    }

    // module_response_compound->a_obj_modulesection
    cJSON *a_obj_modulesection = cJSON_GetObjectItemCaseSensitive(module_response_compoundJSON, "a_objModulesection");
    if (!a_obj_modulesection) {
        goto end;
    }

    
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


    module_response_compound_local_var = module_response_compound_create (
        pki_module_id->valuedouble,
        fki_modulegroup_id->valuedouble,
        strdup(e_module_internalname->valuestring),
        strdup(s_module_name_x->valuestring),
        b_module_registered->valueint,
        b_module_registeredapi->valueint,
        a_obj_modulesectionList
        );

    return module_response_compound_local_var;
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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_get_autocomplete_v2_response_m_payload.h"



module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_module
    ) {
    module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(module_get_autocomplete_v2_response_m_payload_t));
    if (!module_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    module_get_autocomplete_v2_response_m_payload_local_var->a_obj_module = a_obj_module;

    return module_get_autocomplete_v2_response_m_payload_local_var;
}


void module_get_autocomplete_v2_response_m_payload_free(module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload) {
    if(NULL == module_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (module_get_autocomplete_v2_response_m_payload->a_obj_module) {
        list_ForEach(listEntry, module_get_autocomplete_v2_response_m_payload->a_obj_module) {
            module_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(module_get_autocomplete_v2_response_m_payload->a_obj_module);
        module_get_autocomplete_v2_response_m_payload->a_obj_module = NULL;
    }
    free(module_get_autocomplete_v2_response_m_payload);
}

cJSON *module_get_autocomplete_v2_response_m_payload_convertToJSON(module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // module_get_autocomplete_v2_response_m_payload->a_obj_module
    if (!module_get_autocomplete_v2_response_m_payload->a_obj_module) {
        goto fail;
    }
    cJSON *a_obj_module = cJSON_AddArrayToObject(item, "a_objModule");
    if(a_obj_module == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_moduleListEntry;
    if (module_get_autocomplete_v2_response_m_payload->a_obj_module) {
    list_ForEach(a_obj_moduleListEntry, module_get_autocomplete_v2_response_m_payload->a_obj_module) {
    cJSON *itemLocal = module_autocomplete_element_response_convertToJSON(a_obj_moduleListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_module, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *module_get_autocomplete_v2_response_m_payloadJSON){

    module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for module_get_autocomplete_v2_response_m_payload->a_obj_module
    list_t *a_obj_moduleList = NULL;

    // module_get_autocomplete_v2_response_m_payload->a_obj_module
    cJSON *a_obj_module = cJSON_GetObjectItemCaseSensitive(module_get_autocomplete_v2_response_m_payloadJSON, "a_objModule");
    if (!a_obj_module) {
        goto end;
    }

    
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
        module_autocomplete_element_response_t *a_obj_moduleItem = module_autocomplete_element_response_parseFromJSON(a_obj_module_local_nonprimitive);

        list_addElement(a_obj_moduleList, a_obj_moduleItem);
    }


    module_get_autocomplete_v2_response_m_payload_local_var = module_get_autocomplete_v2_response_m_payload_create (
        a_obj_moduleList
        );

    return module_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_moduleList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_moduleList) {
            module_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_moduleList);
        a_obj_moduleList = NULL;
    }
    return NULL;

}

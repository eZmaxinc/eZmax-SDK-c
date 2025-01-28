#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "glaccountcontainer_get_autocomplete_v2_response_m_payload.h"



static glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_glaccountcontainer
    ) {
    glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(glaccountcontainer_get_autocomplete_v2_response_m_payload_t));
    if (!glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var->a_obj_glaccountcontainer = a_obj_glaccountcontainer;

    glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_glaccountcontainer
    ) {
    return glaccountcontainer_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_glaccountcontainer
        );
}

void glaccountcontainer_get_autocomplete_v2_response_m_payload_free(glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload) {
    if(NULL == glaccountcontainer_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(glaccountcontainer_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "glaccountcontainer_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer) {
        list_ForEach(listEntry, glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer) {
            glaccountcontainer_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer);
        glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer = NULL;
    }
    free(glaccountcontainer_get_autocomplete_v2_response_m_payload);
}

cJSON *glaccountcontainer_get_autocomplete_v2_response_m_payload_convertToJSON(glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer
    if (!glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer) {
        goto fail;
    }
    cJSON *a_obj_glaccountcontainer = cJSON_AddArrayToObject(item, "a_objGlaccountcontainer");
    if(a_obj_glaccountcontainer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_glaccountcontainerListEntry;
    if (glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer) {
    list_ForEach(a_obj_glaccountcontainerListEntry, glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer) {
    cJSON *itemLocal = glaccountcontainer_autocomplete_element_response_convertToJSON(a_obj_glaccountcontainerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_glaccountcontainer, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *glaccountcontainer_get_autocomplete_v2_response_m_payloadJSON){

    glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer
    list_t *a_obj_glaccountcontainerList = NULL;

    // glaccountcontainer_get_autocomplete_v2_response_m_payload->a_obj_glaccountcontainer
    cJSON *a_obj_glaccountcontainer = cJSON_GetObjectItemCaseSensitive(glaccountcontainer_get_autocomplete_v2_response_m_payloadJSON, "a_objGlaccountcontainer");
    if (cJSON_IsNull(a_obj_glaccountcontainer)) {
        a_obj_glaccountcontainer = NULL;
    }
    if (!a_obj_glaccountcontainer) {
        goto end;
    }

    
    cJSON *a_obj_glaccountcontainer_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_glaccountcontainer)){
        goto end; //nonprimitive container
    }

    a_obj_glaccountcontainerList = list_createList();

    cJSON_ArrayForEach(a_obj_glaccountcontainer_local_nonprimitive,a_obj_glaccountcontainer )
    {
        if(!cJSON_IsObject(a_obj_glaccountcontainer_local_nonprimitive)){
            goto end;
        }
        glaccountcontainer_autocomplete_element_response_t *a_obj_glaccountcontainerItem = glaccountcontainer_autocomplete_element_response_parseFromJSON(a_obj_glaccountcontainer_local_nonprimitive);

        list_addElement(a_obj_glaccountcontainerList, a_obj_glaccountcontainerItem);
    }


    glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var = glaccountcontainer_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_glaccountcontainerList
        );

    return glaccountcontainer_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_glaccountcontainerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_glaccountcontainerList) {
            glaccountcontainer_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_glaccountcontainerList);
        a_obj_glaccountcontainerList = NULL;
    }
    return NULL;

}

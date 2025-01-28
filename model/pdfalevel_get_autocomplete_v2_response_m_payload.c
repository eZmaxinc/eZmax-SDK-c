#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pdfalevel_get_autocomplete_v2_response_m_payload.h"



static pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_pdfalevel
    ) {
    pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(pdfalevel_get_autocomplete_v2_response_m_payload_t));
    if (!pdfalevel_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    pdfalevel_get_autocomplete_v2_response_m_payload_local_var->a_obj_pdfalevel = a_obj_pdfalevel;

    pdfalevel_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return pdfalevel_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_pdfalevel
    ) {
    return pdfalevel_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_pdfalevel
        );
}

void pdfalevel_get_autocomplete_v2_response_m_payload_free(pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload) {
    if(NULL == pdfalevel_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(pdfalevel_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "pdfalevel_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel) {
        list_ForEach(listEntry, pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel) {
            pdfalevel_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel);
        pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel = NULL;
    }
    free(pdfalevel_get_autocomplete_v2_response_m_payload);
}

cJSON *pdfalevel_get_autocomplete_v2_response_m_payload_convertToJSON(pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel
    if (!pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel) {
        goto fail;
    }
    cJSON *a_obj_pdfalevel = cJSON_AddArrayToObject(item, "a_objPdfalevel");
    if(a_obj_pdfalevel == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_pdfalevelListEntry;
    if (pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel) {
    list_ForEach(a_obj_pdfalevelListEntry, pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel) {
    cJSON *itemLocal = pdfalevel_autocomplete_element_response_convertToJSON(a_obj_pdfalevelListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_pdfalevel, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *pdfalevel_get_autocomplete_v2_response_m_payloadJSON){

    pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel
    list_t *a_obj_pdfalevelList = NULL;

    // pdfalevel_get_autocomplete_v2_response_m_payload->a_obj_pdfalevel
    cJSON *a_obj_pdfalevel = cJSON_GetObjectItemCaseSensitive(pdfalevel_get_autocomplete_v2_response_m_payloadJSON, "a_objPdfalevel");
    if (cJSON_IsNull(a_obj_pdfalevel)) {
        a_obj_pdfalevel = NULL;
    }
    if (!a_obj_pdfalevel) {
        goto end;
    }

    
    cJSON *a_obj_pdfalevel_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_pdfalevel)){
        goto end; //nonprimitive container
    }

    a_obj_pdfalevelList = list_createList();

    cJSON_ArrayForEach(a_obj_pdfalevel_local_nonprimitive,a_obj_pdfalevel )
    {
        if(!cJSON_IsObject(a_obj_pdfalevel_local_nonprimitive)){
            goto end;
        }
        pdfalevel_autocomplete_element_response_t *a_obj_pdfalevelItem = pdfalevel_autocomplete_element_response_parseFromJSON(a_obj_pdfalevel_local_nonprimitive);

        list_addElement(a_obj_pdfalevelList, a_obj_pdfalevelItem);
    }


    pdfalevel_get_autocomplete_v2_response_m_payload_local_var = pdfalevel_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_pdfalevelList
        );

    return pdfalevel_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_pdfalevelList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_pdfalevelList) {
            pdfalevel_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_pdfalevelList);
        a_obj_pdfalevelList = NULL;
    }
    return NULL;

}

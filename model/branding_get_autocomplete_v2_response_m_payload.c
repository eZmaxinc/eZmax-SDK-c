#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_get_autocomplete_v2_response_m_payload.h"



static branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_branding
    ) {
    branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(branding_get_autocomplete_v2_response_m_payload_t));
    if (!branding_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    branding_get_autocomplete_v2_response_m_payload_local_var->a_obj_branding = a_obj_branding;

    branding_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return branding_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_branding
    ) {
    return branding_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_branding
        );
}

void branding_get_autocomplete_v2_response_m_payload_free(branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload) {
    if(NULL == branding_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(branding_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_get_autocomplete_v2_response_m_payload->a_obj_branding) {
        list_ForEach(listEntry, branding_get_autocomplete_v2_response_m_payload->a_obj_branding) {
            branding_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(branding_get_autocomplete_v2_response_m_payload->a_obj_branding);
        branding_get_autocomplete_v2_response_m_payload->a_obj_branding = NULL;
    }
    free(branding_get_autocomplete_v2_response_m_payload);
}

cJSON *branding_get_autocomplete_v2_response_m_payload_convertToJSON(branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // branding_get_autocomplete_v2_response_m_payload->a_obj_branding
    if (!branding_get_autocomplete_v2_response_m_payload->a_obj_branding) {
        goto fail;
    }
    cJSON *a_obj_branding = cJSON_AddArrayToObject(item, "a_objBranding");
    if(a_obj_branding == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_brandingListEntry;
    if (branding_get_autocomplete_v2_response_m_payload->a_obj_branding) {
    list_ForEach(a_obj_brandingListEntry, branding_get_autocomplete_v2_response_m_payload->a_obj_branding) {
    cJSON *itemLocal = branding_autocomplete_element_response_convertToJSON(a_obj_brandingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_branding, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *branding_get_autocomplete_v2_response_m_payloadJSON){

    branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for branding_get_autocomplete_v2_response_m_payload->a_obj_branding
    list_t *a_obj_brandingList = NULL;

    // branding_get_autocomplete_v2_response_m_payload->a_obj_branding
    cJSON *a_obj_branding = cJSON_GetObjectItemCaseSensitive(branding_get_autocomplete_v2_response_m_payloadJSON, "a_objBranding");
    if (cJSON_IsNull(a_obj_branding)) {
        a_obj_branding = NULL;
    }
    if (!a_obj_branding) {
        goto end;
    }

    
    cJSON *a_obj_branding_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_branding)){
        goto end; //nonprimitive container
    }

    a_obj_brandingList = list_createList();

    cJSON_ArrayForEach(a_obj_branding_local_nonprimitive,a_obj_branding )
    {
        if(!cJSON_IsObject(a_obj_branding_local_nonprimitive)){
            goto end;
        }
        branding_autocomplete_element_response_t *a_obj_brandingItem = branding_autocomplete_element_response_parseFromJSON(a_obj_branding_local_nonprimitive);

        list_addElement(a_obj_brandingList, a_obj_brandingItem);
    }


    branding_get_autocomplete_v2_response_m_payload_local_var = branding_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_brandingList
        );

    return branding_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_brandingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_brandingList) {
            branding_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_brandingList);
        a_obj_brandingList = NULL;
    }
    return NULL;

}

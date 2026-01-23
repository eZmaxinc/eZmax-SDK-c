#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "realestateboard_get_autocomplete_v2_response_m_payload.h"



static realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_realestateboard
    ) {
    realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(realestateboard_get_autocomplete_v2_response_m_payload_t));
    if (!realestateboard_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    realestateboard_get_autocomplete_v2_response_m_payload_local_var->a_obj_realestateboard = a_obj_realestateboard;

    realestateboard_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return realestateboard_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_realestateboard
    ) {
    return realestateboard_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_realestateboard
        );
}

void realestateboard_get_autocomplete_v2_response_m_payload_free(realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload) {
    if(NULL == realestateboard_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(realestateboard_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "realestateboard_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard) {
        list_ForEach(listEntry, realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard) {
            realestateboard_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard);
        realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard = NULL;
    }
    free(realestateboard_get_autocomplete_v2_response_m_payload);
}

cJSON *realestateboard_get_autocomplete_v2_response_m_payload_convertToJSON(realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard
    if (!realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard) {
        goto fail;
    }
    cJSON *a_obj_realestateboard = cJSON_AddArrayToObject(item, "a_objRealestateboard");
    if(a_obj_realestateboard == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_realestateboardListEntry;
    if (realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard) {
    list_ForEach(a_obj_realestateboardListEntry, realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard) {
    cJSON *itemLocal = realestateboard_autocomplete_element_response_convertToJSON(a_obj_realestateboardListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_realestateboard, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *realestateboard_get_autocomplete_v2_response_m_payloadJSON){

    realestateboard_get_autocomplete_v2_response_m_payload_t *realestateboard_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard
    list_t *a_obj_realestateboardList = NULL;

    // realestateboard_get_autocomplete_v2_response_m_payload->a_obj_realestateboard
    cJSON *a_obj_realestateboard = cJSON_GetObjectItemCaseSensitive(realestateboard_get_autocomplete_v2_response_m_payloadJSON, "a_objRealestateboard");
    if (cJSON_IsNull(a_obj_realestateboard)) {
        a_obj_realestateboard = NULL;
    }
    if (!a_obj_realestateboard) {
        goto end;
    }

    
    cJSON *a_obj_realestateboard_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_realestateboard)){
        goto end; //nonprimitive container
    }

    a_obj_realestateboardList = list_createList();

    cJSON_ArrayForEach(a_obj_realestateboard_local_nonprimitive,a_obj_realestateboard )
    {
        if(!cJSON_IsObject(a_obj_realestateboard_local_nonprimitive)){
            goto end;
        }
        realestateboard_autocomplete_element_response_t *a_obj_realestateboardItem = realestateboard_autocomplete_element_response_parseFromJSON(a_obj_realestateboard_local_nonprimitive);

        list_addElement(a_obj_realestateboardList, a_obj_realestateboardItem);
    }


    realestateboard_get_autocomplete_v2_response_m_payload_local_var = realestateboard_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_realestateboardList
        );

    return realestateboard_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_realestateboardList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_realestateboardList) {
            realestateboard_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_realestateboardList);
        a_obj_realestateboardList = NULL;
    }
    return NULL;

}

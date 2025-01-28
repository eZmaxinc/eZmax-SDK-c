#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_get_autocomplete_v2_response_m_payload.h"



static usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_usergroupexternal
    ) {
    usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(usergroupexternal_get_autocomplete_v2_response_m_payload_t));
    if (!usergroupexternal_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    usergroupexternal_get_autocomplete_v2_response_m_payload_local_var->a_obj_usergroupexternal = a_obj_usergroupexternal;

    usergroupexternal_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return usergroupexternal_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_usergroupexternal
    ) {
    return usergroupexternal_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_usergroupexternal
        );
}

void usergroupexternal_get_autocomplete_v2_response_m_payload_free(usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload) {
    if(NULL == usergroupexternal_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(usergroupexternal_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal) {
        list_ForEach(listEntry, usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal) {
            usergroupexternal_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal);
        usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal = NULL;
    }
    free(usergroupexternal_get_autocomplete_v2_response_m_payload);
}

cJSON *usergroupexternal_get_autocomplete_v2_response_m_payload_convertToJSON(usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal
    if (!usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal) {
        goto fail;
    }
    cJSON *a_obj_usergroupexternal = cJSON_AddArrayToObject(item, "a_objUsergroupexternal");
    if(a_obj_usergroupexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupexternalListEntry;
    if (usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal) {
    list_ForEach(a_obj_usergroupexternalListEntry, usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal) {
    cJSON *itemLocal = usergroupexternal_autocomplete_element_response_convertToJSON(a_obj_usergroupexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroupexternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_autocomplete_v2_response_m_payloadJSON){

    usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal
    list_t *a_obj_usergroupexternalList = NULL;

    // usergroupexternal_get_autocomplete_v2_response_m_payload->a_obj_usergroupexternal
    cJSON *a_obj_usergroupexternal = cJSON_GetObjectItemCaseSensitive(usergroupexternal_get_autocomplete_v2_response_m_payloadJSON, "a_objUsergroupexternal");
    if (cJSON_IsNull(a_obj_usergroupexternal)) {
        a_obj_usergroupexternal = NULL;
    }
    if (!a_obj_usergroupexternal) {
        goto end;
    }

    
    cJSON *a_obj_usergroupexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroupexternal)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroupexternal_local_nonprimitive,a_obj_usergroupexternal )
    {
        if(!cJSON_IsObject(a_obj_usergroupexternal_local_nonprimitive)){
            goto end;
        }
        usergroupexternal_autocomplete_element_response_t *a_obj_usergroupexternalItem = usergroupexternal_autocomplete_element_response_parseFromJSON(a_obj_usergroupexternal_local_nonprimitive);

        list_addElement(a_obj_usergroupexternalList, a_obj_usergroupexternalItem);
    }


    usergroupexternal_get_autocomplete_v2_response_m_payload_local_var = usergroupexternal_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_usergroupexternalList
        );

    return usergroupexternal_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_usergroupexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupexternalList) {
            usergroupexternal_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupexternalList);
        a_obj_usergroupexternalList = NULL;
    }
    return NULL;

}

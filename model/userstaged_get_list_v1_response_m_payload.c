#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_get_list_v1_response_m_payload.h"



static userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_userstaged
    ) {
    userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_local_var = malloc(sizeof(userstaged_get_list_v1_response_m_payload_t));
    if (!userstaged_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    userstaged_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    userstaged_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    userstaged_get_list_v1_response_m_payload_local_var->a_obj_userstaged = a_obj_userstaged;

    userstaged_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return userstaged_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_userstaged
    ) {
    return userstaged_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_userstaged
        );
}

void userstaged_get_list_v1_response_m_payload_free(userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload) {
    if(NULL == userstaged_get_list_v1_response_m_payload){
        return ;
    }
    if(userstaged_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userstaged_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_get_list_v1_response_m_payload->a_obj_userstaged) {
        list_ForEach(listEntry, userstaged_get_list_v1_response_m_payload->a_obj_userstaged) {
            userstaged_list_element_free(listEntry->data);
        }
        list_freeList(userstaged_get_list_v1_response_m_payload->a_obj_userstaged);
        userstaged_get_list_v1_response_m_payload->a_obj_userstaged = NULL;
    }
    free(userstaged_get_list_v1_response_m_payload);
}

cJSON *userstaged_get_list_v1_response_m_payload_convertToJSON(userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_get_list_v1_response_m_payload->i_row_returned
    if (!userstaged_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", userstaged_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_get_list_v1_response_m_payload->i_row_filtered
    if (!userstaged_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", userstaged_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // userstaged_get_list_v1_response_m_payload->a_obj_userstaged
    if (!userstaged_get_list_v1_response_m_payload->a_obj_userstaged) {
        goto fail;
    }
    cJSON *a_obj_userstaged = cJSON_AddArrayToObject(item, "a_objUserstaged");
    if(a_obj_userstaged == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userstagedListEntry;
    if (userstaged_get_list_v1_response_m_payload->a_obj_userstaged) {
    list_ForEach(a_obj_userstagedListEntry, userstaged_get_list_v1_response_m_payload->a_obj_userstaged) {
    cJSON *itemLocal = userstaged_list_element_convertToJSON(a_obj_userstagedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_userstaged, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_parseFromJSON(cJSON *userstaged_get_list_v1_response_m_payloadJSON){

    userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for userstaged_get_list_v1_response_m_payload->a_obj_userstaged
    list_t *a_obj_userstagedList = NULL;

    // userstaged_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(userstaged_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // userstaged_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(userstaged_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // userstaged_get_list_v1_response_m_payload->a_obj_userstaged
    cJSON *a_obj_userstaged = cJSON_GetObjectItemCaseSensitive(userstaged_get_list_v1_response_m_payloadJSON, "a_objUserstaged");
    if (cJSON_IsNull(a_obj_userstaged)) {
        a_obj_userstaged = NULL;
    }
    if (!a_obj_userstaged) {
        goto end;
    }

    
    cJSON *a_obj_userstaged_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_userstaged)){
        goto end; //nonprimitive container
    }

    a_obj_userstagedList = list_createList();

    cJSON_ArrayForEach(a_obj_userstaged_local_nonprimitive,a_obj_userstaged )
    {
        if(!cJSON_IsObject(a_obj_userstaged_local_nonprimitive)){
            goto end;
        }
        userstaged_list_element_t *a_obj_userstagedItem = userstaged_list_element_parseFromJSON(a_obj_userstaged_local_nonprimitive);

        list_addElement(a_obj_userstagedList, a_obj_userstagedItem);
    }


    userstaged_get_list_v1_response_m_payload_local_var = userstaged_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_userstagedList
        );

    return userstaged_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_userstagedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_userstagedList) {
            userstaged_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_userstagedList);
        a_obj_userstagedList = NULL;
    }
    return NULL;

}

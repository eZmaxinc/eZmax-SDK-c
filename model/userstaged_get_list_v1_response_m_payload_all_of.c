#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_get_list_v1_response_m_payload_all_of.h"



userstaged_get_list_v1_response_m_payload_all_of_t *userstaged_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_userstaged
    ) {
    userstaged_get_list_v1_response_m_payload_all_of_t *userstaged_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(userstaged_get_list_v1_response_m_payload_all_of_t));
    if (!userstaged_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    userstaged_get_list_v1_response_m_payload_all_of_local_var->a_obj_userstaged = a_obj_userstaged;

    return userstaged_get_list_v1_response_m_payload_all_of_local_var;
}


void userstaged_get_list_v1_response_m_payload_all_of_free(userstaged_get_list_v1_response_m_payload_all_of_t *userstaged_get_list_v1_response_m_payload_all_of) {
    if(NULL == userstaged_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged) {
        list_ForEach(listEntry, userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged) {
            userstaged_list_element_free(listEntry->data);
        }
        list_freeList(userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged);
        userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged = NULL;
    }
    free(userstaged_get_list_v1_response_m_payload_all_of);
}

cJSON *userstaged_get_list_v1_response_m_payload_all_of_convertToJSON(userstaged_get_list_v1_response_m_payload_all_of_t *userstaged_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged
    if (!userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged) {
        goto fail;
    }
    cJSON *a_obj_userstaged = cJSON_AddArrayToObject(item, "a_objUserstaged");
    if(a_obj_userstaged == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userstagedListEntry;
    if (userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged) {
    list_ForEach(a_obj_userstagedListEntry, userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged) {
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

userstaged_get_list_v1_response_m_payload_all_of_t *userstaged_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *userstaged_get_list_v1_response_m_payload_all_ofJSON){

    userstaged_get_list_v1_response_m_payload_all_of_t *userstaged_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged
    list_t *a_obj_userstagedList = NULL;

    // userstaged_get_list_v1_response_m_payload_all_of->a_obj_userstaged
    cJSON *a_obj_userstaged = cJSON_GetObjectItemCaseSensitive(userstaged_get_list_v1_response_m_payload_all_ofJSON, "a_objUserstaged");
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


    userstaged_get_list_v1_response_m_payload_all_of_local_var = userstaged_get_list_v1_response_m_payload_all_of_create (
        a_obj_userstagedList
        );

    return userstaged_get_list_v1_response_m_payload_all_of_local_var;
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

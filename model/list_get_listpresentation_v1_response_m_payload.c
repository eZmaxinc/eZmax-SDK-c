#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list_get_listpresentation_v1_response_m_payload.h"



list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload_create(
    list_t *a_obj_listpresentation
    ) {
    list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload_local_var = malloc(sizeof(list_get_listpresentation_v1_response_m_payload_t));
    if (!list_get_listpresentation_v1_response_m_payload_local_var) {
        return NULL;
    }
    list_get_listpresentation_v1_response_m_payload_local_var->a_obj_listpresentation = a_obj_listpresentation;

    return list_get_listpresentation_v1_response_m_payload_local_var;
}


void list_get_listpresentation_v1_response_m_payload_free(list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload) {
    if(NULL == list_get_listpresentation_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
        list_ForEach(listEntry, list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
            listpresentation_response_compound_free(listEntry->data);
        }
        list_freeList(list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation);
        list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation = NULL;
    }
    free(list_get_listpresentation_v1_response_m_payload);
}

cJSON *list_get_listpresentation_v1_response_m_payload_convertToJSON(list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation
    if (!list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
        goto fail;
    }
    
    cJSON *a_obj_listpresentation = cJSON_AddArrayToObject(item, "a_objListpresentation");
    if(a_obj_listpresentation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_listpresentationListEntry;
    if (list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
    list_ForEach(a_obj_listpresentationListEntry, list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
    cJSON *itemLocal = listpresentation_response_compound_convertToJSON(a_obj_listpresentationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_listpresentation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload_parseFromJSON(cJSON *list_get_listpresentation_v1_response_m_payloadJSON){

    list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload_local_var = NULL;

    // list_get_listpresentation_v1_response_m_payload->a_obj_listpresentation
    cJSON *a_obj_listpresentation = cJSON_GetObjectItemCaseSensitive(list_get_listpresentation_v1_response_m_payloadJSON, "a_objListpresentation");
    if (!a_obj_listpresentation) {
        goto end;
    }

    list_t *a_obj_listpresentationList;
    
    cJSON *a_obj_listpresentation_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_listpresentation)){
        goto end; //nonprimitive container
    }

    a_obj_listpresentationList = list_createList();

    cJSON_ArrayForEach(a_obj_listpresentation_local_nonprimitive,a_obj_listpresentation )
    {
        if(!cJSON_IsObject(a_obj_listpresentation_local_nonprimitive)){
            goto end;
        }
        listpresentation_response_compound_t *a_obj_listpresentationItem = listpresentation_response_compound_parseFromJSON(a_obj_listpresentation_local_nonprimitive);

        list_addElement(a_obj_listpresentationList, a_obj_listpresentationItem);
    }


    list_get_listpresentation_v1_response_m_payload_local_var = list_get_listpresentation_v1_response_m_payload_create (
        a_obj_listpresentationList
        );

    return list_get_listpresentation_v1_response_m_payload_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list_save_listpresentation_v1_response_m_payload.h"



list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload_create(
    list_t *a_obj_listpresentation
    ) {
    list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload_local_var = malloc(sizeof(list_save_listpresentation_v1_response_m_payload_t));
    if (!list_save_listpresentation_v1_response_m_payload_local_var) {
        return NULL;
    }
    list_save_listpresentation_v1_response_m_payload_local_var->a_obj_listpresentation = a_obj_listpresentation;

    return list_save_listpresentation_v1_response_m_payload_local_var;
}


void list_save_listpresentation_v1_response_m_payload_free(list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload) {
    if(NULL == list_save_listpresentation_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
        list_ForEach(listEntry, list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
            listpresentation_request_free(listEntry->data);
        }
        list_free(list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation);
        list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation = NULL;
    }
    free(list_save_listpresentation_v1_response_m_payload);
}

cJSON *list_save_listpresentation_v1_response_m_payload_convertToJSON(list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation
    if (!list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
        goto fail;
    }
    
    cJSON *a_obj_listpresentation = cJSON_AddArrayToObject(item, "a_objListpresentation");
    if(a_obj_listpresentation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_listpresentationListEntry;
    if (list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
    list_ForEach(a_obj_listpresentationListEntry, list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation) {
    cJSON *itemLocal = listpresentation_request_convertToJSON(a_obj_listpresentationListEntry->data);
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

list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload_parseFromJSON(cJSON *list_save_listpresentation_v1_response_m_payloadJSON){

    list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload_local_var = NULL;

    // list_save_listpresentation_v1_response_m_payload->a_obj_listpresentation
    cJSON *a_obj_listpresentation = cJSON_GetObjectItemCaseSensitive(list_save_listpresentation_v1_response_m_payloadJSON, "a_objListpresentation");
    if (!a_obj_listpresentation) {
        goto end;
    }

    list_t *a_obj_listpresentationList;
    
    cJSON *a_obj_listpresentation_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_listpresentation)){
        goto end; //nonprimitive container
    }

    a_obj_listpresentationList = list_create();

    cJSON_ArrayForEach(a_obj_listpresentation_local_nonprimitive,a_obj_listpresentation )
    {
        if(!cJSON_IsObject(a_obj_listpresentation_local_nonprimitive)){
            goto end;
        }
        listpresentation_request_t *a_obj_listpresentationItem = listpresentation_request_parseFromJSON(a_obj_listpresentation_local_nonprimitive);

        list_addElement(a_obj_listpresentationList, a_obj_listpresentationItem);
    }


    list_save_listpresentation_v1_response_m_payload_local_var = list_save_listpresentation_v1_response_m_payload_create (
        a_obj_listpresentationList
        );

    return list_save_listpresentation_v1_response_m_payload_local_var;
end:
    return NULL;

}

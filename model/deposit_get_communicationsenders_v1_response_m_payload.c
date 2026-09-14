#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposit_get_communicationsenders_v1_response_m_payload.h"



static deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(deposit_get_communicationsenders_v1_response_m_payload_t));
    if (!deposit_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(deposit_get_communicationsenders_v1_response_m_payload_local_var, 0, sizeof(deposit_get_communicationsenders_v1_response_m_payload_t));
    deposit_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    deposit_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;
    return deposit_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    deposit_get_communicationsenders_v1_response_m_payload_t *result = deposit_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
    if (!result) {
    }
    return result;
}

void deposit_get_communicationsenders_v1_response_m_payload_free(deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload) {
    if(NULL == deposit_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(deposit_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposit_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(deposit_get_communicationsenders_v1_response_m_payload);
}

cJSON *deposit_get_communicationsenders_v1_response_m_payload_convertToJSON(deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    cJSON *itemLocal = custom_communicationsender_response_convertToJSON(a_obj_communicationsendersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communicationsenders, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *deposit_get_communicationsenders_v1_response_m_payloadJSON){

    deposit_get_communicationsenders_v1_response_m_payload_t *deposit_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // deposit_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(deposit_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
    if (cJSON_IsNull(a_obj_communicationsenders)) {
        a_obj_communicationsenders = NULL;
    }
    if (!a_obj_communicationsenders) {
        goto end;
    }

    
    cJSON *a_obj_communicationsenders_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communicationsenders)){
        goto end; //nonprimitive container
    }

    a_obj_communicationsendersList = list_createList();

    cJSON_ArrayForEach(a_obj_communicationsenders_local_nonprimitive,a_obj_communicationsenders )
    {
        if(!cJSON_IsObject(a_obj_communicationsenders_local_nonprimitive)){
            goto end;
        }
        custom_communicationsender_response_t *a_obj_communicationsendersItem = custom_communicationsender_response_parseFromJSON(a_obj_communicationsenders_local_nonprimitive);

        list_addElement(a_obj_communicationsendersList, a_obj_communicationsendersItem);
    }



    deposit_get_communicationsenders_v1_response_m_payload_local_var = deposit_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    if (!deposit_get_communicationsenders_v1_response_m_payload_local_var) {
        goto end;
    }

    return deposit_get_communicationsenders_v1_response_m_payload_local_var;
end:
    if (a_obj_communicationsendersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationsendersList) {
            custom_communicationsender_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationsendersList);
        a_obj_communicationsendersList = NULL;
    }
    return NULL;

}

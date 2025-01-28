#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload.h"



static rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t));
    if (!rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    return rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    return rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
}

void rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_free(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload) {
    if(NULL == rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload);
}

cJSON *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payloadJSON){

    rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_t *rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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


    rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var = rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    return rejectedoffertopurchase_get_communicationsenders_v1_response_m_payload_local_var;
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

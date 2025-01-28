#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_communicationsenders_v1_response_m_payload.h"



static buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(buyercontract_get_communicationsenders_v1_response_m_payload_t));
    if (!buyercontract_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    buyercontract_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    buyercontract_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    return buyercontract_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    return buyercontract_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
}

void buyercontract_get_communicationsenders_v1_response_m_payload_free(buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload) {
    if(NULL == buyercontract_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(buyercontract_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buyercontract_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(buyercontract_get_communicationsenders_v1_response_m_payload);
}

cJSON *buyercontract_get_communicationsenders_v1_response_m_payload_convertToJSON(buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_get_communicationsenders_v1_response_m_payloadJSON){

    buyercontract_get_communicationsenders_v1_response_m_payload_t *buyercontract_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // buyercontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(buyercontract_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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


    buyercontract_get_communicationsenders_v1_response_m_payload_local_var = buyercontract_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    return buyercontract_get_communicationsenders_v1_response_m_payload_local_var;
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

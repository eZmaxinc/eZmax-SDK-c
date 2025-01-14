#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tranqcontract_get_communicationsenders_v1_response_m_payload.h"



tranqcontract_get_communicationsenders_v1_response_m_payload_t *tranqcontract_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    tranqcontract_get_communicationsenders_v1_response_m_payload_t *tranqcontract_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(tranqcontract_get_communicationsenders_v1_response_m_payload_t));
    if (!tranqcontract_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    tranqcontract_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    return tranqcontract_get_communicationsenders_v1_response_m_payload_local_var;
}


void tranqcontract_get_communicationsenders_v1_response_m_payload_free(tranqcontract_get_communicationsenders_v1_response_m_payload_t *tranqcontract_get_communicationsenders_v1_response_m_payload) {
    if(NULL == tranqcontract_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(tranqcontract_get_communicationsenders_v1_response_m_payload);
}

cJSON *tranqcontract_get_communicationsenders_v1_response_m_payload_convertToJSON(tranqcontract_get_communicationsenders_v1_response_m_payload_t *tranqcontract_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

tranqcontract_get_communicationsenders_v1_response_m_payload_t *tranqcontract_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *tranqcontract_get_communicationsenders_v1_response_m_payloadJSON){

    tranqcontract_get_communicationsenders_v1_response_m_payload_t *tranqcontract_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // tranqcontract_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(tranqcontract_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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


    tranqcontract_get_communicationsenders_v1_response_m_payload_local_var = tranqcontract_get_communicationsenders_v1_response_m_payload_create (
        a_obj_communicationsendersList
        );

    return tranqcontract_get_communicationsenders_v1_response_m_payload_local_var;
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

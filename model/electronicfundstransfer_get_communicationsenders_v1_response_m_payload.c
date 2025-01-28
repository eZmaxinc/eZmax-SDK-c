#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfer_get_communicationsenders_v1_response_m_payload.h"



static electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t));
    if (!electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;

    electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    return electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    return electronicfundstransfer_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
}

void electronicfundstransfer_get_communicationsenders_v1_response_m_payload_free(electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload) {
    if(NULL == electronicfundstransfer_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(electronicfundstransfer_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "electronicfundstransfer_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(electronicfundstransfer_get_communicationsenders_v1_response_m_payload);
}

cJSON *electronicfundstransfer_get_communicationsenders_v1_response_m_payload_convertToJSON(electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfer_get_communicationsenders_v1_response_m_payloadJSON){

    electronicfundstransfer_get_communicationsenders_v1_response_m_payload_t *electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // electronicfundstransfer_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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


    electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var = electronicfundstransfer_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    return electronicfundstransfer_get_communicationsenders_v1_response_m_payload_local_var;
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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lead_get_communicationsenders_v1_response_m_payload.h"



static lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(lead_get_communicationsenders_v1_response_m_payload_t));
    if (!lead_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(lead_get_communicationsenders_v1_response_m_payload_local_var, 0, sizeof(lead_get_communicationsenders_v1_response_m_payload_t));
    lead_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    lead_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;
    return lead_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    lead_get_communicationsenders_v1_response_m_payload_t *result = lead_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
    if (!result) {
    }
    return result;
}

void lead_get_communicationsenders_v1_response_m_payload_free(lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload) {
    if(NULL == lead_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(lead_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "lead_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(lead_get_communicationsenders_v1_response_m_payload);
}

cJSON *lead_get_communicationsenders_v1_response_m_payload_convertToJSON(lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *lead_get_communicationsenders_v1_response_m_payloadJSON){

    lead_get_communicationsenders_v1_response_m_payload_t *lead_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // lead_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(lead_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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



    lead_get_communicationsenders_v1_response_m_payload_local_var = lead_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    if (!lead_get_communicationsenders_v1_response_m_payload_local_var) {
        goto end;
    }

    return lead_get_communicationsenders_v1_response_m_payload_local_var;
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

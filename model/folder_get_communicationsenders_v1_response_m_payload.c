#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "folder_get_communicationsenders_v1_response_m_payload.h"



static folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload_create_internal(
    list_t *a_obj_communicationsenders
    ) {
    folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload_local_var = malloc(sizeof(folder_get_communicationsenders_v1_response_m_payload_t));
    if (!folder_get_communicationsenders_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(folder_get_communicationsenders_v1_response_m_payload_local_var, 0, sizeof(folder_get_communicationsenders_v1_response_m_payload_t));
    folder_get_communicationsenders_v1_response_m_payload_local_var->_library_owned = 1;
    folder_get_communicationsenders_v1_response_m_payload_local_var->a_obj_communicationsenders = a_obj_communicationsenders;
    return folder_get_communicationsenders_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload_create(
    list_t *a_obj_communicationsenders
    ) {
    folder_get_communicationsenders_v1_response_m_payload_t *result = folder_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsenders
        );
    if (!result) {
    }
    return result;
}

void folder_get_communicationsenders_v1_response_m_payload_free(folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload) {
    if(NULL == folder_get_communicationsenders_v1_response_m_payload){
        return ;
    }
    if(folder_get_communicationsenders_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "folder_get_communicationsenders_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        list_ForEach(listEntry, folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
            custom_communicationsender_response_free(listEntry->data);
        }
        list_freeList(folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders);
        folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders = NULL;
    }
    free(folder_get_communicationsenders_v1_response_m_payload);
}

cJSON *folder_get_communicationsenders_v1_response_m_payload_convertToJSON(folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    if (!folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
        goto fail;
    }
    cJSON *a_obj_communicationsenders = cJSON_AddArrayToObject(item, "a_objCommunicationsenders");
    if(a_obj_communicationsenders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationsendersListEntry;
    if (folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
    list_ForEach(a_obj_communicationsendersListEntry, folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders) {
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

folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload_parseFromJSON(cJSON *folder_get_communicationsenders_v1_response_m_payloadJSON){

    folder_get_communicationsenders_v1_response_m_payload_t *folder_get_communicationsenders_v1_response_m_payload_local_var = NULL;

    // define the local list for folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    list_t *a_obj_communicationsendersList = NULL;

    // folder_get_communicationsenders_v1_response_m_payload->a_obj_communicationsenders
    cJSON *a_obj_communicationsenders = cJSON_GetObjectItemCaseSensitive(folder_get_communicationsenders_v1_response_m_payloadJSON, "a_objCommunicationsenders");
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



    folder_get_communicationsenders_v1_response_m_payload_local_var = folder_get_communicationsenders_v1_response_m_payload_create_internal (
        a_obj_communicationsendersList
        );

    if (!folder_get_communicationsenders_v1_response_m_payload_local_var) {
        goto end;
    }

    return folder_get_communicationsenders_v1_response_m_payload_local_var;
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

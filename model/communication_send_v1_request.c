#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_send_v1_request.h"



static communication_send_v1_request_t *communication_send_v1_request_create_internal(
    list_t *a_obj_communication
    ) {
    communication_send_v1_request_t *communication_send_v1_request_local_var = malloc(sizeof(communication_send_v1_request_t));
    if (!communication_send_v1_request_local_var) {
        return NULL;
    }
    communication_send_v1_request_local_var->a_obj_communication = a_obj_communication;

    communication_send_v1_request_local_var->_library_owned = 1;
    return communication_send_v1_request_local_var;
}

__attribute__((deprecated)) communication_send_v1_request_t *communication_send_v1_request_create(
    list_t *a_obj_communication
    ) {
    return communication_send_v1_request_create_internal (
        a_obj_communication
        );
}

void communication_send_v1_request_free(communication_send_v1_request_t *communication_send_v1_request) {
    if(NULL == communication_send_v1_request){
        return ;
    }
    if(communication_send_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "communication_send_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (communication_send_v1_request->a_obj_communication) {
        list_ForEach(listEntry, communication_send_v1_request->a_obj_communication) {
            communication_request_compound_free(listEntry->data);
        }
        list_freeList(communication_send_v1_request->a_obj_communication);
        communication_send_v1_request->a_obj_communication = NULL;
    }
    free(communication_send_v1_request);
}

cJSON *communication_send_v1_request_convertToJSON(communication_send_v1_request_t *communication_send_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // communication_send_v1_request->a_obj_communication
    if (!communication_send_v1_request->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (communication_send_v1_request->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, communication_send_v1_request->a_obj_communication) {
    cJSON *itemLocal = communication_request_compound_convertToJSON(a_obj_communicationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communication, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_send_v1_request_t *communication_send_v1_request_parseFromJSON(cJSON *communication_send_v1_requestJSON){

    communication_send_v1_request_t *communication_send_v1_request_local_var = NULL;

    // define the local list for communication_send_v1_request->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // communication_send_v1_request->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(communication_send_v1_requestJSON, "a_objCommunication");
    if (cJSON_IsNull(a_obj_communication)) {
        a_obj_communication = NULL;
    }
    if (!a_obj_communication) {
        goto end;
    }

    
    cJSON *a_obj_communication_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communication)){
        goto end; //nonprimitive container
    }

    a_obj_communicationList = list_createList();

    cJSON_ArrayForEach(a_obj_communication_local_nonprimitive,a_obj_communication )
    {
        if(!cJSON_IsObject(a_obj_communication_local_nonprimitive)){
            goto end;
        }
        communication_request_compound_t *a_obj_communicationItem = communication_request_compound_parseFromJSON(a_obj_communication_local_nonprimitive);

        list_addElement(a_obj_communicationList, a_obj_communicationItem);
    }


    communication_send_v1_request_local_var = communication_send_v1_request_create_internal (
        a_obj_communicationList
        );

    return communication_send_v1_request_local_var;
end:
    if (a_obj_communicationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationList) {
            communication_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationList);
        a_obj_communicationList = NULL;
    }
    return NULL;

}

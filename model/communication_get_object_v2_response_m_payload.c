#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_get_object_v2_response_m_payload.h"



communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload_create(
    communication_response_compound_t *obj_communication
    ) {
    communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload_local_var = malloc(sizeof(communication_get_object_v2_response_m_payload_t));
    if (!communication_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    communication_get_object_v2_response_m_payload_local_var->obj_communication = obj_communication;

    return communication_get_object_v2_response_m_payload_local_var;
}


void communication_get_object_v2_response_m_payload_free(communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload) {
    if(NULL == communication_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_get_object_v2_response_m_payload->obj_communication) {
        communication_response_compound_free(communication_get_object_v2_response_m_payload->obj_communication);
        communication_get_object_v2_response_m_payload->obj_communication = NULL;
    }
    free(communication_get_object_v2_response_m_payload);
}

cJSON *communication_get_object_v2_response_m_payload_convertToJSON(communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // communication_get_object_v2_response_m_payload->obj_communication
    if (!communication_get_object_v2_response_m_payload->obj_communication) {
        goto fail;
    }
    cJSON *obj_communication_local_JSON = communication_response_compound_convertToJSON(communication_get_object_v2_response_m_payload->obj_communication);
    if(obj_communication_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCommunication", obj_communication_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload_parseFromJSON(cJSON *communication_get_object_v2_response_m_payloadJSON){

    communication_get_object_v2_response_m_payload_t *communication_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for communication_get_object_v2_response_m_payload->obj_communication
    communication_response_compound_t *obj_communication_local_nonprim = NULL;

    // communication_get_object_v2_response_m_payload->obj_communication
    cJSON *obj_communication = cJSON_GetObjectItemCaseSensitive(communication_get_object_v2_response_m_payloadJSON, "objCommunication");
    if (!obj_communication) {
        goto end;
    }

    
    obj_communication_local_nonprim = communication_response_compound_parseFromJSON(obj_communication); //nonprimitive


    communication_get_object_v2_response_m_payload_local_var = communication_get_object_v2_response_m_payload_create (
        obj_communication_local_nonprim
        );

    return communication_get_object_v2_response_m_payload_local_var;
end:
    if (obj_communication_local_nonprim) {
        communication_response_compound_free(obj_communication_local_nonprim);
        obj_communication_local_nonprim = NULL;
    }
    return NULL;

}

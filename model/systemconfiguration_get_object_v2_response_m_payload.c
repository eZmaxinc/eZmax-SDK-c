#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_get_object_v2_response_m_payload.h"



systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload_create(
    systemconfiguration_response_compound_t *obj_systemconfiguration
    ) {
    systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload_local_var = malloc(sizeof(systemconfiguration_get_object_v2_response_m_payload_t));
    if (!systemconfiguration_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    systemconfiguration_get_object_v2_response_m_payload_local_var->obj_systemconfiguration = obj_systemconfiguration;

    return systemconfiguration_get_object_v2_response_m_payload_local_var;
}


void systemconfiguration_get_object_v2_response_m_payload_free(systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload) {
    if(NULL == systemconfiguration_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration) {
        systemconfiguration_response_compound_free(systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration);
        systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration = NULL;
    }
    free(systemconfiguration_get_object_v2_response_m_payload);
}

cJSON *systemconfiguration_get_object_v2_response_m_payload_convertToJSON(systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration
    if (!systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration) {
        goto fail;
    }
    cJSON *obj_systemconfiguration_local_JSON = systemconfiguration_response_compound_convertToJSON(systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration);
    if(obj_systemconfiguration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSystemconfiguration", obj_systemconfiguration_local_JSON);
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

systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload_parseFromJSON(cJSON *systemconfiguration_get_object_v2_response_m_payloadJSON){

    systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration
    systemconfiguration_response_compound_t *obj_systemconfiguration_local_nonprim = NULL;

    // systemconfiguration_get_object_v2_response_m_payload->obj_systemconfiguration
    cJSON *obj_systemconfiguration = cJSON_GetObjectItemCaseSensitive(systemconfiguration_get_object_v2_response_m_payloadJSON, "objSystemconfiguration");
    if (!obj_systemconfiguration) {
        goto end;
    }

    
    obj_systemconfiguration_local_nonprim = systemconfiguration_response_compound_parseFromJSON(obj_systemconfiguration); //nonprimitive


    systemconfiguration_get_object_v2_response_m_payload_local_var = systemconfiguration_get_object_v2_response_m_payload_create (
        obj_systemconfiguration_local_nonprim
        );

    return systemconfiguration_get_object_v2_response_m_payload_local_var;
end:
    if (obj_systemconfiguration_local_nonprim) {
        systemconfiguration_response_compound_free(obj_systemconfiguration_local_nonprim);
        obj_systemconfiguration_local_nonprim = NULL;
    }
    return NULL;

}

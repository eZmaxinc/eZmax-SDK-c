#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_get_current_v2_response_m_payload.h"



static activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_create_internal(
    activesession_response_compound_t *obj_activesession
    ) {
    activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_local_var = malloc(sizeof(activesession_get_current_v2_response_m_payload_t));
    if (!activesession_get_current_v2_response_m_payload_local_var) {
        return NULL;
    }
    activesession_get_current_v2_response_m_payload_local_var->obj_activesession = obj_activesession;

    activesession_get_current_v2_response_m_payload_local_var->_library_owned = 1;
    return activesession_get_current_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_create(
    activesession_response_compound_t *obj_activesession
    ) {
    return activesession_get_current_v2_response_m_payload_create_internal (
        obj_activesession
        );
}

void activesession_get_current_v2_response_m_payload_free(activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload) {
    if(NULL == activesession_get_current_v2_response_m_payload){
        return ;
    }
    if(activesession_get_current_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_get_current_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_get_current_v2_response_m_payload->obj_activesession) {
        activesession_response_compound_free(activesession_get_current_v2_response_m_payload->obj_activesession);
        activesession_get_current_v2_response_m_payload->obj_activesession = NULL;
    }
    free(activesession_get_current_v2_response_m_payload);
}

cJSON *activesession_get_current_v2_response_m_payload_convertToJSON(activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // activesession_get_current_v2_response_m_payload->obj_activesession
    if (!activesession_get_current_v2_response_m_payload->obj_activesession) {
        goto fail;
    }
    cJSON *obj_activesession_local_JSON = activesession_response_compound_convertToJSON(activesession_get_current_v2_response_m_payload->obj_activesession);
    if(obj_activesession_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objActivesession", obj_activesession_local_JSON);
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

activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_parseFromJSON(cJSON *activesession_get_current_v2_response_m_payloadJSON){

    activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_local_var = NULL;

    // define the local variable for activesession_get_current_v2_response_m_payload->obj_activesession
    activesession_response_compound_t *obj_activesession_local_nonprim = NULL;

    // activesession_get_current_v2_response_m_payload->obj_activesession
    cJSON *obj_activesession = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v2_response_m_payloadJSON, "objActivesession");
    if (cJSON_IsNull(obj_activesession)) {
        obj_activesession = NULL;
    }
    if (!obj_activesession) {
        goto end;
    }

    
    obj_activesession_local_nonprim = activesession_response_compound_parseFromJSON(obj_activesession); //nonprimitive


    activesession_get_current_v2_response_m_payload_local_var = activesession_get_current_v2_response_m_payload_create_internal (
        obj_activesession_local_nonprim
        );

    return activesession_get_current_v2_response_m_payload_local_var;
end:
    if (obj_activesession_local_nonprim) {
        activesession_response_compound_free(obj_activesession_local_nonprim);
        obj_activesession_local_nonprim = NULL;
    }
    return NULL;

}

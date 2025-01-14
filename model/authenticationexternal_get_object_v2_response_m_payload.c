#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_get_object_v2_response_m_payload.h"



authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload_create(
    authenticationexternal_response_compound_t *obj_authenticationexternal
    ) {
    authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload_local_var = malloc(sizeof(authenticationexternal_get_object_v2_response_m_payload_t));
    if (!authenticationexternal_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    authenticationexternal_get_object_v2_response_m_payload_local_var->obj_authenticationexternal = obj_authenticationexternal;

    return authenticationexternal_get_object_v2_response_m_payload_local_var;
}


void authenticationexternal_get_object_v2_response_m_payload_free(authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload) {
    if(NULL == authenticationexternal_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal) {
        authenticationexternal_response_compound_free(authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal);
        authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal = NULL;
    }
    free(authenticationexternal_get_object_v2_response_m_payload);
}

cJSON *authenticationexternal_get_object_v2_response_m_payload_convertToJSON(authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal
    if (!authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal) {
        goto fail;
    }
    cJSON *obj_authenticationexternal_local_JSON = authenticationexternal_response_compound_convertToJSON(authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal);
    if(obj_authenticationexternal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAuthenticationexternal", obj_authenticationexternal_local_JSON);
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

authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload_parseFromJSON(cJSON *authenticationexternal_get_object_v2_response_m_payloadJSON){

    authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal
    authenticationexternal_response_compound_t *obj_authenticationexternal_local_nonprim = NULL;

    // authenticationexternal_get_object_v2_response_m_payload->obj_authenticationexternal
    cJSON *obj_authenticationexternal = cJSON_GetObjectItemCaseSensitive(authenticationexternal_get_object_v2_response_m_payloadJSON, "objAuthenticationexternal");
    if (!obj_authenticationexternal) {
        goto end;
    }

    
    obj_authenticationexternal_local_nonprim = authenticationexternal_response_compound_parseFromJSON(obj_authenticationexternal); //nonprimitive


    authenticationexternal_get_object_v2_response_m_payload_local_var = authenticationexternal_get_object_v2_response_m_payload_create (
        obj_authenticationexternal_local_nonprim
        );

    return authenticationexternal_get_object_v2_response_m_payload_local_var;
end:
    if (obj_authenticationexternal_local_nonprim) {
        authenticationexternal_response_compound_free(obj_authenticationexternal_local_nonprim);
        obj_authenticationexternal_local_nonprim = NULL;
    }
    return NULL;

}

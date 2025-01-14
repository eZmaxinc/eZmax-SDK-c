#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_get_object_v3_response_m_payload.h"



signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload_create(
    signature_response_compound_v3_t *obj_signature
    ) {
    signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload_local_var = malloc(sizeof(signature_get_object_v3_response_m_payload_t));
    if (!signature_get_object_v3_response_m_payload_local_var) {
        return NULL;
    }
    signature_get_object_v3_response_m_payload_local_var->obj_signature = obj_signature;

    return signature_get_object_v3_response_m_payload_local_var;
}


void signature_get_object_v3_response_m_payload_free(signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload) {
    if(NULL == signature_get_object_v3_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_get_object_v3_response_m_payload->obj_signature) {
        signature_response_compound_v3_free(signature_get_object_v3_response_m_payload->obj_signature);
        signature_get_object_v3_response_m_payload->obj_signature = NULL;
    }
    free(signature_get_object_v3_response_m_payload);
}

cJSON *signature_get_object_v3_response_m_payload_convertToJSON(signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // signature_get_object_v3_response_m_payload->obj_signature
    if (!signature_get_object_v3_response_m_payload->obj_signature) {
        goto fail;
    }
    cJSON *obj_signature_local_JSON = signature_response_compound_v3_convertToJSON(signature_get_object_v3_response_m_payload->obj_signature);
    if(obj_signature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSignature", obj_signature_local_JSON);
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

signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload_parseFromJSON(cJSON *signature_get_object_v3_response_m_payloadJSON){

    signature_get_object_v3_response_m_payload_t *signature_get_object_v3_response_m_payload_local_var = NULL;

    // define the local variable for signature_get_object_v3_response_m_payload->obj_signature
    signature_response_compound_v3_t *obj_signature_local_nonprim = NULL;

    // signature_get_object_v3_response_m_payload->obj_signature
    cJSON *obj_signature = cJSON_GetObjectItemCaseSensitive(signature_get_object_v3_response_m_payloadJSON, "objSignature");
    if (!obj_signature) {
        goto end;
    }

    
    obj_signature_local_nonprim = signature_response_compound_v3_parseFromJSON(obj_signature); //nonprimitive


    signature_get_object_v3_response_m_payload_local_var = signature_get_object_v3_response_m_payload_create (
        obj_signature_local_nonprim
        );

    return signature_get_object_v3_response_m_payload_local_var;
end:
    if (obj_signature_local_nonprim) {
        signature_response_compound_v3_free(obj_signature_local_nonprim);
        obj_signature_local_nonprim = NULL;
    }
    return NULL;

}

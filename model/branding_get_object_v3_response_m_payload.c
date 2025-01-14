#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_get_object_v3_response_m_payload.h"



branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload_create(
    branding_response_compound_v3_t *obj_branding
    ) {
    branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload_local_var = malloc(sizeof(branding_get_object_v3_response_m_payload_t));
    if (!branding_get_object_v3_response_m_payload_local_var) {
        return NULL;
    }
    branding_get_object_v3_response_m_payload_local_var->obj_branding = obj_branding;

    return branding_get_object_v3_response_m_payload_local_var;
}


void branding_get_object_v3_response_m_payload_free(branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload) {
    if(NULL == branding_get_object_v3_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_get_object_v3_response_m_payload->obj_branding) {
        branding_response_compound_v3_free(branding_get_object_v3_response_m_payload->obj_branding);
        branding_get_object_v3_response_m_payload->obj_branding = NULL;
    }
    free(branding_get_object_v3_response_m_payload);
}

cJSON *branding_get_object_v3_response_m_payload_convertToJSON(branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // branding_get_object_v3_response_m_payload->obj_branding
    if (!branding_get_object_v3_response_m_payload->obj_branding) {
        goto fail;
    }
    cJSON *obj_branding_local_JSON = branding_response_compound_v3_convertToJSON(branding_get_object_v3_response_m_payload->obj_branding);
    if(obj_branding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBranding", obj_branding_local_JSON);
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

branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload_parseFromJSON(cJSON *branding_get_object_v3_response_m_payloadJSON){

    branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload_local_var = NULL;

    // define the local variable for branding_get_object_v3_response_m_payload->obj_branding
    branding_response_compound_v3_t *obj_branding_local_nonprim = NULL;

    // branding_get_object_v3_response_m_payload->obj_branding
    cJSON *obj_branding = cJSON_GetObjectItemCaseSensitive(branding_get_object_v3_response_m_payloadJSON, "objBranding");
    if (!obj_branding) {
        goto end;
    }

    
    obj_branding_local_nonprim = branding_response_compound_v3_parseFromJSON(obj_branding); //nonprimitive


    branding_get_object_v3_response_m_payload_local_var = branding_get_object_v3_response_m_payload_create (
        obj_branding_local_nonprim
        );

    return branding_get_object_v3_response_m_payload_local_var;
end:
    if (obj_branding_local_nonprim) {
        branding_response_compound_v3_free(obj_branding_local_nonprim);
        obj_branding_local_nonprim = NULL;
    }
    return NULL;

}

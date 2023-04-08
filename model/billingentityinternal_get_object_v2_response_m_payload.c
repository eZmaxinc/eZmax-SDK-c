#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_get_object_v2_response_m_payload.h"



billingentityinternal_get_object_v2_response_m_payload_t *billingentityinternal_get_object_v2_response_m_payload_create(
    billingentityinternal_response_compound_t *obj_billingentityinternal
    ) {
    billingentityinternal_get_object_v2_response_m_payload_t *billingentityinternal_get_object_v2_response_m_payload_local_var = malloc(sizeof(billingentityinternal_get_object_v2_response_m_payload_t));
    if (!billingentityinternal_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    billingentityinternal_get_object_v2_response_m_payload_local_var->obj_billingentityinternal = obj_billingentityinternal;

    return billingentityinternal_get_object_v2_response_m_payload_local_var;
}


void billingentityinternal_get_object_v2_response_m_payload_free(billingentityinternal_get_object_v2_response_m_payload_t *billingentityinternal_get_object_v2_response_m_payload) {
    if(NULL == billingentityinternal_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal) {
        billingentityinternal_response_compound_free(billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal);
        billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal = NULL;
    }
    free(billingentityinternal_get_object_v2_response_m_payload);
}

cJSON *billingentityinternal_get_object_v2_response_m_payload_convertToJSON(billingentityinternal_get_object_v2_response_m_payload_t *billingentityinternal_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal
    if (!billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal) {
        goto fail;
    }
    cJSON *obj_billingentityinternal_local_JSON = billingentityinternal_response_compound_convertToJSON(billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal);
    if(obj_billingentityinternal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBillingentityinternal", obj_billingentityinternal_local_JSON);
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

billingentityinternal_get_object_v2_response_m_payload_t *billingentityinternal_get_object_v2_response_m_payload_parseFromJSON(cJSON *billingentityinternal_get_object_v2_response_m_payloadJSON){

    billingentityinternal_get_object_v2_response_m_payload_t *billingentityinternal_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal
    billingentityinternal_response_compound_t *obj_billingentityinternal_local_nonprim = NULL;

    // billingentityinternal_get_object_v2_response_m_payload->obj_billingentityinternal
    cJSON *obj_billingentityinternal = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_object_v2_response_m_payloadJSON, "objBillingentityinternal");
    if (!obj_billingentityinternal) {
        goto end;
    }

    
    obj_billingentityinternal_local_nonprim = billingentityinternal_response_compound_parseFromJSON(obj_billingentityinternal); //nonprimitive


    billingentityinternal_get_object_v2_response_m_payload_local_var = billingentityinternal_get_object_v2_response_m_payload_create (
        obj_billingentityinternal_local_nonprim
        );

    return billingentityinternal_get_object_v2_response_m_payload_local_var;
end:
    if (obj_billingentityinternal_local_nonprim) {
        billingentityinternal_response_compound_free(obj_billingentityinternal_local_nonprim);
        obj_billingentityinternal_local_nonprim = NULL;
    }
    return NULL;

}

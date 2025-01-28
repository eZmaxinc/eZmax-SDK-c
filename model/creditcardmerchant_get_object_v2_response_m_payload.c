#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_get_object_v2_response_m_payload.h"



static creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_create_internal(
    creditcardmerchant_response_compound_t *obj_creditcardmerchant
    ) {
    creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_local_var = malloc(sizeof(creditcardmerchant_get_object_v2_response_m_payload_t));
    if (!creditcardmerchant_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    creditcardmerchant_get_object_v2_response_m_payload_local_var->obj_creditcardmerchant = obj_creditcardmerchant;

    creditcardmerchant_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return creditcardmerchant_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_create(
    creditcardmerchant_response_compound_t *obj_creditcardmerchant
    ) {
    return creditcardmerchant_get_object_v2_response_m_payload_create_internal (
        obj_creditcardmerchant
        );
}

void creditcardmerchant_get_object_v2_response_m_payload_free(creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload) {
    if(NULL == creditcardmerchant_get_object_v2_response_m_payload){
        return ;
    }
    if(creditcardmerchant_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant) {
        creditcardmerchant_response_compound_free(creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant);
        creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant = NULL;
    }
    free(creditcardmerchant_get_object_v2_response_m_payload);
}

cJSON *creditcardmerchant_get_object_v2_response_m_payload_convertToJSON(creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant
    if (!creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant) {
        goto fail;
    }
    cJSON *obj_creditcardmerchant_local_JSON = creditcardmerchant_response_compound_convertToJSON(creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant);
    if(obj_creditcardmerchant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcardmerchant", obj_creditcardmerchant_local_JSON);
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

creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_get_object_v2_response_m_payloadJSON){

    creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant
    creditcardmerchant_response_compound_t *obj_creditcardmerchant_local_nonprim = NULL;

    // creditcardmerchant_get_object_v2_response_m_payload->obj_creditcardmerchant
    cJSON *obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_get_object_v2_response_m_payloadJSON, "objCreditcardmerchant");
    if (cJSON_IsNull(obj_creditcardmerchant)) {
        obj_creditcardmerchant = NULL;
    }
    if (!obj_creditcardmerchant) {
        goto end;
    }

    
    obj_creditcardmerchant_local_nonprim = creditcardmerchant_response_compound_parseFromJSON(obj_creditcardmerchant); //nonprimitive


    creditcardmerchant_get_object_v2_response_m_payload_local_var = creditcardmerchant_get_object_v2_response_m_payload_create_internal (
        obj_creditcardmerchant_local_nonprim
        );

    return creditcardmerchant_get_object_v2_response_m_payload_local_var;
end:
    if (obj_creditcardmerchant_local_nonprim) {
        creditcardmerchant_response_compound_free(obj_creditcardmerchant_local_nonprim);
        obj_creditcardmerchant_local_nonprim = NULL;
    }
    return NULL;

}

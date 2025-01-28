#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_get_object_v2_response_m_payload.h"



static creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload_create_internal(
    creditcardclient_response_compound_t *obj_creditcardclient
    ) {
    creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload_local_var = malloc(sizeof(creditcardclient_get_object_v2_response_m_payload_t));
    if (!creditcardclient_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    creditcardclient_get_object_v2_response_m_payload_local_var->obj_creditcardclient = obj_creditcardclient;

    creditcardclient_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return creditcardclient_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload_create(
    creditcardclient_response_compound_t *obj_creditcardclient
    ) {
    return creditcardclient_get_object_v2_response_m_payload_create_internal (
        obj_creditcardclient
        );
}

void creditcardclient_get_object_v2_response_m_payload_free(creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload) {
    if(NULL == creditcardclient_get_object_v2_response_m_payload){
        return ;
    }
    if(creditcardclient_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient) {
        creditcardclient_response_compound_free(creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient);
        creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient = NULL;
    }
    free(creditcardclient_get_object_v2_response_m_payload);
}

cJSON *creditcardclient_get_object_v2_response_m_payload_convertToJSON(creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient
    if (!creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient) {
        goto fail;
    }
    cJSON *obj_creditcardclient_local_JSON = creditcardclient_response_compound_convertToJSON(creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient);
    if(obj_creditcardclient_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcardclient", obj_creditcardclient_local_JSON);
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

creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload_parseFromJSON(cJSON *creditcardclient_get_object_v2_response_m_payloadJSON){

    creditcardclient_get_object_v2_response_m_payload_t *creditcardclient_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient
    creditcardclient_response_compound_t *obj_creditcardclient_local_nonprim = NULL;

    // creditcardclient_get_object_v2_response_m_payload->obj_creditcardclient
    cJSON *obj_creditcardclient = cJSON_GetObjectItemCaseSensitive(creditcardclient_get_object_v2_response_m_payloadJSON, "objCreditcardclient");
    if (cJSON_IsNull(obj_creditcardclient)) {
        obj_creditcardclient = NULL;
    }
    if (!obj_creditcardclient) {
        goto end;
    }

    
    obj_creditcardclient_local_nonprim = creditcardclient_response_compound_parseFromJSON(obj_creditcardclient); //nonprimitive


    creditcardclient_get_object_v2_response_m_payload_local_var = creditcardclient_get_object_v2_response_m_payload_create_internal (
        obj_creditcardclient_local_nonprim
        );

    return creditcardclient_get_object_v2_response_m_payload_local_var;
end:
    if (obj_creditcardclient_local_nonprim) {
        creditcardclient_response_compound_free(obj_creditcardclient_local_nonprim);
        obj_creditcardclient_local_nonprim = NULL;
    }
    return NULL;

}

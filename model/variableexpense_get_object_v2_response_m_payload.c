#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_get_object_v2_response_m_payload.h"



variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload_create(
    variableexpense_response_compound_t *obj_variableexpense
    ) {
    variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload_local_var = malloc(sizeof(variableexpense_get_object_v2_response_m_payload_t));
    if (!variableexpense_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    variableexpense_get_object_v2_response_m_payload_local_var->obj_variableexpense = obj_variableexpense;

    return variableexpense_get_object_v2_response_m_payload_local_var;
}


void variableexpense_get_object_v2_response_m_payload_free(variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload) {
    if(NULL == variableexpense_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_get_object_v2_response_m_payload->obj_variableexpense) {
        variableexpense_response_compound_free(variableexpense_get_object_v2_response_m_payload->obj_variableexpense);
        variableexpense_get_object_v2_response_m_payload->obj_variableexpense = NULL;
    }
    free(variableexpense_get_object_v2_response_m_payload);
}

cJSON *variableexpense_get_object_v2_response_m_payload_convertToJSON(variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_get_object_v2_response_m_payload->obj_variableexpense
    if (!variableexpense_get_object_v2_response_m_payload->obj_variableexpense) {
        goto fail;
    }
    cJSON *obj_variableexpense_local_JSON = variableexpense_response_compound_convertToJSON(variableexpense_get_object_v2_response_m_payload->obj_variableexpense);
    if(obj_variableexpense_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objVariableexpense", obj_variableexpense_local_JSON);
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

variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload_parseFromJSON(cJSON *variableexpense_get_object_v2_response_m_payloadJSON){

    variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for variableexpense_get_object_v2_response_m_payload->obj_variableexpense
    variableexpense_response_compound_t *obj_variableexpense_local_nonprim = NULL;

    // variableexpense_get_object_v2_response_m_payload->obj_variableexpense
    cJSON *obj_variableexpense = cJSON_GetObjectItemCaseSensitive(variableexpense_get_object_v2_response_m_payloadJSON, "objVariableexpense");
    if (!obj_variableexpense) {
        goto end;
    }

    
    obj_variableexpense_local_nonprim = variableexpense_response_compound_parseFromJSON(obj_variableexpense); //nonprimitive


    variableexpense_get_object_v2_response_m_payload_local_var = variableexpense_get_object_v2_response_m_payload_create (
        obj_variableexpense_local_nonprim
        );

    return variableexpense_get_object_v2_response_m_payload_local_var;
end:
    if (obj_variableexpense_local_nonprim) {
        variableexpense_response_compound_free(obj_variableexpense_local_nonprim);
        obj_variableexpense_local_nonprim = NULL;
    }
    return NULL;

}

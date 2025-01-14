#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_get_object_v2_response_m_payload.h"



supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload_create(
    supply_response_compound_t *obj_supply
    ) {
    supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload_local_var = malloc(sizeof(supply_get_object_v2_response_m_payload_t));
    if (!supply_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    supply_get_object_v2_response_m_payload_local_var->obj_supply = obj_supply;

    return supply_get_object_v2_response_m_payload_local_var;
}


void supply_get_object_v2_response_m_payload_free(supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload) {
    if(NULL == supply_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_get_object_v2_response_m_payload->obj_supply) {
        supply_response_compound_free(supply_get_object_v2_response_m_payload->obj_supply);
        supply_get_object_v2_response_m_payload->obj_supply = NULL;
    }
    free(supply_get_object_v2_response_m_payload);
}

cJSON *supply_get_object_v2_response_m_payload_convertToJSON(supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // supply_get_object_v2_response_m_payload->obj_supply
    if (!supply_get_object_v2_response_m_payload->obj_supply) {
        goto fail;
    }
    cJSON *obj_supply_local_JSON = supply_response_compound_convertToJSON(supply_get_object_v2_response_m_payload->obj_supply);
    if(obj_supply_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSupply", obj_supply_local_JSON);
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

supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload_parseFromJSON(cJSON *supply_get_object_v2_response_m_payloadJSON){

    supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for supply_get_object_v2_response_m_payload->obj_supply
    supply_response_compound_t *obj_supply_local_nonprim = NULL;

    // supply_get_object_v2_response_m_payload->obj_supply
    cJSON *obj_supply = cJSON_GetObjectItemCaseSensitive(supply_get_object_v2_response_m_payloadJSON, "objSupply");
    if (!obj_supply) {
        goto end;
    }

    
    obj_supply_local_nonprim = supply_response_compound_parseFromJSON(obj_supply); //nonprimitive


    supply_get_object_v2_response_m_payload_local_var = supply_get_object_v2_response_m_payload_create (
        obj_supply_local_nonprim
        );

    return supply_get_object_v2_response_m_payload_local_var;
end:
    if (obj_supply_local_nonprim) {
        supply_response_compound_free(obj_supply_local_nonprim);
        obj_supply_local_nonprim = NULL;
    }
    return NULL;

}

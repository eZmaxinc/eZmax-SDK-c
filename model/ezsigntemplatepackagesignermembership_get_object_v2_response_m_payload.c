#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload.h"



ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_create(
    ezsigntemplatepackagesignermembership_response_compound_t *obj_ezsigntemplatepackagesignermembership
    ) {
    ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatepackagesignermembership = obj_ezsigntemplatepackagesignermembership;

    return ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_free(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership) {
        ezsigntemplatepackagesignermembership_response_compound_free(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership);
        ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership = NULL;
    }
    free(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership
    if (!ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepackagesignermembership_local_JSON = ezsigntemplatepackagesignermembership_response_compound_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership);
    if(obj_ezsigntemplatepackagesignermembership_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackagesignermembership", obj_ezsigntemplatepackagesignermembership_local_JSON);
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

ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payloadJSON){

    ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership
    ezsigntemplatepackagesignermembership_response_compound_t *obj_ezsigntemplatepackagesignermembership_local_nonprim = NULL;

    // ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesignermembership
    cJSON *obj_ezsigntemplatepackagesignermembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_get_object_v2_response_m_payloadJSON, "objEzsigntemplatepackagesignermembership");
    if (!obj_ezsigntemplatepackagesignermembership) {
        goto end;
    }

    
    obj_ezsigntemplatepackagesignermembership_local_nonprim = ezsigntemplatepackagesignermembership_response_compound_parseFromJSON(obj_ezsigntemplatepackagesignermembership); //nonprimitive


    ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var = ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_create (
        obj_ezsigntemplatepackagesignermembership_local_nonprim
        );

    return ezsigntemplatepackagesignermembership_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatepackagesignermembership_local_nonprim) {
        ezsigntemplatepackagesignermembership_response_compound_free(obj_ezsigntemplatepackagesignermembership_local_nonprim);
        obj_ezsigntemplatepackagesignermembership_local_nonprim = NULL;
    }
    return NULL;

}

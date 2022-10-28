#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_get_object_v2_response_m_payload.h"



ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v2_response_m_payload_create(
    ezsigntemplatepackagemembership_response_compound_t *obj_ezsigntemplatepackagemembership
    ) {
    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatepackagemembership = obj_ezsigntemplatepackagemembership;

    return ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplatepackagemembership_get_object_v2_response_m_payload_free(ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatepackagemembership_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership) {
        ezsigntemplatepackagemembership_response_compound_free(ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership);
        ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership = NULL;
    }
    free(ezsigntemplatepackagemembership_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatepackagemembership_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepackagemembership_local_JSON = ezsigntemplatepackagemembership_response_compound_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership);
    if(obj_ezsigntemplatepackagemembership_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackagemembership", obj_ezsigntemplatepackagemembership_local_JSON);
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

ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v2_response_m_payloadJSON){

    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership
    ezsigntemplatepackagemembership_response_compound_t *obj_ezsigntemplatepackagemembership_local_nonprim = NULL;

    // ezsigntemplatepackagemembership_get_object_v2_response_m_payload->obj_ezsigntemplatepackagemembership
    cJSON *obj_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v2_response_m_payloadJSON, "objEzsigntemplatepackagemembership");
    if (!obj_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    obj_ezsigntemplatepackagemembership_local_nonprim = ezsigntemplatepackagemembership_response_compound_parseFromJSON(obj_ezsigntemplatepackagemembership); //nonprimitive


    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var = ezsigntemplatepackagemembership_get_object_v2_response_m_payload_create (
        obj_ezsigntemplatepackagemembership_local_nonprim
        );

    return ezsigntemplatepackagemembership_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatepackagemembership_local_nonprim) {
        ezsigntemplatepackagemembership_response_compound_free(obj_ezsigntemplatepackagemembership_local_nonprim);
        obj_ezsigntemplatepackagemembership_local_nonprim = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_get_object_v2_response_m_payload.h"



ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_create(
    ezsigntemplateformfieldgroup_response_compound_t *obj_ezsigntemplateformfieldgroup
    ) {
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t));
    if (!ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var->obj_ezsigntemplateformfieldgroup = obj_ezsigntemplateformfieldgroup;

    return ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_free(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplateformfieldgroup_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup) {
        ezsigntemplateformfieldgroup_response_compound_free(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup);
        ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup = NULL;
    }
    free(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup
    if (!ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup) {
        goto fail;
    }
    cJSON *obj_ezsigntemplateformfieldgroup_local_JSON = ezsigntemplateformfieldgroup_response_compound_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup);
    if(obj_ezsigntemplateformfieldgroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateformfieldgroup", obj_ezsigntemplateformfieldgroup_local_JSON);
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

ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_get_object_v2_response_m_payloadJSON){

    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup
    ezsigntemplateformfieldgroup_response_compound_t *obj_ezsigntemplateformfieldgroup_local_nonprim = NULL;

    // ezsigntemplateformfieldgroup_get_object_v2_response_m_payload->obj_ezsigntemplateformfieldgroup
    cJSON *obj_ezsigntemplateformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v2_response_m_payloadJSON, "objEzsigntemplateformfieldgroup");
    if (!obj_ezsigntemplateformfieldgroup) {
        goto end;
    }

    
    obj_ezsigntemplateformfieldgroup_local_nonprim = ezsigntemplateformfieldgroup_response_compound_parseFromJSON(obj_ezsigntemplateformfieldgroup); //nonprimitive


    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_create (
        obj_ezsigntemplateformfieldgroup_local_nonprim
        );

    return ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplateformfieldgroup_local_nonprim) {
        ezsigntemplateformfieldgroup_response_compound_free(obj_ezsigntemplateformfieldgroup_local_nonprim);
        obj_ezsigntemplateformfieldgroup_local_nonprim = NULL;
    }
    return NULL;

}

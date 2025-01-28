#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload.h"



static ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_create_internal(
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
    ) {
    ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;

    ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_create(
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
    ) {
    return ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_create_internal (
        b_ezsigntemplatepackage_needvalidation,
        b_ezsignbulksend_needvalidation
        );
}

void ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_free(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    if (!ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageNeedvalidation");
    if (cJSON_IsNull(b_ezsigntemplatepackage_needvalidation)) {
        b_ezsigntemplatepackage_needvalidation = NULL;
    }
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payloadJSON, "bEzsignbulksendNeedvalidation");
    if (cJSON_IsNull(b_ezsignbulksend_needvalidation)) {
        b_ezsignbulksend_needvalidation = NULL;
    }
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }


    ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var = ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_create_internal (
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsignbulksend_needvalidation->valueint
        );

    return ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

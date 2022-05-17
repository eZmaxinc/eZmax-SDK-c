#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_delete_object_v1_response_m_payload.h"



ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create(
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
    ) {
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;

    return ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesigner_delete_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_delete_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_delete_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageNeedvalidation");
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_delete_object_v1_response_m_payloadJSON, "bEzsignbulksendNeedvalidation");
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }


    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create (
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsignbulksend_needvalidation->valueint
        );

    return ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

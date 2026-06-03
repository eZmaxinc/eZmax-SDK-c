#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_delete_object_v1_response_m_payload.h"



static ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create_internal(
    int *b_ezsigntemplatepackage_needvalidation,
    int *b_ezsignbulksend_needvalidation
    ) {
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var, 0, sizeof(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t));
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var->_library_owned = 1;
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    return ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create(
    int *b_ezsigntemplatepackage_needvalidation,
    int *b_ezsignbulksend_needvalidation
    ) {
    int *b_ezsigntemplatepackage_needvalidation_copy = NULL;
    if (b_ezsigntemplatepackage_needvalidation) {
        b_ezsigntemplatepackage_needvalidation_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackage_needvalidation_copy) *b_ezsigntemplatepackage_needvalidation_copy = *b_ezsigntemplatepackage_needvalidation;
    }
    int *b_ezsignbulksend_needvalidation_copy = NULL;
    if (b_ezsignbulksend_needvalidation) {
        b_ezsignbulksend_needvalidation_copy = malloc(sizeof(int));
        if (b_ezsignbulksend_needvalidation_copy) *b_ezsignbulksend_needvalidation_copy = *b_ezsignbulksend_needvalidation;
    }
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *result = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create_internal (
        b_ezsigntemplatepackage_needvalidation_copy,
        b_ezsignbulksend_needvalidation_copy
        );
    if (!result) {
        free(b_ezsigntemplatepackage_needvalidation_copy);
        free(b_ezsignbulksend_needvalidation_copy);
    }
    return result;
}

void ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesigner_delete_object_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation);
        ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation = NULL;
    }
    if (ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) {
        free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation);
        ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation = NULL;
    }
    free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) == NULL) {
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

    // define the local variable for ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    int *b_ezsigntemplatepackage_needvalidation_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    int *b_ezsignbulksend_needvalidation_local_var = NULL;

    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_delete_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageNeedvalidation");
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
    b_ezsigntemplatepackage_needvalidation_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackage_needvalidation_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackage_needvalidation_local_var = b_ezsigntemplatepackage_needvalidation->valueint;

    // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_delete_object_v1_response_m_payloadJSON, "bEzsignbulksendNeedvalidation");
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
    b_ezsignbulksend_needvalidation_local_var = malloc(sizeof(int));
    if(!b_ezsignbulksend_needvalidation_local_var)
    {
        goto end;
    }
    *b_ezsignbulksend_needvalidation_local_var = b_ezsignbulksend_needvalidation->valueint;



    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create_internal (
        b_ezsigntemplatepackage_needvalidation_local_var,
        b_ezsignbulksend_needvalidation_local_var
        );

    if (!ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_local_var;
end:
    if (b_ezsigntemplatepackage_needvalidation_local_var) {
        free(b_ezsigntemplatepackage_needvalidation_local_var);
        b_ezsigntemplatepackage_needvalidation_local_var = NULL;
    }
    if (b_ezsignbulksend_needvalidation_local_var) {
        free(b_ezsignbulksend_needvalidation_local_var);
        b_ezsignbulksend_needvalidation_local_var = NULL;
    }
    return NULL;

}

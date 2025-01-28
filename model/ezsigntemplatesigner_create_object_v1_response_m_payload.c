#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_create_object_v1_response_m_payload.h"



static ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsigntemplatesigner_id,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
    ) {
    ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatesigner_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatesigner_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatesigner_id = a_pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_create_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatesigner_create_object_v1_response_m_payload_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;

    ezsigntemplatesigner_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatesigner_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatesigner_id,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
    ) {
    return ezsigntemplatesigner_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplatesigner_id,
        b_ezsigntemplatepackage_needvalidation,
        b_ezsignbulksend_needvalidation
        );
}

void ezsigntemplatesigner_create_object_v1_response_m_payload_free(ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatesigner_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatesigner_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesigner_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id) {
        list_ForEach(listEntry, ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id);
        ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id = NULL;
    }
    free(ezsigntemplatesigner_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id
    if (!ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatesigner_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatesignerID");
    if(a_pki_ezsigntemplatesigner_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatesigner_idListEntry;
    list_ForEach(a_pki_ezsigntemplatesigner_idListEntry, ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatesigner_id, "", *(double *)a_pki_ezsigntemplatesigner_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    if (!ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesigner_create_object_v1_response_m_payloadJSON){

    ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id
    list_t *a_pki_ezsigntemplatesigner_idList = NULL;

    // ezsigntemplatesigner_create_object_v1_response_m_payload->a_pki_ezsigntemplatesigner_id
    cJSON *a_pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatesignerID");
    if (cJSON_IsNull(a_pki_ezsigntemplatesigner_id)) {
        a_pki_ezsigntemplatesigner_id = NULL;
    }
    if (!a_pki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatesigner_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatesigner_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatesigner_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatesigner_id_local, a_pki_ezsigntemplatesigner_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatesigner_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatesigner_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatesigner_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatesigner_id_local_value = a_pki_ezsigntemplatesigner_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatesigner_idList , a_pki_ezsigntemplatesigner_id_local_value);
    }

    // ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_create_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageNeedvalidation");
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

    // ezsigntemplatesigner_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_create_object_v1_response_m_payloadJSON, "bEzsignbulksendNeedvalidation");
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


    ezsigntemplatesigner_create_object_v1_response_m_payload_local_var = ezsigntemplatesigner_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsigntemplatesigner_idList,
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsignbulksend_needvalidation->valueint
        );

    return ezsigntemplatesigner_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatesigner_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatesigner_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatesigner_idList);
        a_pki_ezsigntemplatesigner_idList = NULL;
    }
    return NULL;

}

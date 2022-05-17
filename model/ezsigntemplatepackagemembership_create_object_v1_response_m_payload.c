#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_create_object_v1_response_m_payload.h"



ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackagemembership_id,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
    ) {
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatepackagemembership_id = a_pki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;

    return ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackagemembership_create_object_v1_response_m_payload_free(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagemembership_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id) {
        list_ForEach(listEntry, ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id);
        ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id = NULL;
    }
    free(ezsigntemplatepackagemembership_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatepackagemembership_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatepackagemembershipID");
    if(a_pki_ezsigntemplatepackagemembership_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatepackagemembership_idListEntry;
    list_ForEach(a_pki_ezsigntemplatepackagemembership_idListEntry, ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatepackagemembership_id, "", *(double *)a_pki_ezsigntemplatepackagemembership_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    if (!ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagemembership_create_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id
    list_t *a_pki_ezsigntemplatepackagemembership_idList = NULL;

    // ezsigntemplatepackagemembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagemembership_id
    cJSON *a_pki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatepackagemembershipID");
    if (!a_pki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatepackagemembership_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatepackagemembership_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatepackagemembership_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatepackagemembership_id_local, a_pki_ezsigntemplatepackagemembership_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatepackagemembership_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatepackagemembership_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatepackagemembership_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatepackagemembership_id_local_value = a_pki_ezsigntemplatepackagemembership_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatepackagemembership_idList , a_pki_ezsigntemplatepackagemembership_id_local_value);
    }

    // ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_create_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageNeedvalidation");
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackagemembership_create_object_v1_response_m_payload->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_create_object_v1_response_m_payloadJSON, "bEzsignbulksendNeedvalidation");
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }


    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var = ezsigntemplatepackagemembership_create_object_v1_response_m_payload_create (
        a_pki_ezsigntemplatepackagemembership_idList,
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsignbulksend_needvalidation->valueint
        );

    return ezsigntemplatepackagemembership_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatepackagemembership_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatepackagemembership_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatepackagemembership_idList);
        a_pki_ezsigntemplatepackagemembership_idList = NULL;
    }
    return NULL;

}

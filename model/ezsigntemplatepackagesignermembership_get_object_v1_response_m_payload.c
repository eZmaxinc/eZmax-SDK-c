#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload.h"



ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
    ) {
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatepackagesignermembership_id = pki_ezsigntemplatepackagesignermembership_id;
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatepackagemembership_id = fki_ezsigntemplatepackagemembership_id;
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var->i_ezsigntemplatepackagesignermembership_copy = i_ezsigntemplatepackagesignermembership_copy;

    return ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_free(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesignermembership_id
    if (!ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesignermembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignermembershipID", ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesignermembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagemembership_id
    if (!ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagemembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagemembershipID", ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagemembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagesigner_id
    if (!ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagesignermembership_copy
    if(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagesignermembership_copy) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagesignermembershipCopy", ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagesignermembership_copy) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesignermembership_id
    cJSON *pki_ezsigntemplatepackagesignermembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatepackagesignermembershipID");
    if (!pki_ezsigntemplatepackagesignermembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesignermembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagemembership_id
    cJSON *fki_ezsigntemplatepackagemembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatepackagemembershipID");
    if (!fki_ezsigntemplatepackagemembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagemembership_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatepackagesigner_id
    cJSON *fki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatepackagesignerID");
    if (!fki_ezsigntemplatepackagesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload->i_ezsigntemplatepackagesignermembership_copy
    cJSON *i_ezsigntemplatepackagesignermembership_copy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payloadJSON, "iEzsigntemplatepackagesignermembershipCopy");
    if (i_ezsigntemplatepackagesignermembership_copy) { 
    if(!cJSON_IsNumber(i_ezsigntemplatepackagesignermembership_copy))
    {
    goto end; //Numeric
    }
    }


    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var = ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatepackagesignermembership_id->valuedouble,
        fki_ezsigntemplatepackagemembership_id->valuedouble,
        fki_ezsigntemplatepackagesigner_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        i_ezsigntemplatepackagesignermembership_copy ? i_ezsigntemplatepackagesignermembership_copy->valuedouble : 0
        );

    return ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

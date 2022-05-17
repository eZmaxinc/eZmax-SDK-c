#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_get_object_v1_response_m_payload.h"



ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksendsignermapping_get_object_v1_response_m_payload_t));
    if (!ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;

    return ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var;
}


void ezsignbulksendsignermapping_get_object_v1_response_m_payload_free(ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload) {
    if(NULL == ezsignbulksendsignermapping_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_get_object_v1_response_m_payload);
}

cJSON *ezsignbulksendsignermapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->pki_ezsignbulksendsignermapping_id
    if (!ezsignbulksendsignermapping_get_object_v1_response_m_payload->pki_ezsignbulksendsignermapping_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", ezsignbulksendsignermapping_get_object_v1_response_m_payload->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_user_id
    if(ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendsignermapping_get_object_v1_response_m_payloadJSON){

    ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var = NULL;

    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_get_object_v1_response_m_payloadJSON, "pkiEzsignbulksendsignermappingID");
    if (!pki_ezsignbulksendsignermapping_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksendsignermapping_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_get_object_v1_response_m_payloadJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_get_object_v1_response_m_payloadJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksendsignermapping_get_object_v1_response_m_payload->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_get_object_v1_response_m_payloadJSON, "sEzsignbulksendsignermappingDescription");
    if (!s_ezsignbulksendsignermapping_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendsignermapping_description))
    {
    goto end; //String
    }


    ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var = ezsignbulksendsignermapping_get_object_v1_response_m_payload_create (
        pki_ezsignbulksendsignermapping_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        strdup(s_ezsignbulksendsignermapping_description->valuestring)
        );

    return ezsignbulksendsignermapping_get_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

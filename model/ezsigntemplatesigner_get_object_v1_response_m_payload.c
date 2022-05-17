#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_get_object_v1_response_m_payload.h"



ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatesigner_description
    ) {
    ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatesigner_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatesigner_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_get_object_v1_response_m_payload_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatesigner_get_object_v1_response_m_payload_local_var->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;

    return ezsigntemplatesigner_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatesigner_get_object_v1_response_m_payload_free(ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatesigner_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description) {
        free(ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description);
        ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description = NULL;
    }
    free(ezsigntemplatesigner_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatesigner_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_get_object_v1_response_m_payload->pki_ezsigntemplatesigner_id
    if (!ezsigntemplatesigner_get_object_v1_response_m_payload->pki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignerID", ezsigntemplatesigner_get_object_v1_response_m_payload->pki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    if (!ezsigntemplatesigner_get_object_v1_response_m_payload->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatesigner_get_object_v1_response_m_payload->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description
    if (!ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignerDescription", ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v1_response_m_payloadJSON){

    ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatesigner_get_object_v1_response_m_payload->pki_ezsigntemplatesigner_id
    cJSON *pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatesignerID");
    if (!pki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_get_object_v1_response_m_payload->s_ezsigntemplatesigner_description
    cJSON *s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v1_response_m_payloadJSON, "sEzsigntemplatesignerDescription");
    if (!s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatesigner_get_object_v1_response_m_payload_local_var = ezsigntemplatesigner_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatesigner_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        strdup(s_ezsigntemplatesigner_description->valuestring)
        );

    return ezsigntemplatesigner_get_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

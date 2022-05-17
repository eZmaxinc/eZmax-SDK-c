#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_get_object_v1_response_m_payload.h"



ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;

    return ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackagesigner_get_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesigner_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description) {
        free(ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description);
        ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(ezsigntemplatepackagesigner_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesigner_id
    if (!ezsigntemplatepackagesigner_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesigner_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagesigner_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagesigner_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description
    if (!ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_get_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatepackagesigner_get_object_v1_response_m_payload->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatepackagesignerID");
    if (!pki_ezsigntemplatepackagesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_get_object_v1_response_m_payload->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_get_object_v1_response_m_payload->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_get_object_v1_response_m_payloadJSON, "sEzsigntemplatepackagesignerDescription");
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var = ezsigntemplatepackagesigner_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatepackagesigner_id->valuedouble,
        fki_ezsigntemplatepackage_id->valuedouble,
        strdup(s_ezsigntemplatepackagesigner_description->valuestring)
        );

    return ezsigntemplatepackagesigner_get_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

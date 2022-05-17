#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_get_object_v1_response_m_payload.h"



ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatedocument_name,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplatedocument_signaturetotal
    ) {
    ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatedocument_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    ezsigntemplatedocument_get_object_v1_response_m_payload_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatedocument_get_object_v1_response_m_payload_local_var->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    ezsigntemplatedocument_get_object_v1_response_m_payload_local_var->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    ezsigntemplatedocument_get_object_v1_response_m_payload_local_var->i_ezsigntemplatedocument_signaturetotal = i_ezsigntemplatedocument_signaturetotal;

    return ezsigntemplatedocument_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatedocument_get_object_v1_response_m_payload_free(ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatedocument_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name) {
        free(ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name);
        ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name = NULL;
    }
    free(ezsigntemplatedocument_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatedocument_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_get_object_v1_response_m_payload->pki_ezsigntemplatedocument_id
    if (!ezsigntemplatedocument_get_object_v1_response_m_payload->pki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentID", ezsigntemplatedocument_get_object_v1_response_m_payload->pki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    if (!ezsigntemplatedocument_get_object_v1_response_m_payload->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatedocument_get_object_v1_response_m_payload->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name
    if (!ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentName", ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_pagetotal
    if (!ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentPagetotal", ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_signaturetotal
    if (!ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentSignaturetotal", ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_object_v1_response_m_payloadJSON){

    ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatedocument_get_object_v1_response_m_payload->pki_ezsigntemplatedocument_id
    cJSON *pki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatedocumentID");
    if (!pki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_get_object_v1_response_m_payload->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_get_object_v1_response_m_payload->s_ezsigntemplatedocument_name
    cJSON *s_ezsigntemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_object_v1_response_m_payloadJSON, "sEzsigntemplatedocumentName");
    if (!s_ezsigntemplatedocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatedocument_name))
    {
    goto end; //String
    }

    // ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_pagetotal
    cJSON *i_ezsigntemplatedocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_object_v1_response_m_payloadJSON, "iEzsigntemplatedocumentPagetotal");
    if (!i_ezsigntemplatedocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_get_object_v1_response_m_payload->i_ezsigntemplatedocument_signaturetotal
    cJSON *i_ezsigntemplatedocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_object_v1_response_m_payloadJSON, "iEzsigntemplatedocumentSignaturetotal");
    if (!i_ezsigntemplatedocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocument_signaturetotal))
    {
    goto end; //Numeric
    }


    ezsigntemplatedocument_get_object_v1_response_m_payload_local_var = ezsigntemplatedocument_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        strdup(s_ezsigntemplatedocument_name->valuestring),
        i_ezsigntemplatedocument_pagetotal->valuedouble,
        i_ezsigntemplatedocument_signaturetotal->valuedouble
        );

    return ezsigntemplatedocument_get_object_v1_response_m_payload_local_var;
end:
    return NULL;

}

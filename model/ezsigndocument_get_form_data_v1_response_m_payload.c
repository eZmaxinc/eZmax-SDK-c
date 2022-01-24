#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_form_data_v1_response_m_payload.h"



ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    char *s_ezsigndocument_name,
    char *dt_modified_date,
    list_t *a_obj_form_data_signer
    ) {
    ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_form_data_v1_response_m_payload_t));
    if (!ezsigndocument_get_form_data_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_form_data_v1_response_m_payload_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    ezsigndocument_get_form_data_v1_response_m_payload_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsigndocument_get_form_data_v1_response_m_payload_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    ezsigndocument_get_form_data_v1_response_m_payload_local_var->dt_modified_date = dt_modified_date;
    ezsigndocument_get_form_data_v1_response_m_payload_local_var->a_obj_form_data_signer = a_obj_form_data_signer;

    return ezsigndocument_get_form_data_v1_response_m_payload_local_var;
}


void ezsigndocument_get_form_data_v1_response_m_payload_free(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_form_data_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name) {
        free(ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name);
        ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name = NULL;
    }
    if (ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date) {
        free(ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date);
        ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date = NULL;
    }
    if (ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer) {
        list_ForEach(listEntry, ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer) {
            custom_form_data_signer_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer);
        ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer = NULL;
    }
    free(ezsigndocument_get_form_data_v1_response_m_payload);
}

cJSON *ezsigndocument_get_form_data_v1_response_m_payload_convertToJSON(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_form_data_v1_response_m_payload->pki_ezsigndocument_id
    if (!ezsigndocument_get_form_data_v1_response_m_payload->pki_ezsigndocument_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", ezsigndocument_get_form_data_v1_response_m_payload->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_form_data_v1_response_m_payload->fki_ezsignfolder_id
    if (!ezsigndocument_get_form_data_v1_response_m_payload->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsigndocument_get_form_data_v1_response_m_payload->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name
    if (!ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date
    if (!ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtModifiedDate", ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer
    if (!ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer) {
        goto fail;
    }
    
    cJSON *a_obj_form_data_signer = cJSON_AddArrayToObject(item, "a_objFormDataSigner");
    if(a_obj_form_data_signer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_form_data_signerListEntry;
    if (ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer) {
    list_ForEach(a_obj_form_data_signerListEntry, ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer) {
    cJSON *itemLocal = custom_form_data_signer_response_convertToJSON(a_obj_form_data_signerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_form_data_signer, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_form_data_v1_response_m_payloadJSON){

    ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_local_var = NULL;

    // ezsigndocument_get_form_data_v1_response_m_payload->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_form_data_v1_response_m_payloadJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_form_data_v1_response_m_payload->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_form_data_v1_response_m_payloadJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_form_data_v1_response_m_payload->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_form_data_v1_response_m_payloadJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // ezsigndocument_get_form_data_v1_response_m_payload->dt_modified_date
    cJSON *dt_modified_date = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_form_data_v1_response_m_payloadJSON, "dtModifiedDate");
    if (!dt_modified_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_modified_date))
    {
    goto end; //String
    }

    // ezsigndocument_get_form_data_v1_response_m_payload->a_obj_form_data_signer
    cJSON *a_obj_form_data_signer = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_form_data_v1_response_m_payloadJSON, "a_objFormDataSigner");
    if (!a_obj_form_data_signer) {
        goto end;
    }

    list_t *a_obj_form_data_signerList;
    
    cJSON *a_obj_form_data_signer_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_form_data_signer)){
        goto end; //nonprimitive container
    }

    a_obj_form_data_signerList = list_createList();

    cJSON_ArrayForEach(a_obj_form_data_signer_local_nonprimitive,a_obj_form_data_signer )
    {
        if(!cJSON_IsObject(a_obj_form_data_signer_local_nonprimitive)){
            goto end;
        }
        custom_form_data_signer_response_t *a_obj_form_data_signerItem = custom_form_data_signer_response_parseFromJSON(a_obj_form_data_signer_local_nonprimitive);

        list_addElement(a_obj_form_data_signerList, a_obj_form_data_signerItem);
    }


    ezsigndocument_get_form_data_v1_response_m_payload_local_var = ezsigndocument_get_form_data_v1_response_m_payload_create (
        pki_ezsigndocument_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        strdup(s_ezsigndocument_name->valuestring),
        strdup(dt_modified_date->valuestring),
        a_obj_form_data_signerList
        );

    return ezsigndocument_get_form_data_v1_response_m_payload_local_var;
end:
    return NULL;

}

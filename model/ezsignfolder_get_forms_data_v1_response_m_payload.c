#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_forms_data_v1_response_m_payload.h"



ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_form_data_document
    ) {
    ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_forms_data_v1_response_m_payload_t));
    if (!ezsignfolder_get_forms_data_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_forms_data_v1_response_m_payload_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_get_forms_data_v1_response_m_payload_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_get_forms_data_v1_response_m_payload_local_var->a_obj_form_data_document = a_obj_form_data_document;

    return ezsignfolder_get_forms_data_v1_response_m_payload_local_var;
}


void ezsignfolder_get_forms_data_v1_response_m_payload_free(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_forms_data_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description) {
        free(ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description);
        ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document) {
        list_ForEach(listEntry, ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document) {
            custom_form_data_document_response_free(listEntry->data);
        }
        list_free(ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document);
        ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document = NULL;
    }
    free(ezsignfolder_get_forms_data_v1_response_m_payload);
}

cJSON *ezsignfolder_get_forms_data_v1_response_m_payload_convertToJSON(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_forms_data_v1_response_m_payload->pki_ezsignfolder_id
    if (!ezsignfolder_get_forms_data_v1_response_m_payload->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_get_forms_data_v1_response_m_payload->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description
    if (!ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document
    if (!ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document) {
        goto fail;
    }
    
    cJSON *a_obj_form_data_document = cJSON_AddArrayToObject(item, "a_objFormDataDocument");
    if(a_obj_form_data_document == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_form_data_documentListEntry;
    if (ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document) {
    list_ForEach(a_obj_form_data_documentListEntry, ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document) {
    cJSON *itemLocal = custom_form_data_document_response_convertToJSON(a_obj_form_data_documentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_form_data_document, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_forms_data_v1_response_m_payloadJSON){

    ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_local_var = NULL;

    // ezsignfolder_get_forms_data_v1_response_m_payload->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_forms_data_v1_response_m_payloadJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_get_forms_data_v1_response_m_payload->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_forms_data_v1_response_m_payloadJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_get_forms_data_v1_response_m_payload->a_obj_form_data_document
    cJSON *a_obj_form_data_document = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_forms_data_v1_response_m_payloadJSON, "a_objFormDataDocument");
    if (!a_obj_form_data_document) {
        goto end;
    }

    list_t *a_obj_form_data_documentList;
    
    cJSON *a_obj_form_data_document_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_form_data_document)){
        goto end; //nonprimitive container
    }

    a_obj_form_data_documentList = list_create();

    cJSON_ArrayForEach(a_obj_form_data_document_local_nonprimitive,a_obj_form_data_document )
    {
        if(!cJSON_IsObject(a_obj_form_data_document_local_nonprimitive)){
            goto end;
        }
        custom_form_data_document_response_t *a_obj_form_data_documentItem = custom_form_data_document_response_parseFromJSON(a_obj_form_data_document_local_nonprimitive);

        list_addElement(a_obj_form_data_documentList, a_obj_form_data_documentItem);
    }


    ezsignfolder_get_forms_data_v1_response_m_payload_local_var = ezsignfolder_get_forms_data_v1_response_m_payload_create (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        a_obj_form_data_documentList
        );

    return ezsignfolder_get_forms_data_v1_response_m_payload_local_var;
end:
    return NULL;

}

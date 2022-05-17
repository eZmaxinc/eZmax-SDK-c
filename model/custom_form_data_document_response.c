#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_document_response.h"



custom_form_data_document_response_t *custom_form_data_document_response_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    char *s_ezsigndocument_name,
    char *dt_modified_date,
    list_t *a_obj_form_data_signer
    ) {
    custom_form_data_document_response_t *custom_form_data_document_response_local_var = malloc(sizeof(custom_form_data_document_response_t));
    if (!custom_form_data_document_response_local_var) {
        return NULL;
    }
    custom_form_data_document_response_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    custom_form_data_document_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_form_data_document_response_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    custom_form_data_document_response_local_var->dt_modified_date = dt_modified_date;
    custom_form_data_document_response_local_var->a_obj_form_data_signer = a_obj_form_data_signer;

    return custom_form_data_document_response_local_var;
}


void custom_form_data_document_response_free(custom_form_data_document_response_t *custom_form_data_document_response) {
    if(NULL == custom_form_data_document_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_form_data_document_response->s_ezsigndocument_name) {
        free(custom_form_data_document_response->s_ezsigndocument_name);
        custom_form_data_document_response->s_ezsigndocument_name = NULL;
    }
    if (custom_form_data_document_response->dt_modified_date) {
        free(custom_form_data_document_response->dt_modified_date);
        custom_form_data_document_response->dt_modified_date = NULL;
    }
    if (custom_form_data_document_response->a_obj_form_data_signer) {
        list_ForEach(listEntry, custom_form_data_document_response->a_obj_form_data_signer) {
            custom_form_data_signer_response_free(listEntry->data);
        }
        list_freeList(custom_form_data_document_response->a_obj_form_data_signer);
        custom_form_data_document_response->a_obj_form_data_signer = NULL;
    }
    free(custom_form_data_document_response);
}

cJSON *custom_form_data_document_response_convertToJSON(custom_form_data_document_response_t *custom_form_data_document_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_form_data_document_response->pki_ezsigndocument_id
    if (!custom_form_data_document_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", custom_form_data_document_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_form_data_document_response->fki_ezsignfolder_id
    if (!custom_form_data_document_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", custom_form_data_document_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_form_data_document_response->s_ezsigndocument_name
    if (!custom_form_data_document_response->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", custom_form_data_document_response->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // custom_form_data_document_response->dt_modified_date
    if (!custom_form_data_document_response->dt_modified_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtModifiedDate", custom_form_data_document_response->dt_modified_date) == NULL) {
    goto fail; //String
    }


    // custom_form_data_document_response->a_obj_form_data_signer
    if (!custom_form_data_document_response->a_obj_form_data_signer) {
        goto fail;
    }
    cJSON *a_obj_form_data_signer = cJSON_AddArrayToObject(item, "a_objFormDataSigner");
    if(a_obj_form_data_signer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_form_data_signerListEntry;
    if (custom_form_data_document_response->a_obj_form_data_signer) {
    list_ForEach(a_obj_form_data_signerListEntry, custom_form_data_document_response->a_obj_form_data_signer) {
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

custom_form_data_document_response_t *custom_form_data_document_response_parseFromJSON(cJSON *custom_form_data_document_responseJSON){

    custom_form_data_document_response_t *custom_form_data_document_response_local_var = NULL;

    // define the local list for custom_form_data_document_response->a_obj_form_data_signer
    list_t *a_obj_form_data_signerList = NULL;

    // custom_form_data_document_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_form_data_document_responseJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // custom_form_data_document_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_form_data_document_responseJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_form_data_document_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(custom_form_data_document_responseJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // custom_form_data_document_response->dt_modified_date
    cJSON *dt_modified_date = cJSON_GetObjectItemCaseSensitive(custom_form_data_document_responseJSON, "dtModifiedDate");
    if (!dt_modified_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_modified_date))
    {
    goto end; //String
    }

    // custom_form_data_document_response->a_obj_form_data_signer
    cJSON *a_obj_form_data_signer = cJSON_GetObjectItemCaseSensitive(custom_form_data_document_responseJSON, "a_objFormDataSigner");
    if (!a_obj_form_data_signer) {
        goto end;
    }

    
    cJSON *a_obj_form_data_signer_local_nonprimitive = NULL;
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


    custom_form_data_document_response_local_var = custom_form_data_document_response_create (
        pki_ezsigndocument_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        strdup(s_ezsigndocument_name->valuestring),
        strdup(dt_modified_date->valuestring),
        a_obj_form_data_signerList
        );

    return custom_form_data_document_response_local_var;
end:
    if (a_obj_form_data_signerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_form_data_signerList) {
            custom_form_data_signer_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_form_data_signerList);
        a_obj_form_data_signerList = NULL;
    }
    return NULL;

}

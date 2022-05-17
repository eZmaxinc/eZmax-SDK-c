#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_batch_download_v1_request.h"


char* a_e_document_typeezsignfolder_batch_download_v1_request_ToString(ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_e a_e_document_type) {
	char *a_e_document_typeArray[] =  { "NULL", "Signed", "Proof", "Proofdocument" };
	return a_e_document_typeArray[a_e_document_type - 1];
}

ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_e a_e_document_typeezsignfolder_batch_download_v1_request_FromString(char* a_e_document_type) {
    int stringToReturn = 0;
    char *a_e_document_typeArray[] =  { "NULL", "Signed", "Proof", "Proofdocument" };
    size_t sizeofArray = sizeof(a_e_document_typeArray) / sizeof(a_e_document_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(a_e_document_type, a_e_document_typeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request_create(
    list_t *a_pki_ezsigndocument_id,
    list_t *a_e_document_type
    ) {
    ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request_local_var = malloc(sizeof(ezsignfolder_batch_download_v1_request_t));
    if (!ezsignfolder_batch_download_v1_request_local_var) {
        return NULL;
    }
    ezsignfolder_batch_download_v1_request_local_var->a_pki_ezsigndocument_id = a_pki_ezsigndocument_id;
    ezsignfolder_batch_download_v1_request_local_var->a_e_document_type = a_e_document_type;

    return ezsignfolder_batch_download_v1_request_local_var;
}


void ezsignfolder_batch_download_v1_request_free(ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request) {
    if(NULL == ezsignfolder_batch_download_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id) {
        list_ForEach(listEntry, ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id);
        ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id = NULL;
    }
    if (ezsignfolder_batch_download_v1_request->a_e_document_type) {
        list_ForEach(listEntry, ezsignfolder_batch_download_v1_request->a_e_document_type) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_batch_download_v1_request->a_e_document_type);
        ezsignfolder_batch_download_v1_request->a_e_document_type = NULL;
    }
    free(ezsignfolder_batch_download_v1_request);
}

cJSON *ezsignfolder_batch_download_v1_request_convertToJSON(ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id
    if (!ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigndocument_id = cJSON_AddArrayToObject(item, "a_pkiEzsigndocumentID");
    if(a_pki_ezsigndocument_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigndocument_idListEntry;
    list_ForEach(a_pki_ezsigndocument_idListEntry, ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigndocument_id, "", *(double *)a_pki_ezsigndocument_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfolder_batch_download_v1_request->a_e_document_type
    if (ezmax_api_definition__full_ezsignfolder_batch_download_v1_request_AEDOCUMENTTYPE_NULL == ezsignfolder_batch_download_v1_request->a_e_document_type) {
        goto fail;
    }
    cJSON *a_e_document_type = cJSON_AddArrayToObject(item, "a_eDocumentType");
    if(a_e_document_type == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_e_document_typeListEntry;
    list_ForEach(a_e_document_typeListEntry, ezsignfolder_batch_download_v1_request->a_e_document_type) {
    if(cJSON_AddStringToObject(a_e_document_type, "", (char*)a_e_document_typeListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request_parseFromJSON(cJSON *ezsignfolder_batch_download_v1_requestJSON){

    ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request_local_var = NULL;

    // define the local list for ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id
    list_t *a_pki_ezsigndocument_idList = NULL;

    // define the local list for ezsignfolder_batch_download_v1_request->a_e_document_type
    list_t *a_e_document_typeList = NULL;

    // ezsignfolder_batch_download_v1_request->a_pki_ezsigndocument_id
    cJSON *a_pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_batch_download_v1_requestJSON, "a_pkiEzsigndocumentID");
    if (!a_pki_ezsigndocument_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigndocument_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigndocument_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigndocument_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigndocument_id_local, a_pki_ezsigndocument_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigndocument_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigndocument_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigndocument_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigndocument_id_local_value = a_pki_ezsigndocument_id_local->valuedouble;
        list_addElement(a_pki_ezsigndocument_idList , a_pki_ezsigndocument_id_local_value);
    }

    // ezsignfolder_batch_download_v1_request->a_e_document_type
    cJSON *a_e_document_type = cJSON_GetObjectItemCaseSensitive(ezsignfolder_batch_download_v1_requestJSON, "a_eDocumentType");
    if (!a_e_document_type) {
        goto end;
    }

    
    cJSON *a_e_document_type_local = NULL;
    if(!cJSON_IsArray(a_e_document_type)) {
        goto end;//primitive container
    }
    a_e_document_typeList = list_createList();

    cJSON_ArrayForEach(a_e_document_type_local, a_e_document_type)
    {
        if(!cJSON_IsString(a_e_document_type_local))
        {
            goto end;
        }
        list_addElement(a_e_document_typeList , strdup(a_e_document_type_local->valuestring));
    }


    ezsignfolder_batch_download_v1_request_local_var = ezsignfolder_batch_download_v1_request_create (
        a_pki_ezsigndocument_idList,
        a_e_document_typeList
        );

    return ezsignfolder_batch_download_v1_request_local_var;
end:
    if (a_pki_ezsigndocument_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigndocument_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigndocument_idList);
        a_pki_ezsigndocument_idList = NULL;
    }
    if (a_e_document_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_e_document_typeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_e_document_typeList);
        a_e_document_typeList = NULL;
    }
    return NULL;

}

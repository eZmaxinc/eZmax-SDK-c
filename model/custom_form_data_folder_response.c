#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_folder_response.h"



custom_form_data_folder_response_t *custom_form_data_folder_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_form_data_document
    ) {
    custom_form_data_folder_response_t *custom_form_data_folder_response_local_var = malloc(sizeof(custom_form_data_folder_response_t));
    if (!custom_form_data_folder_response_local_var) {
        return NULL;
    }
    custom_form_data_folder_response_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    custom_form_data_folder_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_form_data_folder_response_local_var->a_obj_form_data_document = a_obj_form_data_document;

    return custom_form_data_folder_response_local_var;
}


void custom_form_data_folder_response_free(custom_form_data_folder_response_t *custom_form_data_folder_response) {
    if(NULL == custom_form_data_folder_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_form_data_folder_response->s_ezsignfolder_description) {
        free(custom_form_data_folder_response->s_ezsignfolder_description);
        custom_form_data_folder_response->s_ezsignfolder_description = NULL;
    }
    if (custom_form_data_folder_response->a_obj_form_data_document) {
        list_ForEach(listEntry, custom_form_data_folder_response->a_obj_form_data_document) {
            custom_form_data_document_response_free(listEntry->data);
        }
        list_free(custom_form_data_folder_response->a_obj_form_data_document);
        custom_form_data_folder_response->a_obj_form_data_document = NULL;
    }
    free(custom_form_data_folder_response);
}

cJSON *custom_form_data_folder_response_convertToJSON(custom_form_data_folder_response_t *custom_form_data_folder_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_form_data_folder_response->pki_ezsignfolder_id
    if (!custom_form_data_folder_response->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", custom_form_data_folder_response->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_form_data_folder_response->s_ezsignfolder_description
    if (!custom_form_data_folder_response->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_form_data_folder_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_form_data_folder_response->a_obj_form_data_document
    if (!custom_form_data_folder_response->a_obj_form_data_document) {
        goto fail;
    }
    
    cJSON *a_obj_form_data_document = cJSON_AddArrayToObject(item, "a_objFormDataDocument");
    if(a_obj_form_data_document == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_form_data_documentListEntry;
    if (custom_form_data_folder_response->a_obj_form_data_document) {
    list_ForEach(a_obj_form_data_documentListEntry, custom_form_data_folder_response->a_obj_form_data_document) {
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

custom_form_data_folder_response_t *custom_form_data_folder_response_parseFromJSON(cJSON *custom_form_data_folder_responseJSON){

    custom_form_data_folder_response_t *custom_form_data_folder_response_local_var = NULL;

    // custom_form_data_folder_response->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_form_data_folder_responseJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_form_data_folder_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_form_data_folder_responseJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_form_data_folder_response->a_obj_form_data_document
    cJSON *a_obj_form_data_document = cJSON_GetObjectItemCaseSensitive(custom_form_data_folder_responseJSON, "a_objFormDataDocument");
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


    custom_form_data_folder_response_local_var = custom_form_data_folder_response_create (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        a_obj_form_data_documentList
        );

    return custom_form_data_folder_response_local_var;
end:
    return NULL;

}

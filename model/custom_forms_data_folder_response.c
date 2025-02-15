#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_forms_data_folder_response.h"



static custom_forms_data_folder_response_t *custom_forms_data_folder_response_create_internal(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_form_data_document
    ) {
    custom_forms_data_folder_response_t *custom_forms_data_folder_response_local_var = malloc(sizeof(custom_forms_data_folder_response_t));
    if (!custom_forms_data_folder_response_local_var) {
        return NULL;
    }
    custom_forms_data_folder_response_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    custom_forms_data_folder_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_forms_data_folder_response_local_var->a_obj_form_data_document = a_obj_form_data_document;

    custom_forms_data_folder_response_local_var->_library_owned = 1;
    return custom_forms_data_folder_response_local_var;
}

__attribute__((deprecated)) custom_forms_data_folder_response_t *custom_forms_data_folder_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_form_data_document
    ) {
    return custom_forms_data_folder_response_create_internal (
        pki_ezsignfolder_id,
        s_ezsignfolder_description,
        a_obj_form_data_document
        );
}

void custom_forms_data_folder_response_free(custom_forms_data_folder_response_t *custom_forms_data_folder_response) {
    if(NULL == custom_forms_data_folder_response){
        return ;
    }
    if(custom_forms_data_folder_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_forms_data_folder_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_forms_data_folder_response->s_ezsignfolder_description) {
        free(custom_forms_data_folder_response->s_ezsignfolder_description);
        custom_forms_data_folder_response->s_ezsignfolder_description = NULL;
    }
    if (custom_forms_data_folder_response->a_obj_form_data_document) {
        list_ForEach(listEntry, custom_forms_data_folder_response->a_obj_form_data_document) {
            custom_form_data_document_response_free(listEntry->data);
        }
        list_freeList(custom_forms_data_folder_response->a_obj_form_data_document);
        custom_forms_data_folder_response->a_obj_form_data_document = NULL;
    }
    free(custom_forms_data_folder_response);
}

cJSON *custom_forms_data_folder_response_convertToJSON(custom_forms_data_folder_response_t *custom_forms_data_folder_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_forms_data_folder_response->pki_ezsignfolder_id
    if (!custom_forms_data_folder_response->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", custom_forms_data_folder_response->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_forms_data_folder_response->s_ezsignfolder_description
    if (!custom_forms_data_folder_response->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_forms_data_folder_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_forms_data_folder_response->a_obj_form_data_document
    if (!custom_forms_data_folder_response->a_obj_form_data_document) {
        goto fail;
    }
    cJSON *a_obj_form_data_document = cJSON_AddArrayToObject(item, "a_objFormDataDocument");
    if(a_obj_form_data_document == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_form_data_documentListEntry;
    if (custom_forms_data_folder_response->a_obj_form_data_document) {
    list_ForEach(a_obj_form_data_documentListEntry, custom_forms_data_folder_response->a_obj_form_data_document) {
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

custom_forms_data_folder_response_t *custom_forms_data_folder_response_parseFromJSON(cJSON *custom_forms_data_folder_responseJSON){

    custom_forms_data_folder_response_t *custom_forms_data_folder_response_local_var = NULL;

    // define the local list for custom_forms_data_folder_response->a_obj_form_data_document
    list_t *a_obj_form_data_documentList = NULL;

    // custom_forms_data_folder_response->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_forms_data_folder_responseJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_forms_data_folder_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_forms_data_folder_responseJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_forms_data_folder_response->a_obj_form_data_document
    cJSON *a_obj_form_data_document = cJSON_GetObjectItemCaseSensitive(custom_forms_data_folder_responseJSON, "a_objFormDataDocument");
    if (cJSON_IsNull(a_obj_form_data_document)) {
        a_obj_form_data_document = NULL;
    }
    if (!a_obj_form_data_document) {
        goto end;
    }

    
    cJSON *a_obj_form_data_document_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_form_data_document)){
        goto end; //nonprimitive container
    }

    a_obj_form_data_documentList = list_createList();

    cJSON_ArrayForEach(a_obj_form_data_document_local_nonprimitive,a_obj_form_data_document )
    {
        if(!cJSON_IsObject(a_obj_form_data_document_local_nonprimitive)){
            goto end;
        }
        custom_form_data_document_response_t *a_obj_form_data_documentItem = custom_form_data_document_response_parseFromJSON(a_obj_form_data_document_local_nonprimitive);

        list_addElement(a_obj_form_data_documentList, a_obj_form_data_documentItem);
    }


    custom_forms_data_folder_response_local_var = custom_forms_data_folder_response_create_internal (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        a_obj_form_data_documentList
        );

    return custom_forms_data_folder_response_local_var;
end:
    if (a_obj_form_data_documentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_form_data_documentList) {
            custom_form_data_document_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_form_data_documentList);
        a_obj_form_data_documentList = NULL;
    }
    return NULL;

}

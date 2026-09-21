#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_document_type_v1_request.h"



static attachment_document_type_v1_request_t *attachment_document_type_v1_request_create_internal(
    int *fki_documenttypechecklist_id
    ) {
    attachment_document_type_v1_request_t *attachment_document_type_v1_request_local_var = malloc(sizeof(attachment_document_type_v1_request_t));
    if (!attachment_document_type_v1_request_local_var) {
        return NULL;
    }
    memset(attachment_document_type_v1_request_local_var, 0, sizeof(attachment_document_type_v1_request_t));
    attachment_document_type_v1_request_local_var->_library_owned = 1;
    attachment_document_type_v1_request_local_var->fki_documenttypechecklist_id = fki_documenttypechecklist_id;
    return attachment_document_type_v1_request_local_var;
}

__attribute__((deprecated)) attachment_document_type_v1_request_t *attachment_document_type_v1_request_create(
    int *fki_documenttypechecklist_id
    ) {
    int *fki_documenttypechecklist_id_copy = NULL;
    if (fki_documenttypechecklist_id) {
        fki_documenttypechecklist_id_copy = malloc(sizeof(int));
        if (fki_documenttypechecklist_id_copy) *fki_documenttypechecklist_id_copy = *fki_documenttypechecklist_id;
    }
    attachment_document_type_v1_request_t *result = attachment_document_type_v1_request_create_internal (
        fki_documenttypechecklist_id_copy
        );
    if (!result) {
        free(fki_documenttypechecklist_id_copy);
    }
    return result;
}

void attachment_document_type_v1_request_free(attachment_document_type_v1_request_t *attachment_document_type_v1_request) {
    if(NULL == attachment_document_type_v1_request){
        return ;
    }
    if(attachment_document_type_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_document_type_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_document_type_v1_request->fki_documenttypechecklist_id) {
        free(attachment_document_type_v1_request->fki_documenttypechecklist_id);
        attachment_document_type_v1_request->fki_documenttypechecklist_id = NULL;
    }
    free(attachment_document_type_v1_request);
}

cJSON *attachment_document_type_v1_request_convertToJSON(attachment_document_type_v1_request_t *attachment_document_type_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // attachment_document_type_v1_request->fki_documenttypechecklist_id
    if (!attachment_document_type_v1_request->fki_documenttypechecklist_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDocumenttypechecklistID", *attachment_document_type_v1_request->fki_documenttypechecklist_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachment_document_type_v1_request_t *attachment_document_type_v1_request_parseFromJSON(cJSON *attachment_document_type_v1_requestJSON){

    attachment_document_type_v1_request_t *attachment_document_type_v1_request_local_var = NULL;

    // define the local variable for attachment_document_type_v1_request->fki_documenttypechecklist_id
    int *fki_documenttypechecklist_id_local_var = NULL;

    // attachment_document_type_v1_request->fki_documenttypechecklist_id
    cJSON *fki_documenttypechecklist_id = cJSON_GetObjectItemCaseSensitive(attachment_document_type_v1_requestJSON, "fkiDocumenttypechecklistID");
    if (cJSON_IsNull(fki_documenttypechecklist_id)) {
        fki_documenttypechecklist_id = NULL;
    }
    if (!fki_documenttypechecklist_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_documenttypechecklist_id))
    {
    goto end; //Numeric
    }
    fki_documenttypechecklist_id_local_var = malloc(sizeof(int));
    if(!fki_documenttypechecklist_id_local_var)
    {
        goto end;
    }
    *fki_documenttypechecklist_id_local_var = fki_documenttypechecklist_id->valuedouble;



    attachment_document_type_v1_request_local_var = attachment_document_type_v1_request_create_internal (
        fki_documenttypechecklist_id_local_var
        );

    if (!attachment_document_type_v1_request_local_var) {
        goto end;
    }

    return attachment_document_type_v1_request_local_var;
end:
    if (fki_documenttypechecklist_id_local_var) {
        free(fki_documenttypechecklist_id_local_var);
        fki_documenttypechecklist_id_local_var = NULL;
    }
    return NULL;

}

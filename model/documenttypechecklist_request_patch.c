#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_request_patch.h"



static documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_create_internal(
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment
    ) {
    documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_local_var = malloc(sizeof(documenttypechecklist_request_patch_t));
    if (!documenttypechecklist_request_patch_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_request_patch_local_var, 0, sizeof(documenttypechecklist_request_patch_t));
    documenttypechecklist_request_patch_local_var->_library_owned = 1;
    documenttypechecklist_request_patch_local_var->e_documenttypechecklist_status = e_documenttypechecklist_status;
    documenttypechecklist_request_patch_local_var->t_documenttypechecklist_comment = t_documenttypechecklist_comment;
    return documenttypechecklist_request_patch_local_var;
}

__attribute__((deprecated)) documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_create(
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment
    ) {
    documenttypechecklist_request_patch_t *result = documenttypechecklist_request_patch_create_internal (
        e_documenttypechecklist_status,
        t_documenttypechecklist_comment
        );
    if (!result) {
    }
    return result;
}

void documenttypechecklist_request_patch_free(documenttypechecklist_request_patch_t *documenttypechecklist_request_patch) {
    if(NULL == documenttypechecklist_request_patch){
        return ;
    }
    if(documenttypechecklist_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_request_patch->t_documenttypechecklist_comment) {
        free(documenttypechecklist_request_patch->t_documenttypechecklist_comment);
        documenttypechecklist_request_patch->t_documenttypechecklist_comment = NULL;
    }
    free(documenttypechecklist_request_patch);
}

cJSON *documenttypechecklist_request_patch_convertToJSON(documenttypechecklist_request_patch_t *documenttypechecklist_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_request_patch->e_documenttypechecklist_status
    if(documenttypechecklist_request_patch->e_documenttypechecklist_status != ezmax_api_definition__full_field_e_documenttypechecklist_status__NULL) {
    cJSON *e_documenttypechecklist_status_local_JSON = field_e_documenttypechecklist_status_convertToJSON(documenttypechecklist_request_patch->e_documenttypechecklist_status);
    if(e_documenttypechecklist_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypechecklistStatus", e_documenttypechecklist_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttypechecklist_request_patch->t_documenttypechecklist_comment
    if(documenttypechecklist_request_patch->t_documenttypechecklist_comment) {
    if(cJSON_AddStringToObject(item, "tDocumenttypechecklistComment", documenttypechecklist_request_patch->t_documenttypechecklist_comment) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_parseFromJSON(cJSON *documenttypechecklist_request_patchJSON){

    documenttypechecklist_request_patch_t *documenttypechecklist_request_patch_local_var = NULL;

    // define the local variable for documenttypechecklist_request_patch->e_documenttypechecklist_status
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status_local_nonprim = 0;

    char *t_documenttypechecklist_comment_local_str = NULL;

    // documenttypechecklist_request_patch->e_documenttypechecklist_status
    cJSON *e_documenttypechecklist_status = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_request_patchJSON, "eDocumenttypechecklistStatus");
    if (cJSON_IsNull(e_documenttypechecklist_status)) {
        e_documenttypechecklist_status = NULL;
    }
    if (e_documenttypechecklist_status) { 
    e_documenttypechecklist_status_local_nonprim = field_e_documenttypechecklist_status_parseFromJSON(e_documenttypechecklist_status); //custom
    }

    // documenttypechecklist_request_patch->t_documenttypechecklist_comment
    cJSON *t_documenttypechecklist_comment = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_request_patchJSON, "tDocumenttypechecklistComment");
    if (cJSON_IsNull(t_documenttypechecklist_comment)) {
        t_documenttypechecklist_comment = NULL;
    }
    if (t_documenttypechecklist_comment) { 
    if(!cJSON_IsString(t_documenttypechecklist_comment) && !cJSON_IsNull(t_documenttypechecklist_comment))
    {
    goto end; //String
    }
    }


    if (t_documenttypechecklist_comment && !cJSON_IsNull(t_documenttypechecklist_comment)) t_documenttypechecklist_comment_local_str = strdup(t_documenttypechecklist_comment->valuestring);

    documenttypechecklist_request_patch_local_var = documenttypechecklist_request_patch_create_internal (
        e_documenttypechecklist_status ? e_documenttypechecklist_status_local_nonprim : 0,
        t_documenttypechecklist_comment_local_str
        );

    if (!documenttypechecklist_request_patch_local_var) {
        goto end;
    }

    return documenttypechecklist_request_patch_local_var;
end:
    if (e_documenttypechecklist_status_local_nonprim) {
        e_documenttypechecklist_status_local_nonprim = 0;
    }
    if (t_documenttypechecklist_comment_local_str) {
        free(t_documenttypechecklist_comment_local_str);
        t_documenttypechecklist_comment_local_str = NULL;
    }
    return NULL;

}

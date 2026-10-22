#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_list_element.h"



static documenttypechecklist_list_element_t *documenttypechecklist_list_element_create_internal(
    int *pki_documenttypechecklist_id,
    int *fki_documenttype_id,
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment
    ) {
    documenttypechecklist_list_element_t *documenttypechecklist_list_element_local_var = malloc(sizeof(documenttypechecklist_list_element_t));
    if (!documenttypechecklist_list_element_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_list_element_local_var, 0, sizeof(documenttypechecklist_list_element_t));
    documenttypechecklist_list_element_local_var->_library_owned = 1;
    documenttypechecklist_list_element_local_var->pki_documenttypechecklist_id = pki_documenttypechecklist_id;
    documenttypechecklist_list_element_local_var->fki_documenttype_id = fki_documenttype_id;
    documenttypechecklist_list_element_local_var->e_documenttypechecklist_status = e_documenttypechecklist_status;
    documenttypechecklist_list_element_local_var->t_documenttypechecklist_comment = t_documenttypechecklist_comment;
    return documenttypechecklist_list_element_local_var;
}

__attribute__((deprecated)) documenttypechecklist_list_element_t *documenttypechecklist_list_element_create(
    int *pki_documenttypechecklist_id,
    int *fki_documenttype_id,
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment
    ) {
    int *pki_documenttypechecklist_id_copy = NULL;
    if (pki_documenttypechecklist_id) {
        pki_documenttypechecklist_id_copy = malloc(sizeof(int));
        if (pki_documenttypechecklist_id_copy) *pki_documenttypechecklist_id_copy = *pki_documenttypechecklist_id;
    }
    int *fki_documenttype_id_copy = NULL;
    if (fki_documenttype_id) {
        fki_documenttype_id_copy = malloc(sizeof(int));
        if (fki_documenttype_id_copy) *fki_documenttype_id_copy = *fki_documenttype_id;
    }
    documenttypechecklist_list_element_t *result = documenttypechecklist_list_element_create_internal (
        pki_documenttypechecklist_id_copy,
        fki_documenttype_id_copy,
        e_documenttypechecklist_status,
        t_documenttypechecklist_comment
        );
    if (!result) {
        free(pki_documenttypechecklist_id_copy);
        free(fki_documenttype_id_copy);
    }
    return result;
}

void documenttypechecklist_list_element_free(documenttypechecklist_list_element_t *documenttypechecklist_list_element) {
    if(NULL == documenttypechecklist_list_element){
        return ;
    }
    if(documenttypechecklist_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_list_element->pki_documenttypechecklist_id) {
        free(documenttypechecklist_list_element->pki_documenttypechecklist_id);
        documenttypechecklist_list_element->pki_documenttypechecklist_id = NULL;
    }
    if (documenttypechecklist_list_element->fki_documenttype_id) {
        free(documenttypechecklist_list_element->fki_documenttype_id);
        documenttypechecklist_list_element->fki_documenttype_id = NULL;
    }
    if (documenttypechecklist_list_element->t_documenttypechecklist_comment) {
        free(documenttypechecklist_list_element->t_documenttypechecklist_comment);
        documenttypechecklist_list_element->t_documenttypechecklist_comment = NULL;
    }
    free(documenttypechecklist_list_element);
}

cJSON *documenttypechecklist_list_element_convertToJSON(documenttypechecklist_list_element_t *documenttypechecklist_list_element) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_list_element->pki_documenttypechecklist_id
    if (!documenttypechecklist_list_element->pki_documenttypechecklist_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDocumenttypechecklistID", *documenttypechecklist_list_element->pki_documenttypechecklist_id) == NULL) {
    goto fail; //Numeric
    }


    // documenttypechecklist_list_element->fki_documenttype_id
    if (!documenttypechecklist_list_element->fki_documenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDocumenttypeID", *documenttypechecklist_list_element->fki_documenttype_id) == NULL) {
    goto fail; //Numeric
    }


    // documenttypechecklist_list_element->e_documenttypechecklist_status
    if (ezmax_api_definition__full_field_e_documenttypechecklist_status__NULL == documenttypechecklist_list_element->e_documenttypechecklist_status) {
        goto fail;
    }
    cJSON *e_documenttypechecklist_status_local_JSON = field_e_documenttypechecklist_status_convertToJSON(documenttypechecklist_list_element->e_documenttypechecklist_status);
    if(e_documenttypechecklist_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypechecklistStatus", e_documenttypechecklist_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // documenttypechecklist_list_element->t_documenttypechecklist_comment
    if (!documenttypechecklist_list_element->t_documenttypechecklist_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tDocumenttypechecklistComment", documenttypechecklist_list_element->t_documenttypechecklist_comment) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttypechecklist_list_element_t *documenttypechecklist_list_element_parseFromJSON(cJSON *documenttypechecklist_list_elementJSON){

    documenttypechecklist_list_element_t *documenttypechecklist_list_element_local_var = NULL;

    // define the local variable for documenttypechecklist_list_element->pki_documenttypechecklist_id
    int *pki_documenttypechecklist_id_local_var = NULL;

    // define the local variable for documenttypechecklist_list_element->fki_documenttype_id
    int *fki_documenttype_id_local_var = NULL;

    // define the local variable for documenttypechecklist_list_element->e_documenttypechecklist_status
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status_local_nonprim = 0;

    char *t_documenttypechecklist_comment_local_str = NULL;

    // documenttypechecklist_list_element->pki_documenttypechecklist_id
    cJSON *pki_documenttypechecklist_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_list_elementJSON, "pkiDocumenttypechecklistID");
    if (cJSON_IsNull(pki_documenttypechecklist_id)) {
        pki_documenttypechecklist_id = NULL;
    }
    if (!pki_documenttypechecklist_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_documenttypechecklist_id))
    {
    goto end; //Numeric
    }
    pki_documenttypechecklist_id_local_var = malloc(sizeof(int));
    if(!pki_documenttypechecklist_id_local_var)
    {
        goto end;
    }
    *pki_documenttypechecklist_id_local_var = pki_documenttypechecklist_id->valuedouble;

    // documenttypechecklist_list_element->fki_documenttype_id
    cJSON *fki_documenttype_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_list_elementJSON, "fkiDocumenttypeID");
    if (cJSON_IsNull(fki_documenttype_id)) {
        fki_documenttype_id = NULL;
    }
    if (!fki_documenttype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_documenttype_id))
    {
    goto end; //Numeric
    }
    fki_documenttype_id_local_var = malloc(sizeof(int));
    if(!fki_documenttype_id_local_var)
    {
        goto end;
    }
    *fki_documenttype_id_local_var = fki_documenttype_id->valuedouble;

    // documenttypechecklist_list_element->e_documenttypechecklist_status
    cJSON *e_documenttypechecklist_status = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_list_elementJSON, "eDocumenttypechecklistStatus");
    if (cJSON_IsNull(e_documenttypechecklist_status)) {
        e_documenttypechecklist_status = NULL;
    }
    if (!e_documenttypechecklist_status) {
        goto end;
    }

    
    e_documenttypechecklist_status_local_nonprim = field_e_documenttypechecklist_status_parseFromJSON(e_documenttypechecklist_status); //custom

    // documenttypechecklist_list_element->t_documenttypechecklist_comment
    cJSON *t_documenttypechecklist_comment = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_list_elementJSON, "tDocumenttypechecklistComment");
    if (cJSON_IsNull(t_documenttypechecklist_comment)) {
        t_documenttypechecklist_comment = NULL;
    }
    if (!t_documenttypechecklist_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_documenttypechecklist_comment))
    {
    goto end; //String
    }


    if (t_documenttypechecklist_comment && !cJSON_IsNull(t_documenttypechecklist_comment)) t_documenttypechecklist_comment_local_str = strdup(t_documenttypechecklist_comment->valuestring);

    documenttypechecklist_list_element_local_var = documenttypechecklist_list_element_create_internal (
        pki_documenttypechecklist_id_local_var,
        fki_documenttype_id_local_var,
        e_documenttypechecklist_status_local_nonprim,
        t_documenttypechecklist_comment_local_str
        );

    if (!documenttypechecklist_list_element_local_var) {
        goto end;
    }

    return documenttypechecklist_list_element_local_var;
end:
    if (pki_documenttypechecklist_id_local_var) {
        free(pki_documenttypechecklist_id_local_var);
        pki_documenttypechecklist_id_local_var = NULL;
    }
    if (fki_documenttype_id_local_var) {
        free(fki_documenttype_id_local_var);
        fki_documenttype_id_local_var = NULL;
    }
    if (e_documenttypechecklist_status_local_nonprim) {
        e_documenttypechecklist_status_local_nonprim = 0;
    }
    if (t_documenttypechecklist_comment_local_str) {
        free(t_documenttypechecklist_comment_local_str);
        t_documenttypechecklist_comment_local_str = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachmentrejectreason_autocomplete_element_response.h"



static attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_create_internal(
    int *pki_attachmentrejectreason_id,
    char *s_attachmentrejectreasonname_x,
    int *b_attachmentrejectreason_isactive
    ) {
    attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_local_var = malloc(sizeof(attachmentrejectreason_autocomplete_element_response_t));
    if (!attachmentrejectreason_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(attachmentrejectreason_autocomplete_element_response_local_var, 0, sizeof(attachmentrejectreason_autocomplete_element_response_t));
    attachmentrejectreason_autocomplete_element_response_local_var->_library_owned = 1;
    attachmentrejectreason_autocomplete_element_response_local_var->pki_attachmentrejectreason_id = pki_attachmentrejectreason_id;
    attachmentrejectreason_autocomplete_element_response_local_var->s_attachmentrejectreasonname_x = s_attachmentrejectreasonname_x;
    attachmentrejectreason_autocomplete_element_response_local_var->b_attachmentrejectreason_isactive = b_attachmentrejectreason_isactive;
    return attachmentrejectreason_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_create(
    int *pki_attachmentrejectreason_id,
    char *s_attachmentrejectreasonname_x,
    int *b_attachmentrejectreason_isactive
    ) {
    int *pki_attachmentrejectreason_id_copy = NULL;
    if (pki_attachmentrejectreason_id) {
        pki_attachmentrejectreason_id_copy = malloc(sizeof(int));
        if (pki_attachmentrejectreason_id_copy) *pki_attachmentrejectreason_id_copy = *pki_attachmentrejectreason_id;
    }
    int *b_attachmentrejectreason_isactive_copy = NULL;
    if (b_attachmentrejectreason_isactive) {
        b_attachmentrejectreason_isactive_copy = malloc(sizeof(int));
        if (b_attachmentrejectreason_isactive_copy) *b_attachmentrejectreason_isactive_copy = *b_attachmentrejectreason_isactive;
    }
    attachmentrejectreason_autocomplete_element_response_t *result = attachmentrejectreason_autocomplete_element_response_create_internal (
        pki_attachmentrejectreason_id_copy,
        s_attachmentrejectreasonname_x,
        b_attachmentrejectreason_isactive_copy
        );
    if (!result) {
        free(pki_attachmentrejectreason_id_copy);
        free(b_attachmentrejectreason_isactive_copy);
    }
    return result;
}

void attachmentrejectreason_autocomplete_element_response_free(attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response) {
    if(NULL == attachmentrejectreason_autocomplete_element_response){
        return ;
    }
    if(attachmentrejectreason_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachmentrejectreason_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id) {
        free(attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id);
        attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id = NULL;
    }
    if (attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x) {
        free(attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x);
        attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x = NULL;
    }
    if (attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive) {
        free(attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive);
        attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive = NULL;
    }
    free(attachmentrejectreason_autocomplete_element_response);
}

cJSON *attachmentrejectreason_autocomplete_element_response_convertToJSON(attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id
    if (!attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAttachmentrejectreasonID", *attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id) == NULL) {
    goto fail; //Numeric
    }


    // attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x
    if (!attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentrejectreasonnameX", attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x) == NULL) {
    goto fail; //String
    }


    // attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive
    if (!attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAttachmentrejectreasonIsactive", *attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_parseFromJSON(cJSON *attachmentrejectreason_autocomplete_element_responseJSON){

    attachmentrejectreason_autocomplete_element_response_t *attachmentrejectreason_autocomplete_element_response_local_var = NULL;

    // define the local variable for attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id
    int *pki_attachmentrejectreason_id_local_var = NULL;

    char *s_attachmentrejectreasonname_x_local_str = NULL;

    // define the local variable for attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive
    int *b_attachmentrejectreason_isactive_local_var = NULL;

    // attachmentrejectreason_autocomplete_element_response->pki_attachmentrejectreason_id
    cJSON *pki_attachmentrejectreason_id = cJSON_GetObjectItemCaseSensitive(attachmentrejectreason_autocomplete_element_responseJSON, "pkiAttachmentrejectreasonID");
    if (cJSON_IsNull(pki_attachmentrejectreason_id)) {
        pki_attachmentrejectreason_id = NULL;
    }
    if (!pki_attachmentrejectreason_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_attachmentrejectreason_id))
    {
    goto end; //Numeric
    }
    pki_attachmentrejectreason_id_local_var = malloc(sizeof(int));
    if(!pki_attachmentrejectreason_id_local_var)
    {
        goto end;
    }
    *pki_attachmentrejectreason_id_local_var = pki_attachmentrejectreason_id->valuedouble;

    // attachmentrejectreason_autocomplete_element_response->s_attachmentrejectreasonname_x
    cJSON *s_attachmentrejectreasonname_x = cJSON_GetObjectItemCaseSensitive(attachmentrejectreason_autocomplete_element_responseJSON, "sAttachmentrejectreasonnameX");
    if (cJSON_IsNull(s_attachmentrejectreasonname_x)) {
        s_attachmentrejectreasonname_x = NULL;
    }
    if (!s_attachmentrejectreasonname_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachmentrejectreasonname_x))
    {
    goto end; //String
    }

    // attachmentrejectreason_autocomplete_element_response->b_attachmentrejectreason_isactive
    cJSON *b_attachmentrejectreason_isactive = cJSON_GetObjectItemCaseSensitive(attachmentrejectreason_autocomplete_element_responseJSON, "bAttachmentrejectreasonIsactive");
    if (cJSON_IsNull(b_attachmentrejectreason_isactive)) {
        b_attachmentrejectreason_isactive = NULL;
    }
    if (!b_attachmentrejectreason_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_attachmentrejectreason_isactive))
    {
    goto end; //Bool
    }
    b_attachmentrejectreason_isactive_local_var = malloc(sizeof(int));
    if(!b_attachmentrejectreason_isactive_local_var)
    {
        goto end;
    }
    *b_attachmentrejectreason_isactive_local_var = b_attachmentrejectreason_isactive->valueint;


    if (s_attachmentrejectreasonname_x && !cJSON_IsNull(s_attachmentrejectreasonname_x)) s_attachmentrejectreasonname_x_local_str = strdup(s_attachmentrejectreasonname_x->valuestring);

    attachmentrejectreason_autocomplete_element_response_local_var = attachmentrejectreason_autocomplete_element_response_create_internal (
        pki_attachmentrejectreason_id_local_var,
        s_attachmentrejectreasonname_x_local_str,
        b_attachmentrejectreason_isactive_local_var
        );

    if (!attachmentrejectreason_autocomplete_element_response_local_var) {
        goto end;
    }

    return attachmentrejectreason_autocomplete_element_response_local_var;
end:
    if (pki_attachmentrejectreason_id_local_var) {
        free(pki_attachmentrejectreason_id_local_var);
        pki_attachmentrejectreason_id_local_var = NULL;
    }
    if (s_attachmentrejectreasonname_x_local_str) {
        free(s_attachmentrejectreasonname_x_local_str);
        s_attachmentrejectreasonname_x_local_str = NULL;
    }
    if (b_attachmentrejectreason_isactive_local_var) {
        free(b_attachmentrejectreason_isactive_local_var);
        b_attachmentrejectreason_isactive_local_var = NULL;
    }
    return NULL;

}

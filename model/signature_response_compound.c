#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_response_compound.h"



static signature_response_compound_t *signature_response_compound_create_internal(
    int pki_signature_id,
    int fki_font_id,
    char *s_signature_url,
    char *s_signature_urlinitials
    ) {
    signature_response_compound_t *signature_response_compound_local_var = malloc(sizeof(signature_response_compound_t));
    if (!signature_response_compound_local_var) {
        return NULL;
    }
    signature_response_compound_local_var->pki_signature_id = pki_signature_id;
    signature_response_compound_local_var->fki_font_id = fki_font_id;
    signature_response_compound_local_var->s_signature_url = s_signature_url;
    signature_response_compound_local_var->s_signature_urlinitials = s_signature_urlinitials;

    signature_response_compound_local_var->_library_owned = 1;
    return signature_response_compound_local_var;
}

__attribute__((deprecated)) signature_response_compound_t *signature_response_compound_create(
    int pki_signature_id,
    int fki_font_id,
    char *s_signature_url,
    char *s_signature_urlinitials
    ) {
    return signature_response_compound_create_internal (
        pki_signature_id,
        fki_font_id,
        s_signature_url,
        s_signature_urlinitials
        );
}

void signature_response_compound_free(signature_response_compound_t *signature_response_compound) {
    if(NULL == signature_response_compound){
        return ;
    }
    if(signature_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "signature_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (signature_response_compound->s_signature_url) {
        free(signature_response_compound->s_signature_url);
        signature_response_compound->s_signature_url = NULL;
    }
    if (signature_response_compound->s_signature_urlinitials) {
        free(signature_response_compound->s_signature_urlinitials);
        signature_response_compound->s_signature_urlinitials = NULL;
    }
    free(signature_response_compound);
}

cJSON *signature_response_compound_convertToJSON(signature_response_compound_t *signature_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // signature_response_compound->pki_signature_id
    if (!signature_response_compound->pki_signature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSignatureID", signature_response_compound->pki_signature_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_response_compound->fki_font_id
    if(signature_response_compound->fki_font_id) {
    if(cJSON_AddNumberToObject(item, "fkiFontID", signature_response_compound->fki_font_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // signature_response_compound->s_signature_url
    if(signature_response_compound->s_signature_url) {
    if(cJSON_AddStringToObject(item, "sSignatureUrl", signature_response_compound->s_signature_url) == NULL) {
    goto fail; //String
    }
    }


    // signature_response_compound->s_signature_urlinitials
    if(signature_response_compound->s_signature_urlinitials) {
    if(cJSON_AddStringToObject(item, "sSignatureUrlinitials", signature_response_compound->s_signature_urlinitials) == NULL) {
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

signature_response_compound_t *signature_response_compound_parseFromJSON(cJSON *signature_response_compoundJSON){

    signature_response_compound_t *signature_response_compound_local_var = NULL;

    // signature_response_compound->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_response_compoundJSON, "pkiSignatureID");
    if (cJSON_IsNull(pki_signature_id)) {
        pki_signature_id = NULL;
    }
    if (!pki_signature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }

    // signature_response_compound->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(signature_response_compoundJSON, "fkiFontID");
    if (cJSON_IsNull(fki_font_id)) {
        fki_font_id = NULL;
    }
    if (fki_font_id) { 
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }
    }

    // signature_response_compound->s_signature_url
    cJSON *s_signature_url = cJSON_GetObjectItemCaseSensitive(signature_response_compoundJSON, "sSignatureUrl");
    if (cJSON_IsNull(s_signature_url)) {
        s_signature_url = NULL;
    }
    if (s_signature_url) { 
    if(!cJSON_IsString(s_signature_url) && !cJSON_IsNull(s_signature_url))
    {
    goto end; //String
    }
    }

    // signature_response_compound->s_signature_urlinitials
    cJSON *s_signature_urlinitials = cJSON_GetObjectItemCaseSensitive(signature_response_compoundJSON, "sSignatureUrlinitials");
    if (cJSON_IsNull(s_signature_urlinitials)) {
        s_signature_urlinitials = NULL;
    }
    if (s_signature_urlinitials) { 
    if(!cJSON_IsString(s_signature_urlinitials) && !cJSON_IsNull(s_signature_urlinitials))
    {
    goto end; //String
    }
    }


    signature_response_compound_local_var = signature_response_compound_create_internal (
        pki_signature_id->valuedouble,
        fki_font_id ? fki_font_id->valuedouble : 0,
        s_signature_url && !cJSON_IsNull(s_signature_url) ? strdup(s_signature_url->valuestring) : NULL,
        s_signature_urlinitials && !cJSON_IsNull(s_signature_urlinitials) ? strdup(s_signature_urlinitials->valuestring) : NULL
        );

    return signature_response_compound_local_var;
end:
    return NULL;

}

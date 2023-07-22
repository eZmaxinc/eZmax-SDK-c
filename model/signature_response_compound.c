#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_response_compound.h"



signature_response_compound_t *signature_response_compound_create(
    int pki_signature_id,
    char *s_signature_url
    ) {
    signature_response_compound_t *signature_response_compound_local_var = malloc(sizeof(signature_response_compound_t));
    if (!signature_response_compound_local_var) {
        return NULL;
    }
    signature_response_compound_local_var->pki_signature_id = pki_signature_id;
    signature_response_compound_local_var->s_signature_url = s_signature_url;

    return signature_response_compound_local_var;
}


void signature_response_compound_free(signature_response_compound_t *signature_response_compound) {
    if(NULL == signature_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_response_compound->s_signature_url) {
        free(signature_response_compound->s_signature_url);
        signature_response_compound->s_signature_url = NULL;
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


    // signature_response_compound->s_signature_url
    if (!signature_response_compound->s_signature_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSignatureUrl", signature_response_compound->s_signature_url) == NULL) {
    goto fail; //String
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
    if (!pki_signature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }

    // signature_response_compound->s_signature_url
    cJSON *s_signature_url = cJSON_GetObjectItemCaseSensitive(signature_response_compoundJSON, "sSignatureUrl");
    if (!s_signature_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_signature_url))
    {
    goto end; //String
    }


    signature_response_compound_local_var = signature_response_compound_create (
        pki_signature_id->valuedouble,
        strdup(s_signature_url->valuestring)
        );

    return signature_response_compound_local_var;
end:
    return NULL;

}

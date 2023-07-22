#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_request_compound.h"



signature_request_compound_t *signature_request_compound_create(
    int pki_signature_id,
    char *t_signature_svg
    ) {
    signature_request_compound_t *signature_request_compound_local_var = malloc(sizeof(signature_request_compound_t));
    if (!signature_request_compound_local_var) {
        return NULL;
    }
    signature_request_compound_local_var->pki_signature_id = pki_signature_id;
    signature_request_compound_local_var->t_signature_svg = t_signature_svg;

    return signature_request_compound_local_var;
}


void signature_request_compound_free(signature_request_compound_t *signature_request_compound) {
    if(NULL == signature_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_request_compound->t_signature_svg) {
        free(signature_request_compound->t_signature_svg);
        signature_request_compound->t_signature_svg = NULL;
    }
    free(signature_request_compound);
}

cJSON *signature_request_compound_convertToJSON(signature_request_compound_t *signature_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // signature_request_compound->pki_signature_id
    if(signature_request_compound->pki_signature_id) {
    if(cJSON_AddNumberToObject(item, "pkiSignatureID", signature_request_compound->pki_signature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // signature_request_compound->t_signature_svg
    if (!signature_request_compound->t_signature_svg) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tSignatureSvg", signature_request_compound->t_signature_svg) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signature_request_compound_t *signature_request_compound_parseFromJSON(cJSON *signature_request_compoundJSON){

    signature_request_compound_t *signature_request_compound_local_var = NULL;

    // signature_request_compound->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "pkiSignatureID");
    if (pki_signature_id) { 
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }
    }

    // signature_request_compound->t_signature_svg
    cJSON *t_signature_svg = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "tSignatureSvg");
    if (!t_signature_svg) {
        goto end;
    }

    
    if(!cJSON_IsString(t_signature_svg))
    {
    goto end; //String
    }


    signature_request_compound_local_var = signature_request_compound_create (
        pki_signature_id ? pki_signature_id->valuedouble : 0,
        strdup(t_signature_svg->valuestring)
        );

    return signature_request_compound_local_var;
end:
    return NULL;

}

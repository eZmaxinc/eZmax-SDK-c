#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_request.h"



signature_request_t *signature_request_create(
    int pki_signature_id,
    char *t_signature_svg
    ) {
    signature_request_t *signature_request_local_var = malloc(sizeof(signature_request_t));
    if (!signature_request_local_var) {
        return NULL;
    }
    signature_request_local_var->pki_signature_id = pki_signature_id;
    signature_request_local_var->t_signature_svg = t_signature_svg;

    return signature_request_local_var;
}


void signature_request_free(signature_request_t *signature_request) {
    if(NULL == signature_request){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_request->t_signature_svg) {
        free(signature_request->t_signature_svg);
        signature_request->t_signature_svg = NULL;
    }
    free(signature_request);
}

cJSON *signature_request_convertToJSON(signature_request_t *signature_request) {
    cJSON *item = cJSON_CreateObject();

    // signature_request->pki_signature_id
    if(signature_request->pki_signature_id) {
    if(cJSON_AddNumberToObject(item, "pkiSignatureID", signature_request->pki_signature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // signature_request->t_signature_svg
    if (!signature_request->t_signature_svg) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tSignatureSvg", signature_request->t_signature_svg) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signature_request_t *signature_request_parseFromJSON(cJSON *signature_requestJSON){

    signature_request_t *signature_request_local_var = NULL;

    // signature_request->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "pkiSignatureID");
    if (pki_signature_id) { 
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }
    }

    // signature_request->t_signature_svg
    cJSON *t_signature_svg = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "tSignatureSvg");
    if (!t_signature_svg) {
        goto end;
    }

    
    if(!cJSON_IsString(t_signature_svg))
    {
    goto end; //String
    }


    signature_request_local_var = signature_request_create (
        pki_signature_id ? pki_signature_id->valuedouble : 0,
        strdup(t_signature_svg->valuestring)
        );

    return signature_request_local_var;
end:
    return NULL;

}

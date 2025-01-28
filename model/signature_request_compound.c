#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_request_compound.h"



static signature_request_compound_t *signature_request_compound_create_internal(
    int pki_signature_id,
    int fki_font_id,
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference,
    char *t_signature_svg,
    char *t_signature_svginitials
    ) {
    signature_request_compound_t *signature_request_compound_local_var = malloc(sizeof(signature_request_compound_t));
    if (!signature_request_compound_local_var) {
        return NULL;
    }
    signature_request_compound_local_var->pki_signature_id = pki_signature_id;
    signature_request_compound_local_var->fki_font_id = fki_font_id;
    signature_request_compound_local_var->e_signature_preference = e_signature_preference;
    signature_request_compound_local_var->t_signature_svg = t_signature_svg;
    signature_request_compound_local_var->t_signature_svginitials = t_signature_svginitials;

    signature_request_compound_local_var->_library_owned = 1;
    return signature_request_compound_local_var;
}

__attribute__((deprecated)) signature_request_compound_t *signature_request_compound_create(
    int pki_signature_id,
    int fki_font_id,
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference,
    char *t_signature_svg,
    char *t_signature_svginitials
    ) {
    return signature_request_compound_create_internal (
        pki_signature_id,
        fki_font_id,
        e_signature_preference,
        t_signature_svg,
        t_signature_svginitials
        );
}

void signature_request_compound_free(signature_request_compound_t *signature_request_compound) {
    if(NULL == signature_request_compound){
        return ;
    }
    if(signature_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "signature_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (signature_request_compound->t_signature_svg) {
        free(signature_request_compound->t_signature_svg);
        signature_request_compound->t_signature_svg = NULL;
    }
    if (signature_request_compound->t_signature_svginitials) {
        free(signature_request_compound->t_signature_svginitials);
        signature_request_compound->t_signature_svginitials = NULL;
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


    // signature_request_compound->fki_font_id
    if (!signature_request_compound->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", signature_request_compound->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_request_compound->e_signature_preference
    if (ezmax_api_definition__full_field_e_signature_preference__NULL == signature_request_compound->e_signature_preference) {
        goto fail;
    }
    cJSON *e_signature_preference_local_JSON = field_e_signature_preference_convertToJSON(signature_request_compound->e_signature_preference);
    if(e_signature_preference_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSignaturePreference", e_signature_preference_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // signature_request_compound->t_signature_svg
    if(signature_request_compound->t_signature_svg) {
    if(cJSON_AddStringToObject(item, "tSignatureSvg", signature_request_compound->t_signature_svg) == NULL) {
    goto fail; //String
    }
    }


    // signature_request_compound->t_signature_svginitials
    if(signature_request_compound->t_signature_svginitials) {
    if(cJSON_AddStringToObject(item, "tSignatureSvginitials", signature_request_compound->t_signature_svginitials) == NULL) {
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

signature_request_compound_t *signature_request_compound_parseFromJSON(cJSON *signature_request_compoundJSON){

    signature_request_compound_t *signature_request_compound_local_var = NULL;

    // define the local variable for signature_request_compound->e_signature_preference
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference_local_nonprim = 0;

    // signature_request_compound->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "pkiSignatureID");
    if (cJSON_IsNull(pki_signature_id)) {
        pki_signature_id = NULL;
    }
    if (pki_signature_id) { 
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }
    }

    // signature_request_compound->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "fkiFontID");
    if (cJSON_IsNull(fki_font_id)) {
        fki_font_id = NULL;
    }
    if (!fki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }

    // signature_request_compound->e_signature_preference
    cJSON *e_signature_preference = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "eSignaturePreference");
    if (cJSON_IsNull(e_signature_preference)) {
        e_signature_preference = NULL;
    }
    if (!e_signature_preference) {
        goto end;
    }

    
    e_signature_preference_local_nonprim = field_e_signature_preference_parseFromJSON(e_signature_preference); //custom

    // signature_request_compound->t_signature_svg
    cJSON *t_signature_svg = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "tSignatureSvg");
    if (cJSON_IsNull(t_signature_svg)) {
        t_signature_svg = NULL;
    }
    if (t_signature_svg) { 
    if(!cJSON_IsString(t_signature_svg) && !cJSON_IsNull(t_signature_svg))
    {
    goto end; //String
    }
    }

    // signature_request_compound->t_signature_svginitials
    cJSON *t_signature_svginitials = cJSON_GetObjectItemCaseSensitive(signature_request_compoundJSON, "tSignatureSvginitials");
    if (cJSON_IsNull(t_signature_svginitials)) {
        t_signature_svginitials = NULL;
    }
    if (t_signature_svginitials) { 
    if(!cJSON_IsString(t_signature_svginitials) && !cJSON_IsNull(t_signature_svginitials))
    {
    goto end; //String
    }
    }


    signature_request_compound_local_var = signature_request_compound_create_internal (
        pki_signature_id ? pki_signature_id->valuedouble : 0,
        fki_font_id->valuedouble,
        e_signature_preference_local_nonprim,
        t_signature_svg && !cJSON_IsNull(t_signature_svg) ? strdup(t_signature_svg->valuestring) : NULL,
        t_signature_svginitials && !cJSON_IsNull(t_signature_svginitials) ? strdup(t_signature_svginitials->valuestring) : NULL
        );

    return signature_request_compound_local_var;
end:
    if (e_signature_preference_local_nonprim) {
        e_signature_preference_local_nonprim = 0;
    }
    return NULL;

}

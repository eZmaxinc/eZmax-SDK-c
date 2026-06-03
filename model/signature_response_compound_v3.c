#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_response_compound_v3.h"



static signature_response_compound_v3_t *signature_response_compound_v3_create_internal(
    int *pki_signature_id,
    int *fki_font_id,
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference,
    int *b_signature_svg,
    int *b_signature_svginitials
    ) {
    signature_response_compound_v3_t *signature_response_compound_v3_local_var = malloc(sizeof(signature_response_compound_v3_t));
    if (!signature_response_compound_v3_local_var) {
        return NULL;
    }
    memset(signature_response_compound_v3_local_var, 0, sizeof(signature_response_compound_v3_t));
    signature_response_compound_v3_local_var->_library_owned = 1;
    signature_response_compound_v3_local_var->pki_signature_id = pki_signature_id;
    signature_response_compound_v3_local_var->fki_font_id = fki_font_id;
    signature_response_compound_v3_local_var->e_signature_preference = e_signature_preference;
    signature_response_compound_v3_local_var->b_signature_svg = b_signature_svg;
    signature_response_compound_v3_local_var->b_signature_svginitials = b_signature_svginitials;
    return signature_response_compound_v3_local_var;
}

__attribute__((deprecated)) signature_response_compound_v3_t *signature_response_compound_v3_create(
    int *pki_signature_id,
    int *fki_font_id,
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference,
    int *b_signature_svg,
    int *b_signature_svginitials
    ) {
    int *pki_signature_id_copy = NULL;
    if (pki_signature_id) {
        pki_signature_id_copy = malloc(sizeof(int));
        if (pki_signature_id_copy) *pki_signature_id_copy = *pki_signature_id;
    }
    int *fki_font_id_copy = NULL;
    if (fki_font_id) {
        fki_font_id_copy = malloc(sizeof(int));
        if (fki_font_id_copy) *fki_font_id_copy = *fki_font_id;
    }
    int *b_signature_svg_copy = NULL;
    if (b_signature_svg) {
        b_signature_svg_copy = malloc(sizeof(int));
        if (b_signature_svg_copy) *b_signature_svg_copy = *b_signature_svg;
    }
    int *b_signature_svginitials_copy = NULL;
    if (b_signature_svginitials) {
        b_signature_svginitials_copy = malloc(sizeof(int));
        if (b_signature_svginitials_copy) *b_signature_svginitials_copy = *b_signature_svginitials;
    }
    signature_response_compound_v3_t *result = signature_response_compound_v3_create_internal (
        pki_signature_id_copy,
        fki_font_id_copy,
        e_signature_preference,
        b_signature_svg_copy,
        b_signature_svginitials_copy
        );
    if (!result) {
        free(pki_signature_id_copy);
        free(fki_font_id_copy);
        free(b_signature_svg_copy);
        free(b_signature_svginitials_copy);
    }
    return result;
}

void signature_response_compound_v3_free(signature_response_compound_v3_t *signature_response_compound_v3) {
    if(NULL == signature_response_compound_v3){
        return ;
    }
    if(signature_response_compound_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "signature_response_compound_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (signature_response_compound_v3->pki_signature_id) {
        free(signature_response_compound_v3->pki_signature_id);
        signature_response_compound_v3->pki_signature_id = NULL;
    }
    if (signature_response_compound_v3->fki_font_id) {
        free(signature_response_compound_v3->fki_font_id);
        signature_response_compound_v3->fki_font_id = NULL;
    }
    if (signature_response_compound_v3->b_signature_svg) {
        free(signature_response_compound_v3->b_signature_svg);
        signature_response_compound_v3->b_signature_svg = NULL;
    }
    if (signature_response_compound_v3->b_signature_svginitials) {
        free(signature_response_compound_v3->b_signature_svginitials);
        signature_response_compound_v3->b_signature_svginitials = NULL;
    }
    free(signature_response_compound_v3);
}

cJSON *signature_response_compound_v3_convertToJSON(signature_response_compound_v3_t *signature_response_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // signature_response_compound_v3->pki_signature_id
    if (!signature_response_compound_v3->pki_signature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSignatureID", *signature_response_compound_v3->pki_signature_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_response_compound_v3->fki_font_id
    if (!signature_response_compound_v3->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", *signature_response_compound_v3->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_response_compound_v3->e_signature_preference
    if (ezmax_api_definition__full_field_e_signature_preference__NULL == signature_response_compound_v3->e_signature_preference) {
        goto fail;
    }
    cJSON *e_signature_preference_local_JSON = field_e_signature_preference_convertToJSON(signature_response_compound_v3->e_signature_preference);
    if(e_signature_preference_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSignaturePreference", e_signature_preference_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // signature_response_compound_v3->b_signature_svg
    if (!signature_response_compound_v3->b_signature_svg) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSignatureSvg", *signature_response_compound_v3->b_signature_svg) == NULL) {
    goto fail; //Bool
    }


    // signature_response_compound_v3->b_signature_svginitials
    if (!signature_response_compound_v3->b_signature_svginitials) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSignatureSvginitials", *signature_response_compound_v3->b_signature_svginitials) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signature_response_compound_v3_t *signature_response_compound_v3_parseFromJSON(cJSON *signature_response_compound_v3JSON){

    signature_response_compound_v3_t *signature_response_compound_v3_local_var = NULL;

    // define the local variable for signature_response_compound_v3->pki_signature_id
    int *pki_signature_id_local_var = NULL;

    // define the local variable for signature_response_compound_v3->fki_font_id
    int *fki_font_id_local_var = NULL;

    // define the local variable for signature_response_compound_v3->e_signature_preference
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference_local_nonprim = 0;

    // define the local variable for signature_response_compound_v3->b_signature_svg
    int *b_signature_svg_local_var = NULL;

    // define the local variable for signature_response_compound_v3->b_signature_svginitials
    int *b_signature_svginitials_local_var = NULL;

    // signature_response_compound_v3->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "pkiSignatureID");
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
    pki_signature_id_local_var = malloc(sizeof(int));
    if(!pki_signature_id_local_var)
    {
        goto end;
    }
    *pki_signature_id_local_var = pki_signature_id->valuedouble;

    // signature_response_compound_v3->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "fkiFontID");
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
    fki_font_id_local_var = malloc(sizeof(int));
    if(!fki_font_id_local_var)
    {
        goto end;
    }
    *fki_font_id_local_var = fki_font_id->valuedouble;

    // signature_response_compound_v3->e_signature_preference
    cJSON *e_signature_preference = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "eSignaturePreference");
    if (cJSON_IsNull(e_signature_preference)) {
        e_signature_preference = NULL;
    }
    if (!e_signature_preference) {
        goto end;
    }

    
    e_signature_preference_local_nonprim = field_e_signature_preference_parseFromJSON(e_signature_preference); //custom

    // signature_response_compound_v3->b_signature_svg
    cJSON *b_signature_svg = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "bSignatureSvg");
    if (cJSON_IsNull(b_signature_svg)) {
        b_signature_svg = NULL;
    }
    if (!b_signature_svg) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_signature_svg))
    {
    goto end; //Bool
    }
    b_signature_svg_local_var = malloc(sizeof(int));
    if(!b_signature_svg_local_var)
    {
        goto end;
    }
    *b_signature_svg_local_var = b_signature_svg->valueint;

    // signature_response_compound_v3->b_signature_svginitials
    cJSON *b_signature_svginitials = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "bSignatureSvginitials");
    if (cJSON_IsNull(b_signature_svginitials)) {
        b_signature_svginitials = NULL;
    }
    if (!b_signature_svginitials) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_signature_svginitials))
    {
    goto end; //Bool
    }
    b_signature_svginitials_local_var = malloc(sizeof(int));
    if(!b_signature_svginitials_local_var)
    {
        goto end;
    }
    *b_signature_svginitials_local_var = b_signature_svginitials->valueint;



    signature_response_compound_v3_local_var = signature_response_compound_v3_create_internal (
        pki_signature_id_local_var,
        fki_font_id_local_var,
        e_signature_preference_local_nonprim,
        b_signature_svg_local_var,
        b_signature_svginitials_local_var
        );

    if (!signature_response_compound_v3_local_var) {
        goto end;
    }

    return signature_response_compound_v3_local_var;
end:
    if (pki_signature_id_local_var) {
        free(pki_signature_id_local_var);
        pki_signature_id_local_var = NULL;
    }
    if (fki_font_id_local_var) {
        free(fki_font_id_local_var);
        fki_font_id_local_var = NULL;
    }
    if (e_signature_preference_local_nonprim) {
        e_signature_preference_local_nonprim = 0;
    }
    if (b_signature_svg_local_var) {
        free(b_signature_svg_local_var);
        b_signature_svg_local_var = NULL;
    }
    if (b_signature_svginitials_local_var) {
        free(b_signature_svginitials_local_var);
        b_signature_svginitials_local_var = NULL;
    }
    return NULL;

}

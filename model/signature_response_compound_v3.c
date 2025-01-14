#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_response_compound_v3.h"


char* signature_response_compound_v3_e_signature_preference_ToString(ezmax_api_definition__full_signature_response_compound_v3__e e_signature_preference) {
    char* e_signature_preferenceArray[] =  { "NULL", "Text", "Handwritten" };
    return e_signature_preferenceArray[e_signature_preference];
}

ezmax_api_definition__full_signature_response_compound_v3__e signature_response_compound_v3_e_signature_preference_FromString(char* e_signature_preference){
    int stringToReturn = 0;
    char *e_signature_preferenceArray[] =  { "NULL", "Text", "Handwritten" };
    size_t sizeofArray = sizeof(e_signature_preferenceArray) / sizeof(e_signature_preferenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_signature_preference, e_signature_preferenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signature_response_compound_v3_t *signature_response_compound_v3_create(
    int pki_signature_id,
    int fki_font_id,
    field_e_signature_preference_t *e_signature_preference,
    int b_signature_svg,
    int b_signature_svginitials
    ) {
    signature_response_compound_v3_t *signature_response_compound_v3_local_var = malloc(sizeof(signature_response_compound_v3_t));
    if (!signature_response_compound_v3_local_var) {
        return NULL;
    }
    signature_response_compound_v3_local_var->pki_signature_id = pki_signature_id;
    signature_response_compound_v3_local_var->fki_font_id = fki_font_id;
    signature_response_compound_v3_local_var->e_signature_preference = e_signature_preference;
    signature_response_compound_v3_local_var->b_signature_svg = b_signature_svg;
    signature_response_compound_v3_local_var->b_signature_svginitials = b_signature_svginitials;

    return signature_response_compound_v3_local_var;
}


void signature_response_compound_v3_free(signature_response_compound_v3_t *signature_response_compound_v3) {
    if(NULL == signature_response_compound_v3){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_response_compound_v3->e_signature_preference) {
        field_e_signature_preference_free(signature_response_compound_v3->e_signature_preference);
        signature_response_compound_v3->e_signature_preference = NULL;
    }
    free(signature_response_compound_v3);
}

cJSON *signature_response_compound_v3_convertToJSON(signature_response_compound_v3_t *signature_response_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // signature_response_compound_v3->pki_signature_id
    if (!signature_response_compound_v3->pki_signature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSignatureID", signature_response_compound_v3->pki_signature_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_response_compound_v3->fki_font_id
    if (!signature_response_compound_v3->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", signature_response_compound_v3->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_response_compound_v3->e_signature_preference
    if (ezmax_api_definition__full_signature_response_compound_v3__NULL == signature_response_compound_v3->e_signature_preference) {
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
    if(cJSON_AddBoolToObject(item, "bSignatureSvg", signature_response_compound_v3->b_signature_svg) == NULL) {
    goto fail; //Bool
    }


    // signature_response_compound_v3->b_signature_svginitials
    if (!signature_response_compound_v3->b_signature_svginitials) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSignatureSvginitials", signature_response_compound_v3->b_signature_svginitials) == NULL) {
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

    // define the local variable for signature_response_compound_v3->e_signature_preference
    field_e_signature_preference_t *e_signature_preference_local_nonprim = NULL;

    // signature_response_compound_v3->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "pkiSignatureID");
    if (!pki_signature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }

    // signature_response_compound_v3->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "fkiFontID");
    if (!fki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }

    // signature_response_compound_v3->e_signature_preference
    cJSON *e_signature_preference = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "eSignaturePreference");
    if (!e_signature_preference) {
        goto end;
    }

    
    e_signature_preference_local_nonprim = field_e_signature_preference_parseFromJSON(e_signature_preference); //custom

    // signature_response_compound_v3->b_signature_svg
    cJSON *b_signature_svg = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "bSignatureSvg");
    if (!b_signature_svg) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_signature_svg))
    {
    goto end; //Bool
    }

    // signature_response_compound_v3->b_signature_svginitials
    cJSON *b_signature_svginitials = cJSON_GetObjectItemCaseSensitive(signature_response_compound_v3JSON, "bSignatureSvginitials");
    if (!b_signature_svginitials) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_signature_svginitials))
    {
    goto end; //Bool
    }


    signature_response_compound_v3_local_var = signature_response_compound_v3_create (
        pki_signature_id->valuedouble,
        fki_font_id->valuedouble,
        e_signature_preference_local_nonprim,
        b_signature_svg->valueint,
        b_signature_svginitials->valueint
        );

    return signature_response_compound_v3_local_var;
end:
    if (e_signature_preference_local_nonprim) {
        field_e_signature_preference_free(e_signature_preference_local_nonprim);
        e_signature_preference_local_nonprim = NULL;
    }
    return NULL;

}

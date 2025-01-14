#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_request.h"


char* signature_request_e_signature_preference_ToString(ezmax_api_definition__full_signature_request__e e_signature_preference) {
    char* e_signature_preferenceArray[] =  { "NULL", "Text", "Handwritten" };
    return e_signature_preferenceArray[e_signature_preference];
}

ezmax_api_definition__full_signature_request__e signature_request_e_signature_preference_FromString(char* e_signature_preference){
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

signature_request_t *signature_request_create(
    int pki_signature_id,
    int fki_font_id,
    field_e_signature_preference_t *e_signature_preference,
    char *t_signature_svg,
    char *t_signature_svginitials
    ) {
    signature_request_t *signature_request_local_var = malloc(sizeof(signature_request_t));
    if (!signature_request_local_var) {
        return NULL;
    }
    signature_request_local_var->pki_signature_id = pki_signature_id;
    signature_request_local_var->fki_font_id = fki_font_id;
    signature_request_local_var->e_signature_preference = e_signature_preference;
    signature_request_local_var->t_signature_svg = t_signature_svg;
    signature_request_local_var->t_signature_svginitials = t_signature_svginitials;

    return signature_request_local_var;
}


void signature_request_free(signature_request_t *signature_request) {
    if(NULL == signature_request){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_request->e_signature_preference) {
        field_e_signature_preference_free(signature_request->e_signature_preference);
        signature_request->e_signature_preference = NULL;
    }
    if (signature_request->t_signature_svg) {
        free(signature_request->t_signature_svg);
        signature_request->t_signature_svg = NULL;
    }
    if (signature_request->t_signature_svginitials) {
        free(signature_request->t_signature_svginitials);
        signature_request->t_signature_svginitials = NULL;
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


    // signature_request->fki_font_id
    if (!signature_request->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", signature_request->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // signature_request->e_signature_preference
    if (ezmax_api_definition__full_signature_request__NULL == signature_request->e_signature_preference) {
        goto fail;
    }
    cJSON *e_signature_preference_local_JSON = field_e_signature_preference_convertToJSON(signature_request->e_signature_preference);
    if(e_signature_preference_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eSignaturePreference", e_signature_preference_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // signature_request->t_signature_svg
    if(signature_request->t_signature_svg) {
    if(cJSON_AddStringToObject(item, "tSignatureSvg", signature_request->t_signature_svg) == NULL) {
    goto fail; //String
    }
    }


    // signature_request->t_signature_svginitials
    if(signature_request->t_signature_svginitials) {
    if(cJSON_AddStringToObject(item, "tSignatureSvginitials", signature_request->t_signature_svginitials) == NULL) {
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

signature_request_t *signature_request_parseFromJSON(cJSON *signature_requestJSON){

    signature_request_t *signature_request_local_var = NULL;

    // define the local variable for signature_request->e_signature_preference
    field_e_signature_preference_t *e_signature_preference_local_nonprim = NULL;

    // signature_request->pki_signature_id
    cJSON *pki_signature_id = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "pkiSignatureID");
    if (pki_signature_id) { 
    if(!cJSON_IsNumber(pki_signature_id))
    {
    goto end; //Numeric
    }
    }

    // signature_request->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "fkiFontID");
    if (!fki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }

    // signature_request->e_signature_preference
    cJSON *e_signature_preference = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "eSignaturePreference");
    if (!e_signature_preference) {
        goto end;
    }

    
    e_signature_preference_local_nonprim = field_e_signature_preference_parseFromJSON(e_signature_preference); //custom

    // signature_request->t_signature_svg
    cJSON *t_signature_svg = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "tSignatureSvg");
    if (t_signature_svg) { 
    if(!cJSON_IsString(t_signature_svg) && !cJSON_IsNull(t_signature_svg))
    {
    goto end; //String
    }
    }

    // signature_request->t_signature_svginitials
    cJSON *t_signature_svginitials = cJSON_GetObjectItemCaseSensitive(signature_requestJSON, "tSignatureSvginitials");
    if (t_signature_svginitials) { 
    if(!cJSON_IsString(t_signature_svginitials) && !cJSON_IsNull(t_signature_svginitials))
    {
    goto end; //String
    }
    }


    signature_request_local_var = signature_request_create (
        pki_signature_id ? pki_signature_id->valuedouble : 0,
        fki_font_id->valuedouble,
        e_signature_preference_local_nonprim,
        t_signature_svg && !cJSON_IsNull(t_signature_svg) ? strdup(t_signature_svg->valuestring) : NULL,
        t_signature_svginitials && !cJSON_IsNull(t_signature_svginitials) ? strdup(t_signature_svginitials->valuestring) : NULL
        );

    return signature_request_local_var;
end:
    if (e_signature_preference_local_nonprim) {
        field_e_signature_preference_free(e_signature_preference_local_nonprim);
        e_signature_preference_local_nonprim = NULL;
    }
    return NULL;

}

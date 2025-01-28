#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_creditcardtransactionresponse_response.h"



static custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_create_internal(
    char *s_creditcardtransaction_is_ocode,
    char *s_creditcardtransaction_responsecode,
    char *s_creditcardtransaction_responseterminalmessage,
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e e_creditcardtransaction_avsresult,
    ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e e_creditcardtransaction_cvdresult
    ) {
    custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_local_var = malloc(sizeof(custom_creditcardtransactionresponse_response_t));
    if (!custom_creditcardtransactionresponse_response_local_var) {
        return NULL;
    }
    custom_creditcardtransactionresponse_response_local_var->s_creditcardtransaction_is_ocode = s_creditcardtransaction_is_ocode;
    custom_creditcardtransactionresponse_response_local_var->s_creditcardtransaction_responsecode = s_creditcardtransaction_responsecode;
    custom_creditcardtransactionresponse_response_local_var->s_creditcardtransaction_responseterminalmessage = s_creditcardtransaction_responseterminalmessage;
    custom_creditcardtransactionresponse_response_local_var->e_creditcardtransaction_avsresult = e_creditcardtransaction_avsresult;
    custom_creditcardtransactionresponse_response_local_var->e_creditcardtransaction_cvdresult = e_creditcardtransaction_cvdresult;

    custom_creditcardtransactionresponse_response_local_var->_library_owned = 1;
    return custom_creditcardtransactionresponse_response_local_var;
}

__attribute__((deprecated)) custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_create(
    char *s_creditcardtransaction_is_ocode,
    char *s_creditcardtransaction_responsecode,
    char *s_creditcardtransaction_responseterminalmessage,
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e e_creditcardtransaction_avsresult,
    ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e e_creditcardtransaction_cvdresult
    ) {
    return custom_creditcardtransactionresponse_response_create_internal (
        s_creditcardtransaction_is_ocode,
        s_creditcardtransaction_responsecode,
        s_creditcardtransaction_responseterminalmessage,
        e_creditcardtransaction_avsresult,
        e_creditcardtransaction_cvdresult
        );
}

void custom_creditcardtransactionresponse_response_free(custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response) {
    if(NULL == custom_creditcardtransactionresponse_response){
        return ;
    }
    if(custom_creditcardtransactionresponse_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_creditcardtransactionresponse_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode) {
        free(custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode);
        custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode = NULL;
    }
    if (custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode) {
        free(custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode);
        custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode = NULL;
    }
    if (custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage) {
        free(custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage);
        custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage = NULL;
    }
    free(custom_creditcardtransactionresponse_response);
}

cJSON *custom_creditcardtransactionresponse_response_convertToJSON(custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode
    if (!custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardtransactionISOcode", custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode) == NULL) {
    goto fail; //String
    }


    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode
    if (!custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardtransactionResponsecode", custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode) == NULL) {
    goto fail; //String
    }


    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage
    if (!custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardtransactionResponseterminalmessage", custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage) == NULL) {
    goto fail; //String
    }


    // custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult
    if(custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult != ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__NULL) {
    cJSON *e_creditcardtransaction_avsresult_local_JSON = field_e_creditcardtransaction_avsresult_convertToJSON(custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult);
    if(e_creditcardtransaction_avsresult_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCreditcardtransactionAvsresult", e_creditcardtransaction_avsresult_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult
    if(custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult != ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__NULL) {
    cJSON *e_creditcardtransaction_cvdresult_local_JSON = field_e_creditcardtransaction_cvdresult_convertToJSON(custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult);
    if(e_creditcardtransaction_cvdresult_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCreditcardtransactionCvdresult", e_creditcardtransaction_cvdresult_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_parseFromJSON(cJSON *custom_creditcardtransactionresponse_responseJSON){

    custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_local_var = NULL;

    // define the local variable for custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e e_creditcardtransaction_avsresult_local_nonprim = 0;

    // define the local variable for custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult
    ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e e_creditcardtransaction_cvdresult_local_nonprim = 0;

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode
    cJSON *s_creditcardtransaction_is_ocode = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "sCreditcardtransactionISOcode");
    if (cJSON_IsNull(s_creditcardtransaction_is_ocode)) {
        s_creditcardtransaction_is_ocode = NULL;
    }
    if (!s_creditcardtransaction_is_ocode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_is_ocode))
    {
    goto end; //String
    }

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode
    cJSON *s_creditcardtransaction_responsecode = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "sCreditcardtransactionResponsecode");
    if (cJSON_IsNull(s_creditcardtransaction_responsecode)) {
        s_creditcardtransaction_responsecode = NULL;
    }
    if (!s_creditcardtransaction_responsecode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_responsecode))
    {
    goto end; //String
    }

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage
    cJSON *s_creditcardtransaction_responseterminalmessage = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "sCreditcardtransactionResponseterminalmessage");
    if (cJSON_IsNull(s_creditcardtransaction_responseterminalmessage)) {
        s_creditcardtransaction_responseterminalmessage = NULL;
    }
    if (!s_creditcardtransaction_responseterminalmessage) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_responseterminalmessage))
    {
    goto end; //String
    }

    // custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult
    cJSON *e_creditcardtransaction_avsresult = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "eCreditcardtransactionAvsresult");
    if (cJSON_IsNull(e_creditcardtransaction_avsresult)) {
        e_creditcardtransaction_avsresult = NULL;
    }
    if (e_creditcardtransaction_avsresult) { 
    e_creditcardtransaction_avsresult_local_nonprim = field_e_creditcardtransaction_avsresult_parseFromJSON(e_creditcardtransaction_avsresult); //custom
    }

    // custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult
    cJSON *e_creditcardtransaction_cvdresult = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "eCreditcardtransactionCvdresult");
    if (cJSON_IsNull(e_creditcardtransaction_cvdresult)) {
        e_creditcardtransaction_cvdresult = NULL;
    }
    if (e_creditcardtransaction_cvdresult) { 
    e_creditcardtransaction_cvdresult_local_nonprim = field_e_creditcardtransaction_cvdresult_parseFromJSON(e_creditcardtransaction_cvdresult); //custom
    }


    custom_creditcardtransactionresponse_response_local_var = custom_creditcardtransactionresponse_response_create_internal (
        strdup(s_creditcardtransaction_is_ocode->valuestring),
        strdup(s_creditcardtransaction_responsecode->valuestring),
        strdup(s_creditcardtransaction_responseterminalmessage->valuestring),
        e_creditcardtransaction_avsresult ? e_creditcardtransaction_avsresult_local_nonprim : 0,
        e_creditcardtransaction_cvdresult ? e_creditcardtransaction_cvdresult_local_nonprim : 0
        );

    return custom_creditcardtransactionresponse_response_local_var;
end:
    if (e_creditcardtransaction_avsresult_local_nonprim) {
        e_creditcardtransaction_avsresult_local_nonprim = 0;
    }
    if (e_creditcardtransaction_cvdresult_local_nonprim) {
        e_creditcardtransaction_cvdresult_local_nonprim = 0;
    }
    return NULL;

}

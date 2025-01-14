#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_creditcardtransactionresponse_response.h"


char* custom_creditcardtransactionresponse_response_e_creditcardtransaction_avsresult_ToString(ezmax_api_definition__full_custom_creditcardtransactionresponse_response__e e_creditcardtransaction_avsresult) {
    char* e_creditcardtransaction_avsresultArray[] =  { "NULL", "Match", "NoMatch", "PartialMatch", "NotImplemented", "NotVerified" };
    return e_creditcardtransaction_avsresultArray[e_creditcardtransaction_avsresult];
}

ezmax_api_definition__full_custom_creditcardtransactionresponse_response__e custom_creditcardtransactionresponse_response_e_creditcardtransaction_avsresult_FromString(char* e_creditcardtransaction_avsresult){
    int stringToReturn = 0;
    char *e_creditcardtransaction_avsresultArray[] =  { "NULL", "Match", "NoMatch", "PartialMatch", "NotImplemented", "NotVerified" };
    size_t sizeofArray = sizeof(e_creditcardtransaction_avsresultArray) / sizeof(e_creditcardtransaction_avsresultArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_creditcardtransaction_avsresult, e_creditcardtransaction_avsresultArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* custom_creditcardtransactionresponse_response_e_creditcardtransaction_cvdresult_ToString(ezmax_api_definition__full_custom_creditcardtransactionresponse_response__e e_creditcardtransaction_cvdresult) {
    char* e_creditcardtransaction_cvdresultArray[] =  { "NULL", "Match", "NoMatch", "NotVerified" };
    return e_creditcardtransaction_cvdresultArray[e_creditcardtransaction_cvdresult];
}

ezmax_api_definition__full_custom_creditcardtransactionresponse_response__e custom_creditcardtransactionresponse_response_e_creditcardtransaction_cvdresult_FromString(char* e_creditcardtransaction_cvdresult){
    int stringToReturn = 0;
    char *e_creditcardtransaction_cvdresultArray[] =  { "NULL", "Match", "NoMatch", "NotVerified" };
    size_t sizeofArray = sizeof(e_creditcardtransaction_cvdresultArray) / sizeof(e_creditcardtransaction_cvdresultArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_creditcardtransaction_cvdresult, e_creditcardtransaction_cvdresultArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_create(
    char *s_creditcardtransaction_is_ocode,
    char *s_creditcardtransaction_responsecode,
    char *s_creditcardtransaction_responseterminalmessage,
    field_e_creditcardtransaction_avsresult_t *e_creditcardtransaction_avsresult,
    field_e_creditcardtransaction_cvdresult_t *e_creditcardtransaction_cvdresult
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

    return custom_creditcardtransactionresponse_response_local_var;
}


void custom_creditcardtransactionresponse_response_free(custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response) {
    if(NULL == custom_creditcardtransactionresponse_response){
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
    if (custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult) {
        field_e_creditcardtransaction_avsresult_free(custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult);
        custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult = NULL;
    }
    if (custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult) {
        field_e_creditcardtransaction_cvdresult_free(custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult);
        custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult = NULL;
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
    if(custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult != ezmax_api_definition__full_custom_creditcardtransactionresponse_response__NULL) {
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
    if(custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult != ezmax_api_definition__full_custom_creditcardtransactionresponse_response__NULL) {
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
    field_e_creditcardtransaction_avsresult_t *e_creditcardtransaction_avsresult_local_nonprim = NULL;

    // define the local variable for custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult
    field_e_creditcardtransaction_cvdresult_t *e_creditcardtransaction_cvdresult_local_nonprim = NULL;

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_is_ocode
    cJSON *s_creditcardtransaction_is_ocode = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "sCreditcardtransactionISOcode");
    if (!s_creditcardtransaction_is_ocode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_is_ocode))
    {
    goto end; //String
    }

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_responsecode
    cJSON *s_creditcardtransaction_responsecode = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "sCreditcardtransactionResponsecode");
    if (!s_creditcardtransaction_responsecode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_responsecode))
    {
    goto end; //String
    }

    // custom_creditcardtransactionresponse_response->s_creditcardtransaction_responseterminalmessage
    cJSON *s_creditcardtransaction_responseterminalmessage = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "sCreditcardtransactionResponseterminalmessage");
    if (!s_creditcardtransaction_responseterminalmessage) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_responseterminalmessage))
    {
    goto end; //String
    }

    // custom_creditcardtransactionresponse_response->e_creditcardtransaction_avsresult
    cJSON *e_creditcardtransaction_avsresult = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "eCreditcardtransactionAvsresult");
    if (e_creditcardtransaction_avsresult) { 
    e_creditcardtransaction_avsresult_local_nonprim = field_e_creditcardtransaction_avsresult_parseFromJSON(e_creditcardtransaction_avsresult); //custom
    }

    // custom_creditcardtransactionresponse_response->e_creditcardtransaction_cvdresult
    cJSON *e_creditcardtransaction_cvdresult = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransactionresponse_responseJSON, "eCreditcardtransactionCvdresult");
    if (e_creditcardtransaction_cvdresult) { 
    e_creditcardtransaction_cvdresult_local_nonprim = field_e_creditcardtransaction_cvdresult_parseFromJSON(e_creditcardtransaction_cvdresult); //custom
    }


    custom_creditcardtransactionresponse_response_local_var = custom_creditcardtransactionresponse_response_create (
        strdup(s_creditcardtransaction_is_ocode->valuestring),
        strdup(s_creditcardtransaction_responsecode->valuestring),
        strdup(s_creditcardtransaction_responseterminalmessage->valuestring),
        e_creditcardtransaction_avsresult ? e_creditcardtransaction_avsresult_local_nonprim : NULL,
        e_creditcardtransaction_cvdresult ? e_creditcardtransaction_cvdresult_local_nonprim : NULL
        );

    return custom_creditcardtransactionresponse_response_local_var;
end:
    if (e_creditcardtransaction_avsresult_local_nonprim) {
        field_e_creditcardtransaction_avsresult_free(e_creditcardtransaction_avsresult_local_nonprim);
        e_creditcardtransaction_avsresult_local_nonprim = NULL;
    }
    if (e_creditcardtransaction_cvdresult_local_nonprim) {
        field_e_creditcardtransaction_cvdresult_free(e_creditcardtransaction_cvdresult_local_nonprim);
        e_creditcardtransaction_cvdresult_local_nonprim = NULL;
    }
    return NULL;

}

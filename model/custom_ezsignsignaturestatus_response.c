#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignsignaturestatus_response.h"


char* custom_ezsignsignaturestatus_response_e_ezsignsignaturestatus_steptype_ToString(ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e e_ezsignsignaturestatus_steptype) {
    char* e_ezsignsignaturestatus_steptypeArray[] =  { "NULL", "Form", "Signature" };
    return e_ezsignsignaturestatus_steptypeArray[e_ezsignsignaturestatus_steptype];
}

ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e custom_ezsignsignaturestatus_response_e_ezsignsignaturestatus_steptype_FromString(char* e_ezsignsignaturestatus_steptype){
    int stringToReturn = 0;
    char *e_ezsignsignaturestatus_steptypeArray[] =  { "NULL", "Form", "Signature" };
    size_t sizeofArray = sizeof(e_ezsignsignaturestatus_steptypeArray) / sizeof(e_ezsignsignaturestatus_steptypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignaturestatus_steptype, e_ezsignsignaturestatus_steptypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response_create(
    ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e e_ezsignsignaturestatus_steptype,
    int i_ezsignsignaturestatus_step,
    int i_ezsignsignaturestatus_total,
    int i_ezsignsignaturestatus_signed
    ) {
    custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response_local_var = malloc(sizeof(custom_ezsignsignaturestatus_response_t));
    if (!custom_ezsignsignaturestatus_response_local_var) {
        return NULL;
    }
    custom_ezsignsignaturestatus_response_local_var->e_ezsignsignaturestatus_steptype = e_ezsignsignaturestatus_steptype;
    custom_ezsignsignaturestatus_response_local_var->i_ezsignsignaturestatus_step = i_ezsignsignaturestatus_step;
    custom_ezsignsignaturestatus_response_local_var->i_ezsignsignaturestatus_total = i_ezsignsignaturestatus_total;
    custom_ezsignsignaturestatus_response_local_var->i_ezsignsignaturestatus_signed = i_ezsignsignaturestatus_signed;

    return custom_ezsignsignaturestatus_response_local_var;
}


void custom_ezsignsignaturestatus_response_free(custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response) {
    if(NULL == custom_ezsignsignaturestatus_response){
        return ;
    }
    listEntry_t *listEntry;
    free(custom_ezsignsignaturestatus_response);
}

cJSON *custom_ezsignsignaturestatus_response_convertToJSON(custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignsignaturestatus_response->e_ezsignsignaturestatus_steptype
    if (ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_NULL == custom_ezsignsignaturestatus_response->e_ezsignsignaturestatus_steptype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eEzsignsignaturestatusSteptype", e_ezsignsignaturestatus_steptypecustom_ezsignsignaturestatus_response_ToString(custom_ezsignsignaturestatus_response->e_ezsignsignaturestatus_steptype)) == NULL)
    {
    goto fail; //Enum
    }


    // custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_step
    if (!custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturestatusStep", custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_step) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_total
    if (!custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_total) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturestatusTotal", custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_total) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_signed
    if (!custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_signed) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignaturestatusSigned", custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_signed) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response_parseFromJSON(cJSON *custom_ezsignsignaturestatus_responseJSON){

    custom_ezsignsignaturestatus_response_t *custom_ezsignsignaturestatus_response_local_var = NULL;

    // custom_ezsignsignaturestatus_response->e_ezsignsignaturestatus_steptype
    cJSON *e_ezsignsignaturestatus_steptype = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignaturestatus_responseJSON, "eEzsignsignaturestatusSteptype");
    if (!e_ezsignsignaturestatus_steptype) {
        goto end;
    }

    ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_e e_ezsignsignaturestatus_steptypeVariable;
    
    if(!cJSON_IsString(e_ezsignsignaturestatus_steptype))
    {
    goto end; //Enum
    }
    e_ezsignsignaturestatus_steptypeVariable = custom_ezsignsignaturestatus_response_e_ezsignsignaturestatus_steptype_FromString(e_ezsignsignaturestatus_steptype->valuestring);

    // custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_step
    cJSON *i_ezsignsignaturestatus_step = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignaturestatus_responseJSON, "iEzsignsignaturestatusStep");
    if (!i_ezsignsignaturestatus_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturestatus_step))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_total
    cJSON *i_ezsignsignaturestatus_total = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignaturestatus_responseJSON, "iEzsignsignaturestatusTotal");
    if (!i_ezsignsignaturestatus_total) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturestatus_total))
    {
    goto end; //Numeric
    }

    // custom_ezsignsignaturestatus_response->i_ezsignsignaturestatus_signed
    cJSON *i_ezsignsignaturestatus_signed = cJSON_GetObjectItemCaseSensitive(custom_ezsignsignaturestatus_responseJSON, "iEzsignsignaturestatusSigned");
    if (!i_ezsignsignaturestatus_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignaturestatus_signed))
    {
    goto end; //Numeric
    }


    custom_ezsignsignaturestatus_response_local_var = custom_ezsignsignaturestatus_response_create (
        e_ezsignsignaturestatus_steptypeVariable,
        i_ezsignsignaturestatus_step->valuedouble,
        i_ezsignsignaturestatus_total->valuedouble,
        i_ezsignsignaturestatus_signed->valuedouble
        );

    return custom_ezsignsignaturestatus_response_local_var;
end:
    return NULL;

}

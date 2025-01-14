#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_dnsrecord_response.h"


char* custom_dnsrecord_response_e_dnsrecord_type_ToString(ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e e_dnsrecord_type) {
    char* e_dnsrecord_typeArray[] =  { "NULL", "CNAME", "MX", "TXT" };
    return e_dnsrecord_typeArray[e_dnsrecord_type];
}

ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e custom_dnsrecord_response_e_dnsrecord_type_FromString(char* e_dnsrecord_type){
    int stringToReturn = 0;
    char *e_dnsrecord_typeArray[] =  { "NULL", "CNAME", "MX", "TXT" };
    size_t sizeofArray = sizeof(e_dnsrecord_typeArray) / sizeof(e_dnsrecord_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_dnsrecord_type, e_dnsrecord_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* custom_dnsrecord_response_e_dnsrecord_validation_ToString(ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e e_dnsrecord_validation) {
    char* e_dnsrecord_validationArray[] =  { "NULL", "Match", "Mismatch", "NotFound" };
    return e_dnsrecord_validationArray[e_dnsrecord_validation];
}

ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e custom_dnsrecord_response_e_dnsrecord_validation_FromString(char* e_dnsrecord_validation){
    int stringToReturn = 0;
    char *e_dnsrecord_validationArray[] =  { "NULL", "Match", "Mismatch", "NotFound" };
    size_t sizeofArray = sizeof(e_dnsrecord_validationArray) / sizeof(e_dnsrecord_validationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_dnsrecord_validation, e_dnsrecord_validationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_dnsrecord_response_t *custom_dnsrecord_response_create(
    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e e_dnsrecord_type,
    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e e_dnsrecord_validation,
    char *s_dnsrecord_name,
    char *s_dnsrecord_value,
    char *s_dnsrecord_expectedvalue,
    int b_dnsrecord_must_match
    ) {
    custom_dnsrecord_response_t *custom_dnsrecord_response_local_var = malloc(sizeof(custom_dnsrecord_response_t));
    if (!custom_dnsrecord_response_local_var) {
        return NULL;
    }
    custom_dnsrecord_response_local_var->e_dnsrecord_type = e_dnsrecord_type;
    custom_dnsrecord_response_local_var->e_dnsrecord_validation = e_dnsrecord_validation;
    custom_dnsrecord_response_local_var->s_dnsrecord_name = s_dnsrecord_name;
    custom_dnsrecord_response_local_var->s_dnsrecord_value = s_dnsrecord_value;
    custom_dnsrecord_response_local_var->s_dnsrecord_expectedvalue = s_dnsrecord_expectedvalue;
    custom_dnsrecord_response_local_var->b_dnsrecord_must_match = b_dnsrecord_must_match;

    return custom_dnsrecord_response_local_var;
}


void custom_dnsrecord_response_free(custom_dnsrecord_response_t *custom_dnsrecord_response) {
    if(NULL == custom_dnsrecord_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_dnsrecord_response->s_dnsrecord_name) {
        free(custom_dnsrecord_response->s_dnsrecord_name);
        custom_dnsrecord_response->s_dnsrecord_name = NULL;
    }
    if (custom_dnsrecord_response->s_dnsrecord_value) {
        free(custom_dnsrecord_response->s_dnsrecord_value);
        custom_dnsrecord_response->s_dnsrecord_value = NULL;
    }
    if (custom_dnsrecord_response->s_dnsrecord_expectedvalue) {
        free(custom_dnsrecord_response->s_dnsrecord_expectedvalue);
        custom_dnsrecord_response->s_dnsrecord_expectedvalue = NULL;
    }
    free(custom_dnsrecord_response);
}

cJSON *custom_dnsrecord_response_convertToJSON(custom_dnsrecord_response_t *custom_dnsrecord_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_dnsrecord_response->e_dnsrecord_type
    if (ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_NULL == custom_dnsrecord_response->e_dnsrecord_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eDnsrecordType", e_dnsrecord_typecustom_dnsrecord_response_ToString(custom_dnsrecord_response->e_dnsrecord_type)) == NULL)
    {
    goto fail; //Enum
    }


    // custom_dnsrecord_response->e_dnsrecord_validation
    if (ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_NULL == custom_dnsrecord_response->e_dnsrecord_validation) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eDnsrecordValidation", e_dnsrecord_validationcustom_dnsrecord_response_ToString(custom_dnsrecord_response->e_dnsrecord_validation)) == NULL)
    {
    goto fail; //Enum
    }


    // custom_dnsrecord_response->s_dnsrecord_name
    if (!custom_dnsrecord_response->s_dnsrecord_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDnsrecordName", custom_dnsrecord_response->s_dnsrecord_name) == NULL) {
    goto fail; //String
    }


    // custom_dnsrecord_response->s_dnsrecord_value
    if(custom_dnsrecord_response->s_dnsrecord_value) {
    if(cJSON_AddStringToObject(item, "sDnsrecordValue", custom_dnsrecord_response->s_dnsrecord_value) == NULL) {
    goto fail; //String
    }
    }


    // custom_dnsrecord_response->s_dnsrecord_expectedvalue
    if(custom_dnsrecord_response->s_dnsrecord_expectedvalue) {
    if(cJSON_AddStringToObject(item, "sDnsrecordExpectedvalue", custom_dnsrecord_response->s_dnsrecord_expectedvalue) == NULL) {
    goto fail; //String
    }
    }


    // custom_dnsrecord_response->b_dnsrecord_must_match
    if (!custom_dnsrecord_response->b_dnsrecord_must_match) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDnsrecordMustMatch", custom_dnsrecord_response->b_dnsrecord_must_match) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_dnsrecord_response_t *custom_dnsrecord_response_parseFromJSON(cJSON *custom_dnsrecord_responseJSON){

    custom_dnsrecord_response_t *custom_dnsrecord_response_local_var = NULL;

    // custom_dnsrecord_response->e_dnsrecord_type
    cJSON *e_dnsrecord_type = cJSON_GetObjectItemCaseSensitive(custom_dnsrecord_responseJSON, "eDnsrecordType");
    if (!e_dnsrecord_type) {
        goto end;
    }

    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e e_dnsrecord_typeVariable;
    
    if(!cJSON_IsString(e_dnsrecord_type))
    {
    goto end; //Enum
    }
    e_dnsrecord_typeVariable = custom_dnsrecord_response_e_dnsrecord_type_FromString(e_dnsrecord_type->valuestring);

    // custom_dnsrecord_response->e_dnsrecord_validation
    cJSON *e_dnsrecord_validation = cJSON_GetObjectItemCaseSensitive(custom_dnsrecord_responseJSON, "eDnsrecordValidation");
    if (!e_dnsrecord_validation) {
        goto end;
    }

    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e e_dnsrecord_validationVariable;
    
    if(!cJSON_IsString(e_dnsrecord_validation))
    {
    goto end; //Enum
    }
    e_dnsrecord_validationVariable = custom_dnsrecord_response_e_dnsrecord_validation_FromString(e_dnsrecord_validation->valuestring);

    // custom_dnsrecord_response->s_dnsrecord_name
    cJSON *s_dnsrecord_name = cJSON_GetObjectItemCaseSensitive(custom_dnsrecord_responseJSON, "sDnsrecordName");
    if (!s_dnsrecord_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_dnsrecord_name))
    {
    goto end; //String
    }

    // custom_dnsrecord_response->s_dnsrecord_value
    cJSON *s_dnsrecord_value = cJSON_GetObjectItemCaseSensitive(custom_dnsrecord_responseJSON, "sDnsrecordValue");
    if (s_dnsrecord_value) { 
    if(!cJSON_IsString(s_dnsrecord_value) && !cJSON_IsNull(s_dnsrecord_value))
    {
    goto end; //String
    }
    }

    // custom_dnsrecord_response->s_dnsrecord_expectedvalue
    cJSON *s_dnsrecord_expectedvalue = cJSON_GetObjectItemCaseSensitive(custom_dnsrecord_responseJSON, "sDnsrecordExpectedvalue");
    if (s_dnsrecord_expectedvalue) { 
    if(!cJSON_IsString(s_dnsrecord_expectedvalue) && !cJSON_IsNull(s_dnsrecord_expectedvalue))
    {
    goto end; //String
    }
    }

    // custom_dnsrecord_response->b_dnsrecord_must_match
    cJSON *b_dnsrecord_must_match = cJSON_GetObjectItemCaseSensitive(custom_dnsrecord_responseJSON, "bDnsrecordMustMatch");
    if (!b_dnsrecord_must_match) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_dnsrecord_must_match))
    {
    goto end; //Bool
    }


    custom_dnsrecord_response_local_var = custom_dnsrecord_response_create (
        e_dnsrecord_typeVariable,
        e_dnsrecord_validationVariable,
        strdup(s_dnsrecord_name->valuestring),
        s_dnsrecord_value && !cJSON_IsNull(s_dnsrecord_value) ? strdup(s_dnsrecord_value->valuestring) : NULL,
        s_dnsrecord_expectedvalue && !cJSON_IsNull(s_dnsrecord_expectedvalue) ? strdup(s_dnsrecord_expectedvalue->valuestring) : NULL,
        b_dnsrecord_must_match->valueint
        );

    return custom_dnsrecord_response_local_var;
end:
    return NULL;

}

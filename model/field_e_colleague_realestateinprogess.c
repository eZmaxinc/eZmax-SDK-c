#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_colleague_realestateinprogess.h"


char* field_e_colleague_realestateinprogess_field_e_colleague_realestateinprogess_ToString(ezmax_api_definition__full_field_e_colleague_realestateinprogess__e field_e_colleague_realestateinprogess) {
    char *field_e_colleague_realestateinprogessArray[] =  { "NULL", "No", "Read", "Modify", "Create" };
    return field_e_colleague_realestateinprogessArray[field_e_colleague_realestateinprogess];
}

ezmax_api_definition__full_field_e_colleague_realestateinprogess__e field_e_colleague_realestateinprogess_field_e_colleague_realestateinprogess_FromString(char* field_e_colleague_realestateinprogess) {
    int stringToReturn = 0;
    char *field_e_colleague_realestateinprogessArray[] =  { "NULL", "No", "Read", "Modify", "Create" };
    size_t sizeofArray = sizeof(field_e_colleague_realestateinprogessArray) / sizeof(field_e_colleague_realestateinprogessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_colleague_realestateinprogess, field_e_colleague_realestateinprogessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_colleague_realestateinprogess_field_e_colleague_realestateinprogess_convertToJSON(ezmax_api_definition__full_field_e_colleague_realestateinprogess__e field_e_colleague_realestateinprogess) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_colleague_realestateinprogess", field_e_colleague_realestateinprogess_field_e_colleague_realestateinprogess_ToString(field_e_colleague_realestateinprogess)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_colleague_realestateinprogess__e field_e_colleague_realestateinprogess_field_e_colleague_realestateinprogess_parseFromJSON(cJSON *field_e_colleague_realestateinprogessJSON) {
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e *field_e_colleague_realestateinprogess = NULL;
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e field_e_colleague_realestateinprogessVariable;
    cJSON *field_e_colleague_realestateinprogessVar = cJSON_GetObjectItemCaseSensitive(field_e_colleague_realestateinprogessJSON, "field_e_colleague_realestateinprogess");
    if(!cJSON_IsString(field_e_colleague_realestateinprogessVar) || (field_e_colleague_realestateinprogessVar->valuestring == NULL)){
        goto end;
    }
    field_e_colleague_realestateinprogessVariable = field_e_colleague_realestateinprogess_field_e_colleague_realestateinprogess_FromString(field_e_colleague_realestateinprogessVar->valuestring);
    return field_e_colleague_realestateinprogessVariable;
end:
    return 0;
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enum_textvalidation.h"


char* enum_textvalidation_enum_textvalidation_ToString(ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation) {
    char *enum_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    return enum_textvalidationArray[enum_textvalidation];
}

ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation_enum_textvalidation_FromString(char* enum_textvalidation) {
    int stringToReturn = 0;
    char *enum_textvalidationArray[] =  { "NULL", "None", "Date (YYYY-MM-DD)", "Date (MM/DD/YYYY)", "Date (MM/DD/YY)", "Date (DD/MM/YYYY)", "Date (DD/MM/YY)", "Email", "Letters", "Numbers", "Zip", "Zip+4", "PostalCode", "Custom" };
    size_t sizeofArray = sizeof(enum_textvalidationArray) / sizeof(enum_textvalidationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enum_textvalidation, enum_textvalidationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *enum_textvalidation_enum_textvalidation_convertToJSON(ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "enum_textvalidation", enum_textvalidation_enum_textvalidation_ToString(enum_textvalidation)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation_enum_textvalidation_parseFromJSON(cJSON *enum_textvalidationJSON) {
    ezmax_api_definition__full_enum_textvalidation__e *enum_textvalidation = NULL;
    ezmax_api_definition__full_enum_textvalidation__e enum_textvalidationVariable;
    cJSON *enum_textvalidationVar = cJSON_GetObjectItemCaseSensitive(enum_textvalidationJSON, "enum_textvalidation");
    if(!cJSON_IsString(enum_textvalidationVar) || (enum_textvalidationVar->valuestring == NULL)){
        goto end;
    }
    enum_textvalidationVariable = enum_textvalidation_enum_textvalidation_FromString(enum_textvalidationVar->valuestring);
    return enum_textvalidationVariable;
end:
    return 0;
}

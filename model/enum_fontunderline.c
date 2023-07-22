#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enum_fontunderline.h"


char* enum_fontunderline_enum_fontunderline_ToString(ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline) {
    char *enum_fontunderlineArray[] =  { "NULL", "None", "Single", "Double" };
    return enum_fontunderlineArray[enum_fontunderline];
}

ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline_enum_fontunderline_FromString(char* enum_fontunderline) {
    int stringToReturn = 0;
    char *enum_fontunderlineArray[] =  { "NULL", "None", "Single", "Double" };
    size_t sizeofArray = sizeof(enum_fontunderlineArray) / sizeof(enum_fontunderlineArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enum_fontunderline, enum_fontunderlineArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *enum_fontunderline_enum_fontunderline_convertToJSON(ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "enum_fontunderline", enum_fontunderline_enum_fontunderline_ToString(enum_fontunderline)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline_enum_fontunderline_parseFromJSON(cJSON *enum_fontunderlineJSON) {
    ezmax_api_definition__full_enum_fontunderline__e *enum_fontunderline = NULL;
    ezmax_api_definition__full_enum_fontunderline__e enum_fontunderlineVariable;
    cJSON *enum_fontunderlineVar = cJSON_GetObjectItemCaseSensitive(enum_fontunderlineJSON, "enum_fontunderline");
    if(!cJSON_IsString(enum_fontunderlineVar) || (enum_fontunderlineVar->valuestring == NULL)){
        goto end;
    }
    enum_fontunderlineVariable = enum_fontunderline_enum_fontunderline_FromString(enum_fontunderlineVar->valuestring);
    return enum_fontunderlineVariable;
end:
    return 0;
}

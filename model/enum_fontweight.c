#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enum_fontweight.h"


char* enum_fontweight_enum_fontweight_ToString(ezmax_api_definition__full_enum_fontweight__e enum_fontweight) {
    char *enum_fontweightArray[] =  { "NULL", "Normal", "Bold" };
    return enum_fontweightArray[enum_fontweight];
}

ezmax_api_definition__full_enum_fontweight__e enum_fontweight_enum_fontweight_FromString(char* enum_fontweight) {
    int stringToReturn = 0;
    char *enum_fontweightArray[] =  { "NULL", "Normal", "Bold" };
    size_t sizeofArray = sizeof(enum_fontweightArray) / sizeof(enum_fontweightArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enum_fontweight, enum_fontweightArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *enum_fontweight_enum_fontweight_convertToJSON(ezmax_api_definition__full_enum_fontweight__e enum_fontweight) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "enum_fontweight", enum_fontweight_enum_fontweight_ToString(enum_fontweight)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_enum_fontweight__e enum_fontweight_enum_fontweight_parseFromJSON(cJSON *enum_fontweightJSON) {
    ezmax_api_definition__full_enum_fontweight__e *enum_fontweight = NULL;
    ezmax_api_definition__full_enum_fontweight__e enum_fontweightVariable;
    cJSON *enum_fontweightVar = cJSON_GetObjectItemCaseSensitive(enum_fontweightJSON, "enum_fontweight");
    if(!cJSON_IsString(enum_fontweightVar) || (enum_fontweightVar->valuestring == NULL)){
        goto end;
    }
    enum_fontweightVariable = enum_fontweight_enum_fontweight_FromString(enum_fontweightVar->valuestring);
    return enum_fontweightVariable;
end:
    return 0;
}

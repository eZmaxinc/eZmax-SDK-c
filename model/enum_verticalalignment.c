#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enum_verticalalignment.h"


char* enum_verticalalignment_enum_verticalalignment_ToString(ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment) {
    char *enum_verticalalignmentArray[] =  { "NULL", "Bottom", "Middle", "Top" };
    return enum_verticalalignmentArray[enum_verticalalignment];
}

ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment_enum_verticalalignment_FromString(char* enum_verticalalignment) {
    int stringToReturn = 0;
    char *enum_verticalalignmentArray[] =  { "NULL", "Bottom", "Middle", "Top" };
    size_t sizeofArray = sizeof(enum_verticalalignmentArray) / sizeof(enum_verticalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enum_verticalalignment, enum_verticalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *enum_verticalalignment_enum_verticalalignment_convertToJSON(ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "enum_verticalalignment", enum_verticalalignment_enum_verticalalignment_ToString(enum_verticalalignment)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment_enum_verticalalignment_parseFromJSON(cJSON *enum_verticalalignmentJSON) {
    ezmax_api_definition__full_enum_verticalalignment__e *enum_verticalalignment = NULL;
    ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignmentVariable;
    cJSON *enum_verticalalignmentVar = cJSON_GetObjectItemCaseSensitive(enum_verticalalignmentJSON, "enum_verticalalignment");
    if(!cJSON_IsString(enum_verticalalignmentVar) || (enum_verticalalignmentVar->valuestring == NULL)){
        goto end;
    }
    enum_verticalalignmentVariable = enum_verticalalignment_enum_verticalalignment_FromString(enum_verticalalignmentVar->valuestring);
    return enum_verticalalignmentVariable;
end:
    return 0;
}

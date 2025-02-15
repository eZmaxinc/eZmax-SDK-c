#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enum_horizontalalignment.h"


char* enum_horizontalalignment_enum_horizontalalignment_ToString(ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment) {
    char *enum_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    return enum_horizontalalignmentArray[enum_horizontalalignment];
}

ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment_enum_horizontalalignment_FromString(char* enum_horizontalalignment) {
    int stringToReturn = 0;
    char *enum_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    size_t sizeofArray = sizeof(enum_horizontalalignmentArray) / sizeof(enum_horizontalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enum_horizontalalignment, enum_horizontalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *enum_horizontalalignment_convertToJSON(ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "enum_horizontalalignment", enum_horizontalalignment_enum_horizontalalignment_ToString(enum_horizontalalignment)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment_parseFromJSON(cJSON *enum_horizontalalignmentJSON) {
    if(!cJSON_IsString(enum_horizontalalignmentJSON) || (enum_horizontalalignmentJSON->valuestring == NULL)) {
        return 0;
    }
    return enum_horizontalalignment_enum_horizontalalignment_FromString(enum_horizontalalignmentJSON->valuestring);
}

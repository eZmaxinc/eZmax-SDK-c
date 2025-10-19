#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enum_reportdata_type.h"


char* enum_reportdata_type_enum_reportdata_type_ToString(ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type) {
    char *enum_reportdata_typeArray[] =  { "NULL", "Date", "FileSize", "Integer", "Money", "Number", "Percentage", "PercentageInt", "Period", "String" };
    return enum_reportdata_typeArray[enum_reportdata_type];
}

ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type_enum_reportdata_type_FromString(char* enum_reportdata_type) {
    int stringToReturn = 0;
    char *enum_reportdata_typeArray[] =  { "NULL", "Date", "FileSize", "Integer", "Money", "Number", "Percentage", "PercentageInt", "Period", "String" };
    size_t sizeofArray = sizeof(enum_reportdata_typeArray) / sizeof(enum_reportdata_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enum_reportdata_type, enum_reportdata_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *enum_reportdata_type_convertToJSON(ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "enum_reportdata_type", enum_reportdata_type_enum_reportdata_type_ToString(enum_reportdata_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type_parseFromJSON(cJSON *enum_reportdata_typeJSON) {
    if(!cJSON_IsString(enum_reportdata_typeJSON) || (enum_reportdata_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return enum_reportdata_type_enum_reportdata_type_FromString(enum_reportdata_typeJSON->valuestring);
}
